#include <iostream>
#include <map>
#include <vector>
#include "say.h"


namespace say {
    const std::vector<std::string> zero_to_nineteen {"", "one", "two", "three", "four","five",
                                                            "six", "seven", "eight", "nine", "ten", "eleven",
                                                            "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                                                            "seventeen", "eighteen", "nineteen"};

    const std::vector<std::string> twenty_to_hundred {"", "ten", "twenty", "thirty", "forty",
                                                               "fifty", "sixty", "seventy", "eighty", "ninety", "hundred"};

    std::string get_number_in_english(int number) {
        std::string processed_number;
        if (number/100) {
            processed_number = zero_to_nineteen.at(number/100) + " hundred";
            number %= 100;
        }
        if (number/20) {
            processed_number += (!processed_number.empty() ? " " : "") + twenty_to_hundred.at(number/10);
            processed_number += !zero_to_nineteen.at(number%10).empty() ? ("-"+zero_to_nineteen.at(number%10)):"";
        }
        else if (number) {
            processed_number += (!processed_number.empty() ? " " : "") + zero_to_nineteen.at(number);
        }
        return processed_number;
    }

    const std::vector<std::string> post_fix {"", " thousand", " million", " billion"};

    std::string in_english(long long number) {
        if (number == 0) {
            return "zero";
        }
        if (number < 0 || number > 999'999'999'999) {
            throw std::domain_error("Input value must be between 0 and 999'999'999'999");
        }

        std::vector<std::string> parts;
        auto post_fix_it = post_fix.cbegin();
        while (number != 0) {
            auto chunk = number%1000;
            number /= 1000;

            auto get_in_english = get_number_in_english(chunk);
            if (!get_in_english.empty()) {
                parts.emplace_back(get_in_english + *post_fix_it);    
            }
            post_fix_it++;
        }
        std::string in_english;
        for (auto reverse_it = parts.crbegin(); reverse_it != parts.crend(); reverse_it++) {
            in_english.append(*reverse_it+" ");
        }

        in_english.erase(in_english.end() -1);

        return in_english;
    }
}  // namespace say
