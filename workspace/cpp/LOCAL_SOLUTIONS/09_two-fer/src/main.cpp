#include <iostream>
#include <cstdint>
#include <string>

#include "two_fer.h"

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    std::cout<<two_fer::two_fer()<<std::endl;
    std::cout<<two_fer::two_fer("Alice")<<std::endl;

    return 0;
}
