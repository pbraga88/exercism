#if !defined(GRAINS_H)
#define GRAINS_H

namespace grains {
    int initial_amount {1}; 
    uint64_t get_total_amount(int square_nb, uint64_t amount = initial_amount);

}  // namespace grains

#endif // GRAINS_H