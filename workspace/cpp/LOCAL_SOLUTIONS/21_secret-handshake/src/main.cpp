#include <iostream>
#include <vector>
#include <string>
#include <boost/date_time/posix_time/posix_time.hpp>
#include "secret_handshake.h"

using namespace boost::posix_time;

int main(int argc, char **argv) {
    (void)argc;
    // (void)argv;
    // std::cout<<argv[1]<<std::endl;
    // std::cout<<"\""<<say::in_english(std::stoll(argv[1]))<<"\"<<std::endl;

    std::cout<<std::boolalpha;

    std::vector<std::string> sec = secret_handshake::commands(std::stoll(argv[1]));
    for(auto elem:sec) {
        std::cout<<elem<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
