#include <math.h>
#include "difference_of_squares.h"

namespace difference_of_squares {
    double square_of_sum (int n) {
        double sum {0};
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return pow(sum,2);
    }

    double sum_of_squares(int n) {
        double sum {0};
        for (int i = 1; i <= n; i++) {
            sum += pow(i,2);
        }
        return sum;
    }

    double difference(int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }
}  // namespace difference_of_squares
