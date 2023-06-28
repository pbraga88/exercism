#include <iostream>
#include <vector>
#include <algorithm>
#include "sieve.h"

namespace sieve {

    std::vector<int> primes(int limit) {
        std::vector<bool> is_sieve(limit, true);
        std::vector<int> prime_list;
        // reserve is more efficient since it will only reserve the memory not initialize it with any value
        prime_list.reserve(limit/2); // Maximum return size will always be limit/2

        for (int i = 2; i <= limit; i++) {
            for (int j = i*i; j <= limit; j+=i) {
                is_sieve[j] = false;
            }
            if (is_sieve[i]) {
                // emplace_back is more efficient than push_back, since it will use in-place objects memory to add the value of 'i', differently than push_back which copies/moves values
                prime_list.emplace_back(i);
            }
        }
        return prime_list;
    }

}  // namespace sieve
