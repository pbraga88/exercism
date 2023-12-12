#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include <span>

#include "sum_of_multiples.h"

namespace sum_of_multiples {
    int to(std::vector<int> base_values, int level) {
        std::unordered_set<int> unique_multiples;

        // Creates std::span (c++20) from input vector
        std::span<const int> base_values_s = base_values;

        for (const auto &item:base_values_s) {
            for (int i = item; i < level; i+=item) {
                unique_multiples.emplace(i);
            }
        }
        return std::accumulate(unique_multiples.begin(), unique_multiples.end(), 0);
    }
}  // namespace sum_of_multiples
