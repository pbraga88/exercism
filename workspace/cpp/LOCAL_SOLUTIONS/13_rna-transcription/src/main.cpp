#include <iostream>
#include <cstdint>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>

#include "rna_transcription.h"

// namespace test_only{
//     template <typename T>
//         T to_rna(T dna_strand);
// }
// namespace test_only{
//     template <typename T>
//         T to_rna(T dna_strand) {

//             // T rna_strand;
//             // for (auto &ntd:dna_strand) {
//             //     rna_strand.push_back(translation.at(ntd));
//             // }
//             return dna_strand;
//         }
// }
int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    // if (argc != 2) {
    //     std::cout<<"This app requires 1 argument"<<std::endl;
    // }
    
    // auto result = rna_transcription::to_rna('C');
    auto result = rna_transcription::to_rna("ACGTGGTCTTAA");

    std::cout<<result<<std::endl;

    return 0;
}
