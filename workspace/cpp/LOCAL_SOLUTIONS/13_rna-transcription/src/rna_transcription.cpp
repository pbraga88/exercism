#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <cstring>
#include <ctype.h>
#include <string.h>
#include <type_traits>

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
        static std::string rna;
        rna.reserve(dna_strand.size());
        for (auto nctd:dna_strand){
            rna.push_back(translation.at(nctd));
        }

        return rna;
    }


    // template <typename T>
    // T to_rna(T dna_strand) {
    //     // std::cout<<dna_strand<<std::endl;
        
    //     // T rna_strand;
    //     // for (auto ntd:dna_strand) {
    //     //     std::cout<<ntd;
    //     //     // rna_strand.push_back(translation.at(ntd));
    //     // }
    //     return dna_strand;
    // }

    // // template std::string to_rna<std::string>(std::string);
    // template char rna_transcription::to_rna<char>(char);
    // template char const* rna_transcription::to_rna<char const*>(char const*);

}  // namespace rna_transcription
