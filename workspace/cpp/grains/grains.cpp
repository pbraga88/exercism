#include <iostream>

#include "grains.h"

namespace grains {
    uint64_t square(int given_square) {
        return 1ULL<<(given_square-1);
    }

    uint64_t total() {
        return UINT64_MAX;
    }
}  // namespace grains
