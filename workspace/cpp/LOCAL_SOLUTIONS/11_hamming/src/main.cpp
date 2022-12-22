#include <iostream>
#include <cstdint>
#include <string>
#include <map>
#include <vector>

#include "hamming.h"

int main(int argc, char **argv) {
    // (void)argc;
    // (void)argv;
    if (argc!=3){
        std::cout<<"wrong input"<<std::endl;
        exit(1);
    }

    int hamming_distance = hamming::compute(argv[1], argv[2]);    
    std::cout<<"Hamming Distance = "<<hamming_distance<<std::endl;

    return 0;
}
