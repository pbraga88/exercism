#include <iostream>
#include <ctype.h>

#include "grains.h"

namespace grains {
    int amount_on_given_square {0};

    uint64_t get_total_amount(int square_nb, uint64_t amount = initial_amount) {
        if (square_nb <= 1) {
            amount_on_given_square = amount;
            return amount;
        }

        return amount + get_total_amount(amount * 2);
    }

}  // namespace grains
