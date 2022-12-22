#if !defined(HAMMING_H)
#define HAMMING_H

#include <string_view>

namespace hamming {
    std::size_t compute(std::string_view sample_a, std::string_view sample_b);
}  // namespace hamming

#endif // HAMMING_H