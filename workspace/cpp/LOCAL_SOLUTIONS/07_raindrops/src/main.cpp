#include <iostream>
#include <cstdint>
#include <string>

#include "raindrops.h"

int main(int argc, char **argv) {
    (void)argc;
    // (void)argv;
    std::string ret = raindrops::convert(atoi(argv[1]));
    std::cout<<ret<<std::endl;

    return 0;
}
