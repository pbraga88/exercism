#include <iostream>
#include <cstdint>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>

#include "nth_prime.h"

int main(int argc, char **argv) {
    // (void)argc;
    // (void)argv;
    if (argc != 2) {
        std::cout<<"This app requires 1 argument"<<std::endl;
    }
    
    std::cout<<"The nth number is: "<<nth_prime::nth(atoi(argv[1]))<<std::endl;
    // nth_prime::nth_prime_number(atoi(argv[1]));

    return 0;
}
