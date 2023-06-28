#include <iostream>
#include <vector>
#include "sieve.h"

int main(int argc, char **argv) {
    (void)argc;
    std::cout<<argv[1]<<std::endl;

    std::vector<int> prime_list = sieve::primes(atoi(argv[1]));
    for(auto &prime:prime_list) {
        std::cout<<prime<<" ";
    }
    std::cout<<std::endl;

    return 0;
}