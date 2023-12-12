#include <iostream>
#include <vector>
#include <string>
#include "robot_name.h"

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    // std::cout<<argv[1]<<std::endl;
    // std::cout<<"\""<<say::in_english(std::stoll(argv[1]))<<"\"<<std::endl;

    std::cout<<std::boolalpha;

    const robot_name::robot robot;
    robot_name::robot robot2;

    std::cout<<robot.name()<<std::endl;
    std::cout<<robot2.name()<<std::endl;

    // robot.reset();
    robot2.reset();
    std::cout<<robot.name()<<std::endl;
    std::cout<<robot2.name()<<std::endl;

    return 0;
}
