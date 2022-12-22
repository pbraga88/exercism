#include <iostream>
#include <cstdint>
#include <string>
#include <map>
#include <vector>

#include "grade_school.h"

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    // grade_school::school school_;

    // school_.add("Bruna", 2);
    // school_.add("Aimee", 2);
    // school_.add("Carla", 2);
    
    // school_.add("Maria", 1);
    // school_.add("Marianna", 1);
    // school_.add("Paulo", 1);

    // const auto actual = school_.roster();
    // for (auto i:actual){
    //     std::cout<<"grade "<<i.first<<":"<<std::endl;
    //     for (auto j : i.second) {
    //        std::cout<<j<<std::endl; 
    //     }
    // }
    // auto actual_2 = school_.grade(1);
    

    const grade_school::school school_{};
    
    const auto actual = school_.grade(1);
    
    if (actual.empty()) {
        std::cout<<"Also Empty"<<std::endl;
    }

    return 0;
}
