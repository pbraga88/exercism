#include <iostream>
#include <exception>
#include <unordered_set>
#include <vector>
#include <cfloat>

#include "triangle.h"

namespace triangle {
    bool is_triangle_valid(double a, double b, double c) {
        return (a && b && c && a+b>=c && a+c>=b && b+c>=a);
    }

    bool almost_equal(double a, double b) {
        return (std::abs(a - b) <= DBL_EPSILON * std::max(std::abs(a), std::abs(b)));
    }

    flavor kind(double side_length_1, double side_length_2, double side_length_3) {
        bool ret = is_triangle_valid(side_length_1, side_length_2, side_length_3);
        if (!ret) {
            throw std::domain_error("error: not a valid triangle");
        }

        return static_cast<flavor>(almost_equal(side_length_1, side_length_2) +
                                   almost_equal(side_length_2, side_length_3) +
                                   almost_equal(side_length_3, side_length_1));
    }

}  // namespace triangle
