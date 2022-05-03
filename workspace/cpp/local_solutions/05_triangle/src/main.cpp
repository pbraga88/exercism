#include <iostream>
#include <ctype.h>

#include "triangle.h"

        // scalene,
        // isosceles,
        // equilateral

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    triangle::flavor type = triangle::kind(2,2,3);
    std::cout<<static_cast<int>(type)<<std::endl;

    switch (type)
    {
    case triangle::flavor::scalene:
        std::cout<<"scalene"<<std::endl;
        break;
    case triangle::flavor::isosceles:
        std::cout<<"isosceles"<<std::endl;
        break;
    case triangle::flavor::equilateral:
        std::cout<<"equilateral"<<std::endl;
        break;
    default:
        break;
    }


    return 0;
}