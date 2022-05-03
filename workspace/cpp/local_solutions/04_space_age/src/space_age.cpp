#include <unordered_map>
#include "space_age.h"

namespace space_age {
	const std::unordered_map<std::string, double> orbital_period_in_earth_years {
		{"Mercury", 0.2408467},
		{"Venus", 0.61519726},
		{"Earth", 1.0},
		{"Mars", 1.8808158},
		{"Jupiter", 11.862615},
		{"Saturn", 29.447498},
		{"Uranus", 84.016846},
		{"Neptune", 164.79132}
	};
	constexpr double earth_year_in_seconds = 31557600;

	int64_t space_age::seconds() const{
		return age_sec;
	}

	double space_age::age_calc(const std::string& planet) const{
		return age_sec/(earth_year_in_seconds * orbital_period_in_earth_years.at(planet));
	}

	double space_age::on_mercury() const{
		return age_calc("Mercury");
	}
	double space_age::on_venus() const{
		return age_calc("Venus");
	}
	double space_age::on_earth() const{
		return age_calc("Earth");
	}
	double space_age::on_mars() const{
		return age_calc("Mars");
	}
	double space_age::on_jupiter() const{
		return age_calc("Jupiter");
	}
	double space_age::on_saturn() const{
		return age_calc("Saturn");
	}
	double space_age::on_uranus() const{
		return age_calc("Uranus");
	}
	double space_age::on_neptune() const{
		return age_calc("Neptune");
	}
}  // namespace space_age
