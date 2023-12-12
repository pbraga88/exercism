#include "sieve.h"

namespace sieve {

    std::vector<int> primes(int limit) {
        std::vector<bool> is_sieve(limit+1, true);
        std::vector<int> prime_list;
        prime_list.reserve(limit/2);

        for (int i = 2; i <= limit; i++) {
            for (int j = i*i; j <= limit; j+=i) {
                is_sieve.at(j) = false;
            }
            if (is_sieve.at(i)) {
                prime_list.emplace_back(i);
            }
        }
        return prime_list;
    }
}  // namespace sieve
