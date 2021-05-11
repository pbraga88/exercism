#include <string>
#include <iostream>
#include <algorithm>

namespace reverse_string {
	std::string reversestrsimple(std::string str) {
		std::string aux;
		for(int x = 0; x<str.length(); x++) {
			aux += str[str.length()-x-1];
		}
		return aux;
	}
}  // namespace reverse_string

using namespace reverse_string;

int main() {
	std::string to_invert;// = "abcde fgh";
	std::cin>>to_invert;

	// std::cout<<reversestrsimple(to_invert)<<std::endl; 

	std::reverse(to_invert.begin(), to_invert.end());
	std::cout<<to_invert<<std::endl;

	return 0;
}