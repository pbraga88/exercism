#include <iostream>
#include <unordered_map>
#include <algorithm>
#include "secret_handshake.h"

namespace secret_handshake {
    
    const int invert = 0x10;
    const std::unordered_map<int, std::string> secret_code {
        {0b00000001, "wink"},
        {0b00000010, "double blink"},
        {0b00000100, "close your eyes"},
        {0b00001000, "jump"}
    };

    std::vector<std::string> commands(int command) {
        std::vector<std::string> secret_code_val;
        for (int i = 1; i < invert; i=i<<1) {
            if (command & i) {
                secret_code_val.emplace_back(secret_code.at(i));
            }
        }

        if (command&invert) {
            std::reverse(std::begin(secret_code_val), std::end(secret_code_val));
        }

        return secret_code_val;
    }

}  // namespace secret_handshake
