#include <iostream>
#include <string.h>
#include <ctype.h>

#include "triangle.h"

        // scalene,
        // isosceles,
        // equilateral

int main(int argc, char **argv) {
    (void)argc;
    // (void)argv;
    double s1{atof(argv[1])}, s2{atof(argv[2])}, s3{atof(argv[3])};

    triangle::flavor type = triangle::kind(s1,s2,s3);
    std::cout<<"type: "<<static_cast<int>(type)<<std::endl;

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