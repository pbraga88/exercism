#include <iostream>
#include <string_view>
#include <numeric>
#include <functional>

#include "hamming.h"
namespace hamming {

    std::size_t compute(std::string_view sample_a, std::string_view sample_b) {
        if (sample_a.size()!=sample_b.size()) {
            throw std::domain_error("Not valid: DNA strands must be of same size");
        }

    // return std::transform_reduce(
    return std::inner_product(
            sample_a.begin(),
            sample_a.end(),
            sample_b.begin(),
            std::size_t {0},
            std::plus(),
            std::not_equal_to()
        );
    }

}  // namespace hamming
