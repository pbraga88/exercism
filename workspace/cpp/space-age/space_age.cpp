#include <string>
#include "space_age.h"

struct planets_op
{
	std::string planet;
	double earth_years;
};

static planets_op planets_lt [] = {
	"Mercury", 	0.2408467,
	"Venus", 0.61519726,
	"Earth", 1.0,
	"Mars", 1.8808158,
	"Jupiter", 11.862615,
	"Saturn", 29.447498,
	"Uranus", 84.016846,
	"Neptune", 164.79132
};

namespace space_age {
	static constexpr int earth_reference = 31557600; // Seconds

	space_age::space_age(long seconds) {
		this->age_sec = seconds;
	}

	int64_t space_age::seconds() const{
		return age_sec;
	}

	double space_age::age_calc(std::string planet) const{

		double op = 0;

		for (auto& planet_op : planets_lt) {
			if (planet_op.planet == planet) {
				op = planet_op.earth_years;
			}
		}
		return age_sec/(earth_reference * op);
	}

	double space_age::on_mercury() const{
		return space_age::age_calc("Mercury");
	}
	double space_age::on_venus() const{
		return space_age::age_calc("Venus");
	}
	double space_age::on_earth() const{
		return space_age::age_calc("Earth");
	}
	double space_age::on_mars() const{
		return space_age::age_calc("Mars");
	}
	double space_age::on_jupiter() const{
		return space_age::age_calc("Jupiter");
	}
	double space_age::on_saturn() const{
		return space_age::age_calc("Saturn");
	}
	double space_age::on_uranus() const{
		return space_age::age_calc("Uranus");
	}
	double space_age::on_neptune() const{
		return space_age::age_calc("Neptune");
	}
}  // namespace space_age
