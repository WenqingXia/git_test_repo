/*
 * @Author: your name
 * @Date: 2021-11-01 22:25:08
 * @LastEditTime: 2021-11-01 23:01:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /rosbook_ws/src/test_communication/src/hello_world_node.cpp
 */
# include "ros/ros.h"

int main(int argc, char **argv){
    ros::init(argc, argv,"hello_world_node");
    ros::NodeHandle nh;
    ROS_INFO_STREAM("hello world!!!");
}