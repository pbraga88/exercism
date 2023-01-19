/*
Given a number n, determine what the nth prime is.
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
*/
#include <iostream>
#include <stdexcept>

#include "nth_prime.h"

namespace nth_prime {
    int is_prime(int k) {
        //Corner cases
        if (k <=0) {
            throw std::domain_error("Input value must be >= 1");
        }
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
        if (n==1) {
            return 2;
        }
        
        int nth {1};
        for (int i = 3; nth<n; i++) {
            if (i&1){
                nth = is_prime(i) ? nth+1 : nth;
                if(nth==n) {
                    return i;
                }
            }
        }
        return -1;
    }


}  // namespace nth_prime
