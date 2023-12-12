#include "gigasecond.h"

namespace gigasecond {
    const long gigasecond_val = 1'000'000'000;

    ptime advance(ptime actual) {
        return actual+=seconds(gigasecond_val);
    }
    
}  // namespace gigasecond
