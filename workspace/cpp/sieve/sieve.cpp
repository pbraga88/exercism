#include "sieve.h"

namespace sieve {

    std::vector<int> primes(int limit) {
        std::vector<bool> is_sieve(limit, true);
        std::vector<int> prime_list;//(limit/2);

        for (int i = 2; i <= limit; i++) {
            for (int j = i*i; j <= limit; j+=i) {
                is_sieve[j] = false;
            }
            if (is_sieve[i]) {
                prime_list.push_back(i);
            }
        }
        return prime_list;
    }
}  // namespace sieve
