#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle {
    enum class flavor{
        scalene,
        isosceles,
        equilateral = 3
    };

    flavor kind(double side_length_1, double side_length_2, double side_length_3);
}  // namespace triangle

#endif // TRIANGLE_H