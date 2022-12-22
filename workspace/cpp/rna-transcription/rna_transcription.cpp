#include <iostream>
#include <unordered_map>

#include "rna_transcription.h"

namespace rna_transcription {
    static const std::unordered_map <char, char> translation {{'G', 'C'},
                                        {'C', 'G'},
                                        {'T', 'A'},
                                        {'A', 'U'}};

    char to_rna(char dna_nctd){
        return translation.at(dna_nctd);
    }

    std::string to_rna(std::string_view dna_strand){
        std::string rna;
        rna.reserve(dna_strand.size());
        for (auto nctd:dna_strand){
            rna.push_back(translation.at(nctd));
        }

        return rna;
    }

}  // namespace rna_transcription
