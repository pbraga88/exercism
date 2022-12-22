#include <iostream>
#include <vector>
#include <string>
#include <numeric>

int main() {

    // auto mice = std::vector<std::string>{"Mickey","Minnie","Jerry"}; 
    // auto num_chars = std::transform_reduce( 
    // mice.begin(),  
    // mice.end(),  
    // size_t{0}, 
    // [](size_t a, size_t b) { return a + b; },       // Reduce 
    // [](const std::string& m) { return m.size(); }   // Transform 
    // );

    // std::cout<<num_chars<<std::endl;

    std::string a {"abc"};
    std::string b {"abd"};
    auto num_chars = std::transform_reduce(
        a.begin(),
        a.end(),
        b.begin(),
        0,
        std::plus<>(),
        std::not_equal_to<>()
    );

    std::cout<<num_chars<<std::endl;
    return 0;
}