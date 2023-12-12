#include <iostream>
#include <vector>
#include <string>
#include "say.h"

int main(int argc, char **argv) {
    (void)argc;
    std::cout<<argv[1]<<std::endl;

    std::cout<<"\""<<say::in_english(std::stoll(argv[1]))<<"\""<<std::endl;

    return 0;
}