#if !defined(GRAINS_H)
#define GRAINS_H

namespace grains {
    uint64_t get_total_amount(int square_nb, int given_square, uint64_t amount = 1);

    uint64_t get_amount_on_given_square(void);

}  // namespace grains

#endif // GRAINS_H