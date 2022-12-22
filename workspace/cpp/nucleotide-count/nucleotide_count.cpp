#include "nucleotide_count.h"

namespace nucleotide_count {
    counter::counter(std::string_view dna_str) {
        nctd_count.insert({{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}});
        for (auto ntd:dna_str){
            auto count_aux = nctd_count.find(ntd);
            if (count_aux == nctd_count.end()) {
                throw std::invalid_argument("Not valid DNA string");
            }
            count_aux->second += 1;
        }
    }

    const std::map<char, int> &counter::nucleotide_counts() const{
        return nctd_count;
    }

    int counter::count(char nucleotide) const{
        auto aux_count = nctd_count.find(nucleotide);
        if (aux_count == nctd_count.end()) {
            throw std::invalid_argument("Not valid nucleotide");
        }
        return aux_count->second;
    }

}  // namespace nucleotide_count
