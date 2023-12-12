#include "robot_name.h"
#include <vector>
#include <stdio.h>    // std::snprintf  
#include <algorithm>  // std::shuffle
#include <random>     // std::default_random_engine
#include <chrono>     // std::chrono::system_clock
namespace {
    const unsigned int MAX_COUNT = 676'000;
    unsigned int name_index = 0;
    std::vector<std::string> names = []() {
        std::vector<std::string> names{};
        names.reserve(MAX_COUNT);
        for (unsigned char first = 'A'; first <= 'Z'; first++)
            for (unsigned char second = 'A'; second <= 'Z'; second++)
                for (unsigned int num = 0; num < 1'000; num++) {
                    char buf[6]{};
                    std::snprintf(buf, sizeof(buf), "%c%c%03u", first, second, num);
                    names.emplace_back(buf);
                }
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::shuffle(names.begin(), names.end(), std::default_random_engine(seed));
        return names;
    }();
}
namespace robot_name {
    robot::robot() {
        reset();
    }
    std::string robot::name() const {
        return _name;
    }
    std::string get_name() {
        if (name_index == MAX_COUNT)
            throw new std::out_of_range("I came here to kick ass and give names, and I'm all outta names!");
        return names[name_index++];
    }
    void robot::reset() {
        _name = get_name();
    }
}  // namespace robot_name