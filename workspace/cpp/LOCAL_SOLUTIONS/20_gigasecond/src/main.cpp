#include <iostream>
#include <vector>
#include <string>
#include <boost/date_time/posix_time/posix_time.hpp>
#include "gigasecond.h"

using namespace boost::posix_time;

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    // std::cout<<argv[1]<<std::endl;
    // std::cout<<"\""<<say::in_english(std::stoll(argv[1]))<<"\"<<std::endl;
    
    std::cout<<std::boolalpha;
    {// TEST 01
        const ptime actual = gigasecond::advance(time_from_string("2011-04-25 00:00:00"));
        const ptime expected(time_from_string("2043-01-01 01:46:40"));
        std::cout<<(actual==expected)<<std::endl;
    }

    return 0;
}
