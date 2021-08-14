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
	SpaceAge::SpaceAge() {
		
	}
	SpaceAge::SpaceAge(int seconds) {
		this->age_sec = seconds;
	}
	SpaceAge::~SpaceAge() {
	}

	double SpaceAge::age_calc(std::string planet) {

		size_t lt_size = sizeof(planets_lt)/sizeof(planets_lt[0]);
		float op = 0;

		for (int i = 0; i < (int)lt_size; i++) {
			if (planets_lt[i].planet == planet) {
				op = planets_lt[i].earth_years;
			}
		}
		
		return age_sec/(earth_reference * op);
	}

	double SpaceAge::on_mercury() {
		return SpaceAge::age_calc("Mercury");
	}
	double SpaceAge::on_venus() {
		return SpaceAge::age_calc("Venus");
	}
	double SpaceAge::on_earth() {
		return SpaceAge::age_calc("Earth");
	}
	double SpaceAge::on_mars() {
		return SpaceAge::age_calc("Mars");
	}
	double SpaceAge::on_jupiter() {
		return SpaceAge::age_calc("Jupiter");
	}
	double SpaceAge::on_saturn() {
		return SpaceAge::age_calc("Saturn");
	}
	double SpaceAge::on_uranus() {
		return SpaceAge::age_calc("Uranus");
	}
	double SpaceAge::on_neptune() {
		return SpaceAge::age_calc("Neptune");
	}
}
