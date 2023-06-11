#ifndef MPC_CONTROLLER_H_
#define MPC_CONTROLLER_H_

#include <string>
#include <fstream>
#include <memory>

#include "src/MPC_Controller/controller.h"
#include "eigen3/Eigen/Core"
#include "src/Common/vehicle_state_provider.h"
#include "src/Proto/control/chassis.pb.h"
#include "src/Proto/control/control_cmd.pb.h"
#include "src/Proto/control/imu.pb.h"
#include "src/Proto/control/vehicle_config.pb.h"



class MPCController : public Controller{
    public:
    MPCController();

    virtual ~MPCController();

    // bool Init(const carla_msgs::CarlaEgoVehicleInfo &vehinfo_message,
    //             const nav_msgs::Path &waypoint_message,
    //             const nav_msgs::Odometry &odometry_message,
    //             const sensor_msgs::Imu &imu_message,
    //             const carla_msgs::CarlaEgoVehicleStatus &ego_sts_message) override;

    bool Init() override;

    bool ComputeControlCommand();

    bool Reset() override;

    void stop() override;

    std::string Name() const override;

}




#endif