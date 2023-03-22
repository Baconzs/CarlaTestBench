#include "ros/ros.h"
#include "std_msgs/String.h"
#include "carla_msgs/CarlaEgoVehicleStatus.h"
#include "carla_msgs/CarlaEgoVehicleInfo.h"
#include "carla_ackermann_msgs/EgoVehicleControlInfo.h"
#include "ackermann_msgs/AckermannDrive.h"
#include <sensor_msgs/Imu.h>
#include <nav_msgs/Odometry.h>
#include <sensor_msgs/PointCloud2.h>
#include <visualization_msgs/Marker.h>
#include <nav_msgs/Path.h>
#include <string>
//#include "carla_waypoint_types/CarlaWaypoint.h"
#include "vehicle_config.pb.h"
#include "control_cmd.pb.h"
#include "vehicle_config_helper.h"

void LidarCallback(const sensor_msgs::PointCloud2 &lidar_message);
void EgoVehicleStatusCallback(const carla_msgs::CarlaEgoVehicleStatus &ego_sts_message);
void ImuCallback(const sensor_msgs::Imu &imu_message);
void OdometryCallback(const nav_msgs::Odometry &odometry_message);
void WayPointCallback(const nav_msgs::Path &waypoint_message);
void EgoVehicleInfoCallback(const carla_msgs::CarlaEgoVehicleInfo &vehinfo_message);

ros::Publisher pub_lidar;
std::string cfgPath = "/home/sen/CarlaTestBench/catkin_ws/src/ros-bridge/carla_mpc/config/vehicle_config.pb.txt";

int main(int argc, char **argv)
{
    ros::init(argc, argv, "carla_mpc");
    ros::NodeHandle n;
    ros::Subscriber egoVehicleSts_sub = n.subscribe("/carla/ego_vehicle/vehicle_status",10,EgoVehicleStatusCallback);
    ros::Subscriber imu_sub = n.subscribe("/carla/ego_vehicle/imu",10,ImuCallback);
    ros::Subscriber odo_sub = n.subscribe("/carla/ego_vehicle/odometry",10,OdometryCallback);
    ros::Subscriber lidar_sub = n.subscribe("/carla/ego_vehicle/lidar",50,LidarCallback);
    ros::Subscriber wayPoint_sub = n.subscribe("/carla/ego_vehicle/waypoints",10,WayPointCallback);
    ros::Subscriber vehicleInfo_sub = n.subscribe("/carla/ego_vehicle/vehicle_info",10,EgoVehicleInfoCallback);

    ros::Publisher pub = n.advertise<ackermann_msgs::AckermannDrive>("/carla/ego_vehicle/ackermann_cmd",10);
    pub_lidar = n.advertise<sensor_msgs::PointCloud2>("/cloud",50);
    ros::Rate loop_rate(20);

    vehicle_config::VehicleParameter vehPara;
    if(!GetProtoFromTXTFile(cfgPath, &vehPara))
    {
        ROS_ERROR_STREAM("Open proto txt file failed!");
        return 0;
    }

    double cf = vehPara.cf();
    vehPara.PrintDebugString();

    while(ros::ok())
    {
        ROS_INFO_STREAM("Log INFO CF = " << cf);
        vehPara.PrintDebugString();
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

void LidarCallback(const sensor_msgs::PointCloud2 &lidar_message)
{
    pub_lidar.publish(lidar_message);
}

void EgoVehicleStatusCallback(const carla_msgs::CarlaEgoVehicleStatus &ego_sts_message)
{
    ROS_INFO("Current Vehicle Speed: [%f]", ego_sts_message.velocity);
}

void ImuCallback(const sensor_msgs::Imu &imu_message)
{
    ROS_INFO("Current YawRate: [%f]",imu_message.angular_velocity.z);
}

void OdometryCallback(const nav_msgs::Odometry &odometry_message)
{
    ROS_INFO("Current Position x: [%f]", odometry_message.pose.pose.position.x);
    ROS_INFO("Current Position y: [%f]", odometry_message.pose.pose.position.y);
}

void WayPointCallback(const nav_msgs::Path &waypoint_message)
{
    ROS_INFO("The count of waypoint is: [%lu]", waypoint_message.poses.size());
    ROS_INFO("waypoint is OK!");
    
}

void EgoVehicleInfoCallback(const carla_msgs::CarlaEgoVehicleInfo &vehinfo_message)
{
    ROS_INFO("vehinfo_message is ok");
}