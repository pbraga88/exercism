#include <iostream>
#include <cstdint>
#include <string>
#include <map>
#include <vector>
#include <unordered_map>

#include "nucleotide_count.h"

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    // if (argc!=2) {
    //     std::cout<<"2 arguments needed"<<std::endl;
    //     exit(0);
    // }

//TEST 1
    // const nucleotide_count::counter dna("");
    // const std::map<char, int> expected{ {'A', 0}, {'T', 0}, {'C', 0}, {'G', 0} };

    // const auto actual = dna.nucleotide_counts();

    // for (auto nucleotide : actual) {
    //     std::cout<<nucleotide.first<<": "<<nucleotide.second<<std::endl;
    // }

//TEST 2
    // const nucleotide_count::counter dna("");
    // std::cout<<"dna.count=0? "<<dna.count('A')<<std::endl;

//TEST 3
    // const nucleotide_count::counter dna("CCCCC");
    // std::cout<<"dna.count=5? "<<dna.count('C')<<std::endl;

//TEST 4
    const nucleotide_count::counter dna("GGGGGGGG");
    const std::map<char, int> expected{ {'A', 0}, {'T', 0}, {'C', 0}, {'G', 8} };

    const auto actual = dna.nucleotide_counts();
    for (auto nucleotide : actual) {
        std::cout<<nucleotide.first<<": "<<nucleotide.second<<", ";
    }
    std::cout<<std::endl;

    return 0;
}
