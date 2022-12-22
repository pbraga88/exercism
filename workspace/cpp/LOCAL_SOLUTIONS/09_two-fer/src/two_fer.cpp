#include "two_fer.h"

namespace two_fer
{
    std::string two_fer(std::string_view name) {
        std::string concat {"One for "};        
        return concat.append(name).append(", one for me.");
    }

} // namespace two_fer
