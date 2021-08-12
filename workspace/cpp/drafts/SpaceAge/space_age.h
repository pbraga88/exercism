#pragma once

class space_age
{
private:
    /* data */
    static float earth_reference = 31557600; // Seconds
    float age;
public:
    space_age(int seconds);
    ~space_age();

    float on_mercury();
    float on_venus();
    float on_earth();
    float on_mars();
    float on_jupiter();
    float on_saturn();
    float on_uranus();
    float on_neptune();
};



// space_age::space_age(/* args */)
// {
// }

// space_age::~space_age()
// {
// }
