#include <iostream>
#include <exception>
#include <unordered_set>

#include "triangle.h"

namespace triangle {
    bool check_triangle_equality(double a, double b, double c) {
        return !((!a || !b || !c) || (a+b<c||a+c<b||b+c<a));
    }

    flavor kind(double side_length_1, double side_length_2, double side_length_3) {
        bool ret = check_triangle_equality(side_length_1, side_length_2, side_length_3);
        if (!ret) {
            throw std::domain_error("error: not a valid triangle");
        }

        std::unordered_set<double> count_different_sides {side_length_1, side_length_2, side_length_3};
        return static_cast<flavor>(count_different_sides.size() - 1);
    }

}  // namespace triangle
