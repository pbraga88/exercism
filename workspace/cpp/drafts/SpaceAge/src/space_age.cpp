#include <iostream>
#include <string>
#include "space_age.h"

struct planets_op 
{
	std::string planet;
	float earth_years;
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
	space_age::space_age() {
		
	}
	space_age::space_age(int seconds) {
		this->age_sec = seconds;
	}
	space_age::~space_age() {
	}

	double space_age::age_calc(std::string planet) {

		size_t lt_size = sizeof(planets_lt)/sizeof(planets_lt[0]);
		float op = 0;

		// for (int i = 0; i < (int)lt_size; i++) {
		// 	if (planets_lt[i].planet == planet) {
		// 		op = planets_lt[i].earth_years;
		// 	}
		// }
		
		for (auto& planet_op : planets_lt) {
			if (planet_op.planet == planet) {
				op = planet_op.earth_years;
			}
		}

		return age_sec/(earth_reference * op);
	}

	double space_age::on_mercury() {
		return space_age::age_calc("Mercury");
	}
	double space_age::on_venus() {
		return space_age::age_calc("Venus");
	}
	double space_age::on_earth() {
		return space_age::age_calc("Earth");
	}
	double space_age::on_mars() {
		return space_age::age_calc("Mars");
	}
	double space_age::on_jupiter() {
		return space_age::age_calc("Jupiter");
	}
	double space_age::on_saturn() {
		return space_age::age_calc("Saturn");
	}
	double space_age::on_uranus() {
		return space_age::age_calc("Uranus");
	}
	double space_age::on_neptune() {
		return space_age::age_calc("Neptune");
	}
}
