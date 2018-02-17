#include <ros/ros.h>

int main(int argc , char** argv ){

  ros::init(argc , argv , "vision_node");

  ros::NodeHandle nh;

  ROS_INFO("Hello world");

  ros::spin();
}
