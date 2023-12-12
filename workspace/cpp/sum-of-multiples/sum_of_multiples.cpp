#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include "sum_of_multiples.h"

namespace sum_of_multiples {
    int to(std::vector<int> base_values, int level) {
        std::unordered_set<int> unique_multiples;
        for (const auto &item:base_values) {
            for (int i = item; i < level; i+=item) {
                unique_multiples.emplace(i);
            }
        }
        return std::accumulate(unique_multiples.begin(), unique_multiples.end(), 0);
    }
}  // namespace sum_of_multiples
