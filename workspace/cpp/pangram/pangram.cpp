#include <iostream>
#include <unordered_set>

#include "pangram.h"

namespace pangram {
    bool is_pangram(std::string_view phrase) {
        std::unordered_set<char> alphabet;

        for (auto symbol : phrase) {
            symbol = toupper(symbol);
            if (isalpha(symbol)) {
                alphabet.insert(symbol);
            }
        }

        return alphabet.size() == (('Z'+1)-'A');
    }
}  // namespace pangram
