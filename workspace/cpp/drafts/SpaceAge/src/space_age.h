#pragma once

namespace space_age {
    class space_age
    {
        private:
            /* calc age */
            double age_calc(std::string planet);
            /* data */
            const double earth_reference = 31557600; // Seconds
            double age_sec;
        public:
            space_age();
            space_age(int seconds);
            ~space_age();

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
