#include <iostream>
#include <stdexcept>

#include "nth_prime.h"

namespace nth_prime {
    int is_prime(int k) {
        //Corner cases
        if (k<=1) {
            return 0;
        }
        if (k == 2 || k == 3) {
            return 1;
        }
        if (k%2 == 0 || k%3 == 0) {
            return 0;
        }
        
        // Prime number can be represented in the form of
        // (6*k+1) or (6*k-1)
        for (int i=5; i*i<=k; i=i+6) {
            if (k%i==0 || k%(i+2)==0) {
                return 0;
            }
        }
        return 1;
    }

    int nth(int n) {
        if (n <=0) {
            throw std::domain_error("Input value must be >= 1");
        }
        
        int nth {0};
        for (int i = 2; nth<n; i++) {
            if(is_prime(i)) {
                nth+=1;
                if(nth==n) {
                    return i;
                }
            }
        }
        return -1;
    }
}  // namespace nth_prime
