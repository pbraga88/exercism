#include <iostream>
#include <cstdint>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>

#include "collatz_conjecture.h"

int main(int argc, char **argv) {
    (void)argc;
    // (void)argv;
    // if (argc != 2) {
    //     std::cout<<"This app requires 1 argument"<<std::endl;
    // }
    
    std::cout<<collatz_conjecture::steps(std::stoi(argv[1]))<<std::endl;


    return 0;
}
