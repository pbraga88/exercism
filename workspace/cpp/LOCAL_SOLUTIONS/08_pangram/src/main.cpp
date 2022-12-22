#include <iostream>
#include <cstdint>
#include <string>

#include "pangram.h"

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    std::string test_string {"The quick brown fox jumps over the lazy dog."};
    std::cout<<test_string<<std::endl;
    std::cout<<pangram::is_pangram(test_string)<<std::endl;
    std::cout<<test_string<<std::endl;

    return 0;
}
