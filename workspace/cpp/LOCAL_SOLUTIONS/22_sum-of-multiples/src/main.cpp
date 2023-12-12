#include <iostream>
#include <vector>
#include <string>
#include "sum_of_multiples.h"

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    // std::cout<<argv[1]<<std::endl;
    // std::cout<<"\""<<say::in_english(std::stoll(argv[1]))<<"\"<<std::endl;

    std::cout<<std::boolalpha;

    std::cout<<(0 == sum_of_multiples::to({3, 5}, 0))<<std::endl;


    return 0;
}
