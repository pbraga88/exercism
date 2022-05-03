#include <iostream>
#include <ctype.h>

#include "grains.h"

namespace grains {
    static uint64_t amount_on_given_square {0};
    static int counter {1};

    uint64_t get_total_amount(int square_nb, int given_square, uint64_t amount) {
        std::cout<<"[DEBUG] amount: "<<amount<<std::endl;
        if (counter == given_square) {
            amount_on_given_square = amount;
        }
        counter++;

        if (square_nb <= 1) {
            return amount;
        }
        return amount + get_total_amount(square_nb - 1, given_square, amount * 2);
    }

    uint64_t get_amount_on_given_square(void) {
        return amount_on_given_square;
    }
}  // namespace grains
