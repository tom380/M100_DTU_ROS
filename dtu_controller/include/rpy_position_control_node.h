/** @file rpy_position_control_node.h
 *  @version 3.3
 *  @date June, 2020
 *
 *  @brief
 *  RPY position control node (w/ yaw rate & z vel)
 *
 *  @copyright 2020 Ananda Nielsen, DTU. All rights reserved.
 *
 */

#ifndef rpy_POS_CONTROL_NODE_H
#define RPY_POS_CONTROL_NODE_H

// ROS includes
#include <ros/ros.h>
#include <std_msgs/UInt8.h>
#include <tf/tf.h>
#include <sensor_msgs/Joy.h>
#include <geometry_msgs/Twist.h>

// #include <geometry_msgs/QuaternionStamped.h>
// #include <geometry_msgs/Vector3Stamped.h>
// #include <sensor_msgs/NavSatFix.h>


// DJI SDK includes
// #include <dji_sdk/DroneTaskControl.h>
// #include <dji_sdk/SDKControlAuthority.h>
// #include <dji_sdk/DroneArmControl.h>
// #include <dji_sdk/QueryDroneVersion.h>
// #include <dji_sdk/SetLocalPosRef.h>

void readParameters( ros::NodeHandle nh );

void controlCallback( const ros::TimerEvent& );
void checkControlStatusCallback( const std_msgs::UInt8 value );
void updateReferenceCallback( const geometry_msgs::Twist reference );
void updatePoseCallback( const geometry_msgs::Twist pose );

void rampReferenceUpdate();

#endif // DEMO_FLIGHT_CONTROL_H
