#include <iostream>
#include "space_age.h"

int main(int argc, char **argv) {
    (void)argc;
    int seconds;
    
    seconds = atoi(*(argv+1));
    space_age::SpaceAge *orbitalAge = new space_age::SpaceAge(seconds);

    std::cout<<orbitalAge->on_mercury()<<std::endl;
    std::cout<<orbitalAge->on_venus()<<std::endl;
    std::cout<<orbitalAge->on_earth()<<std::endl;
    std::cout<<orbitalAge->on_mars()<<std::endl;
    std::cout<<orbitalAge->on_jupiter()<<std::endl;
    std::cout<<orbitalAge->on_saturn()<<std::endl;
    std::cout<<orbitalAge->on_uranus()<<std::endl;
    std::cout<<orbitalAge->on_neptune()<<std::endl;

    delete orbitalAge;
    return 0;
}