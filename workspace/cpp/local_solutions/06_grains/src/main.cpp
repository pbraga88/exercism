#include <iostream>
#include <cstdint>

#include "grains.h"

        // scalene,
        // isosceles,
        // equilateral

int main(int argc, char **argv) {
    (void)argc;
    // (void)argv;

    int given_square {atoi(argv[1])};

    uint64_t square = grains::square(given_square);
    std::cout<<"Total on square "<<given_square<<": "<<square<<std::endl;
    
    // uint64_t square = grains::square(1);
    // std::cout<<"Total on square "<<1<<": "<<square<<std::endl;
    // square = grains::square(2);
    // std::cout<<"Total on square "<<2<<": "<<square<<std::endl;
    // square = grains::square(3);
    // std::cout<<"Total on square "<<3<<": "<<square<<std::endl;

    std::cout<<"Total amount of grains: "<<grains::total()<<std::endl;

    return 0;
}