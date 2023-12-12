#include <unordered_map>
#include <algorithm>
#include "secret_handshake.h"

namespace secret_handshake {
    const int invert = 0x10;
    const std::unordered_map<int, std::string> secret_code {
        {0x01, "wink"},
        {0x02, "double blink"},
        {0x04, "close your eyes"},
        {0x08, "jump"}
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
