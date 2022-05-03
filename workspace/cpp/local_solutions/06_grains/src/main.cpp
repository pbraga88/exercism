#include <iostream>
#include <ctype.h>

#include "grains.h"

        // scalene,
        // isosceles,
        // equilateral

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    int square_nb {64};
    int given_square {2};

    uint64_t total = grains::get_total_amount(square_nb, given_square);
    std::cout<<"Total amount of grains: "<<total<<std::endl;

    std::cout<<"Total on sqaure "<<given_square<<": "<<grains::get_amount_on_given_square()<<std::endl;

    return 0;
}