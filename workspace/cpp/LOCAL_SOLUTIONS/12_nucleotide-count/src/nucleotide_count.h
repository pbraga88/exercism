#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

namespace nucleotide_count {
    class counter {
        std::map<char, int> nctd_count;
    public:
        /* C++ Core Guidelines
           C.46: By default, declare single-argument constructor explicit
           Reason: To avoid unintended conversions */
        explicit counter(std::string_view dna_str);

        const std::map<char, int> &nucleotide_counts() const;
        int count(char nucleotide) const;
    };
    
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H