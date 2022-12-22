#include <stdexcept>

#include "collatz_conjecture.h"

namespace collatz_conjecture {
    int steps(int nb) {
        if (nb <=0) {
            throw std::domain_error("Input value must be >= 1");
        }
        
        int steps_counter {0};
        for(; nb!=1; steps_counter++) {
            nb = (nb & 1) ? (nb * 3) + 1 : nb >> 1;
        }

        return steps_counter;
    }

}  // namespace collatz_conjecture
