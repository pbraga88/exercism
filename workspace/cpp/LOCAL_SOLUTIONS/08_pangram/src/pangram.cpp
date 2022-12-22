#include <iostream>
#include <string>
#include <unordered_set>
#include <string_view>
#include <ctype.h>

#include "pangram.h"

/*There's no reason to use preprocessor, hence commenting it*/
// #define ASCII_MIN 65
// #define ASCII_MAJ 90

namespace pangram {

    // bool is_pangram(std::string_view phrase) { // Using string_view, since this routine should only read the string: 
    //     std::unordered_set<char> alphabet;     // Another approach coud be: bool is_pangram (const std::string phrase)
        
    //     for (auto symbol : phrase) {
    //         symbol = ::toupper(symbol);
    //         if (isalpha(symbol)){ // isalpha(int) will check whether it's A-Z symbol 
    //             alphabet.insert(symbol);
    //         }
    //     }

    //     return alphabet.size() == (('Z'+1)-'A');
    // }

    bool is_pangram(std::string_view phrase) { // Using string_view, since this routine should only read the string: 
        const uint32_t magic {0x3FFFFFF};
        uint32_t alphabet {0};
        for(auto symbol : phrase) {
            if(isalpha(toupper(symbol))) {
                alphabet |= 1<<(symbol-'A');
            }
        }

        return alphabet==magic;
    }

}  // namespace pangram
