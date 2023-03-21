#ifndef TYPES_H
#define TYPES_H
/**
 * @brief Vehicle Signal Estimation
 * **/
struct VSE
{
    /* data */
    float vehicleSpeed; /*mps*/
    float yawRate;      /*rad/s*/
    float longitAccel;  /*m/s2*/
    float latAccel;     /*m/s2*/

};

/**
 * @brief Current Ego Vehicle Position calculated by Odometry
 **/
struct CurrentPosition
{
    
    float x; /*m*/
    float y; /*m*/
};

/**
 * @brief Controller Output
 **/

struct ControllerOutput
{
    /* data */
    float targetSA; /*Target Steering Angle Unit: deg*/
    float targetLongitAccel; /*Target VCU Longitudinal Acceleration*/
};

