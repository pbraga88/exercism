#include <math.h>
#include <iostream>
#include "difference_of_squares.h"

namespace difference_of_squares {
    double square_of_sum (int n) {
        /* sum from 1 to n = (n*(n + 1))/2 */
        double sum = (n*(n+1))/2;
        return pow(sum,2);
    }

    double sum_of_squares(int n) {
        /* Sum of squares of number from 1 to n = (n*(n+1) * ((n*2)+1))/6 */
        double sum = (n*(n+1) * ((n*2)+1))/6;
        return sum;
    }

    double difference(int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }


}  // namespace difference_of_squares
