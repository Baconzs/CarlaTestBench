#ifndef VEHICLE_STATE_PROVIDER_H_
#define VEHICLE_STATE_PROVIDER_H_

#include <memory>
#include <string>

#include "carla_msgs/CarlaEgoVehicleStatus.h"
#include "carla_msgs/CarlaEgoVehicleInfo.h"
#include "carla_ackermann_msgs/EgoVehicleControlInfo.h"
#include <sensor_msgs/Imu.h>
#include <nav_msgs/Odometry.h>
#include <nav_msgs/Path.h>

class VehicleStateProvider{

    public:
    bool Update(const carla_msgs::CarlaEgoVehicleInfo &vehinfo_message,
                const nav_msgs::Path &waypoint_message,
                const nav_msgs::Odometry &odometry_message,
                const sensor_msgs::Imu &imu_message,
                const carla_msgs::CarlaEgoVehicleStatus &ego_sts_message);
    
    virtual ~VehicleStateProvider() = default;

    double x() const;
    double y() const;
    double z() const;

    double roll() const;
    double pitch() const;
    double yaw() const;

    double yawrate() const;
    
    double x_line_velocity() const;
    double y_line_velocity() const;
    double z_line_velocity() const;

    double x_line_acceleration() const;
    double y_line_acceleration() const;
    double z_line_acceleration() const;

    double geer() const;

    double steering_percentage() const;

    private:
    
};






#endif