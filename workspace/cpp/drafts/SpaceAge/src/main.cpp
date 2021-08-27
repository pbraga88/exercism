#include <iostream>
#include "space_age.h"

int main(int argc, char **argv) {
    (void)argc;
    int seconds;
    
    seconds = atoi(*(argv+1));
    space_age::space_age *orbitalAge = new space_age::space_age(seconds);

    std::cout<<"Age on Mercury: "<<orbitalAge->on_mercury()<<std::endl;
    // std::cout<<"Age on Venus: "<<orbitalAge->on_venus()<<std::endl;
    // std::cout<<"Age on Earth: "<<orbitalAge->on_earth()<<std::endl;
    // std::cout<<"Age on Mars: "<<orbitalAge->on_mars()<<std::endl;
    // std::cout<<"Age on Jupiter: "<<orbitalAge->on_jupiter()<<std::endl;
    // std::cout<<"Age on Saturn: "<<orbitalAge->on_saturn()<<std::endl;
    // std::cout<<"Age on Uranus: "<<orbitalAge->on_uranus()<<std::endl;
    // std::cout<<"Age on Neptune: "<<orbitalAge->on_neptune()<<std::endl;

    delete orbitalAge;
    return 0;
}