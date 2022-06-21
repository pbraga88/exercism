#include <unordered_map>
#include <iostream>

#include "raindrops.h"

namespace raindrops {
    std::string convert(int nb) {
        std::string final_string;
        std::unordered_map<int, std::string> words_matrix = {{3,"Pling"}, {5, "Plang"}, {7, "Plong"}};
        
        for (int i = 3; i<=7; i+=2) {
            if(!(nb%i)) {
                final_string.append(words_matrix[i]);
            }
        }
        
        return final_string.empty() ? final_string.append(std::to_string(nb)) : final_string;
    }
}  // namespace raindrops