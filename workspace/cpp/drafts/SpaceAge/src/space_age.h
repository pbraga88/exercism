#pragma once

namespace space_age {
    class SpaceAge
    {
        private:
            /* calc age */
            double age_calc(std::string planet);
            /* data */
            const double earth_reference = 31557600; // Seconds
            double age_sec;
        public:
            SpaceAge();
            SpaceAge(int seconds);
            ~SpaceAge();

            double on_mercury();
            double on_venus();
            double on_earth();
            double on_mars();
            double on_jupiter();
            double on_saturn();
            double on_uranus();
            double on_neptune();
    };
}
