#include "ros/ros.h"
#include "std_msgs/String.h"
#include "carla_msgs/CarlaEgoVehicleStatus.h"
#include "carla_ackermann_msgs/EgoVehicleControlInfo.h"
#include "ackermann_msgs/AckermannDrive.h"
#include <sensor_msgs/Imu.h>
#include <nav_msgs/Odometry.h>
#include <sensor_msgs/PointCloud2.h>
#include <visualization_msgs/Marker.h>
#include <nav_msgs/Path.h>
//#include "carla_waypoint_types/CarlaWaypoint.h"
#include "vehicle_config.pb.h"
#include "vehicle_config_helper.h"
#include <string>

void LidarCallback(const sensor_msgs::PointCloud2 &LidarMessage);
void EgoVehicleStatusCallback(const carla_msgs::CarlaEgoVehicleStatus &EgoSts);
void ImuCallback(const sensor_msgs::Imu &EgoImuMessage);
void OdometryCallback(const nav_msgs::Odometry &EgoOdometryMessage);
void WayPointCallback(const nav_msgs::Path &WayPointMessage);

ros::Publisher pub_lidar;
std::string cfgPath = "~/carla-ros-bridge/ros-bridge/carla_mpc/proto";

int main(int argc, char **argv)
{
    ros::init(argc, argv, "carla_mpc");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("/carla/ego_vehicle/vehicle_status",10,EgoVehicleStatusCallback);
    ros::Subscriber imu_sub = n.subscribe("/carla/ego_vehicle/imu",10,ImuCallback);
    ros::Subscriber Odo_sub = n.subscribe("/carla/ego_vehicle/odometry",10,OdometryCallback);
    ros::Subscriber Lidar_sub = n.subscribe("/carla/ego_vehicle/lidar",50,LidarCallback);
    ros::Subscriber WayPoint_sub = n.subscribe("/carla/ego_vehicle/waypoints",10,WayPointCallback);

    ros::Publisher pub = n.advertise<ackermann_msgs::AckermannDrive>("/carla/ego_vehicle/ackermann_cmd",10);
    pub_lidar = n.advertise<sensor_msgs::PointCloud2>("/cloud",50);
    ros::Rate loop_rate(20);

    vehicle_config::VehicleParameter vehPara;
    GetProtoFromTXTFile(cfgPath, &vehPara);
    double cf = vehPara.cf();
    vehPara.PrintDebugString();

    while(ros::ok())
    {
        ackermann_msgs::AckermannDrive ackermann_cmd;
        ackermann_cmd.steering_angle = 1.00;
        ackermann_cmd.steering_angle_velocity = 0.00;
        ackermann_cmd.speed = 10.00;
        ackermann_cmd.acceleration = 0.00;
        ackermann_cmd.jerk = 0.00;
        pub.publish(ackermann_cmd);

        ros::spinOnce();
        loop_rate.sleep();
    }
    
    return 0;
}

void LidarCallback(const sensor_msgs::PointCloud2 &LidarMessage)
{
    pub_lidar.publish(LidarMessage);
}

void EgoVehicleStatusCallback(const carla_msgs::CarlaEgoVehicleStatus &EgoSts)
{
    ROS_INFO("Current Vehicle Speed: [%f]", EgoSts.velocity);
}

void ImuCallback(const sensor_msgs::Imu &EgoImuMessage)
{
    ROS_INFO("Current YawRate: [%f]",EgoImuMessage.angular_velocity.z);
}

void OdometryCallback(const nav_msgs::Odometry &EgoOdometryMessage)
{
    ROS_INFO("Current Position x: [%f]", EgoOdometryMessage.pose.pose.position.x);
    ROS_INFO("Current Position y: [%f]", EgoOdometryMessage.pose.pose.position.y);
}

void WayPointCallback(const nav_msgs::Path &WayPointMessage)
{
    //ROS_INFO("The count of waypoint is: [%lu]", WayPointMessage.poses.size());
    ROS_INFO("waypoint is OK!");
}