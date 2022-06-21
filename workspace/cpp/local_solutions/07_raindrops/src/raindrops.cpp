#include <string>
#include <unordered_map>
#include <iostream>
#include <map>

#include "raindrops.h"

namespace raindrops {
    std::string convert(int nb) {
        std::string final_string;
        std::map<int, std::string> words_matrix = {{3,"Pling"}, {5, "Plang"}, {7, "Plong"}};
        
        for (auto val:words_matrix) {
            if (nb%val.first == 0) {
                final_string.append(val.second);
            }
        }

        if (final_string.empty()) {
            final_string.append(std::to_string(nb));
        }

        return final_string;
    }
}  // namespace raindrops
