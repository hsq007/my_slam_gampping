#include "ros/ros.h"
#include "my_slam_gmapping.h"

/***********************************************************************************************************
  基于滤波器的SLAM算法-《gmapping算法的删减版》
  在原来gmapping源码的基础之上，公众号：小白学移动机器人的作者对其进行了大刀阔斧的更改。
  （1）删除几乎所有不需要的代码，对代码的运行结构也进行了调整
  （2）对该代码进行详细中文注释，以及对核心代码进行更改
  =============公众号：小白学移动机器人========================================================================
  欢迎关注公众号，从此学习的路上变得不再孤单，加油！奥利给！！！
  2020年11月11日
***********************************************************************************************************/

int main(int argc, char ** argv)
{
    ros::init(argc, argv, "my_slam_gmapping");

    MySlamGMapping slamer;
    slamer.startLiveSlam();    
    ros::spin();
    
    return 0;
}