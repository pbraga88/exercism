#if !defined(PANGRAM_H)
#define PANGRAM_H

namespace pangram {
    bool is_pangram(std::string_view phrase);
}  // namespace pangram

#endif // PANGRAM_H