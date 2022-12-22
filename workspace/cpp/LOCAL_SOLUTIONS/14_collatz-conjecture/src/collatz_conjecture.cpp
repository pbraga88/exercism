#include <stdexcept>

#include "collatz_conjecture.h"

// Take any positive integer n. If n is even, divide n by 2 to get n / 2. If n is odd, multiply n by 3 and add 1 to get 3n + 1. 
// Repeat the process indefinitely. The conjecture states that no matter which number you start with, you will always reach 1 eventually.

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
