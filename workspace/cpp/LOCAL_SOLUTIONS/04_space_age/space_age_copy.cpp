#include <iostream>
#include <string>

struct orbitalAge
{
	std::string	planet;
	float orbital_period;
} ltable[] {
		"Mercury", 0.2408467,
		"Venus", 0.61519726,
		"Earth", 1,
		"Mars", 1.8808158,
		"Jupiter", 11.862615,
		"Saturn", 29.447498,
		"Uranus", 84.016846,
		"Neptune", 164.79132
	};

static float earth_reference = 31557600; // Seconds

namespace space_age {
	float get_space_age(std::string plt, float sec) {
		size_t tsize = sizeof(ltable)/sizeof(ltable[0]);
		float op = 0;

		for (int i = 0; i < tsize; i++) {
			if (ltable[i].planet == plt)
				op = ltable[i].orbital_period;
		}

		return sec/(op*earth_reference);
	}
}

int main(){
	std::string planet_name;
	std::cin>>planet_name;
	std::cout<<space_age::get_space_age(planet_name, earth_reference)<<std::endl;

	return 0;
}
