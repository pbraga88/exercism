#include <string>
#include <iostream>
#include <map>
#include <array>

#include "raindrops.h"

namespace raindrops {
    const std::array<std::pair<int, std::string>, 3> words_matrix = { {{3, "Pling"},
                                                                       {5, "Plang"},
                                                                       {7, "Plong"}} };

    std::string convert(int nb) {
        std::string final_string;
        
        // Note: using structured binding
        for (auto &[factor, sound] :words_matrix) {
            if (nb%factor == 0) {
                final_string.append(sound);
            }
        }

        if (final_string.empty()) {
            final_string.append(std::to_string(nb));
        }

        return final_string;
    }
}  // namespace raindrops
