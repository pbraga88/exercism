#include <iostream>
#include <string>
#include "queen_attack.h"

int main() {
    // std::string posA {"a8"};
    // std::string posB {"h6"};

    // bool res = queen_attack::q_attack(posA, posB);
    // std::cout<<res<<std::endl;

    const auto white = std::make_pair(4,5);
    const auto black = std::make_pair(2,5);

    const queen_attack::chess_board board{white, black};
    std::cout<<std::boolalpha;
    // std::cout<<(black==board.black())<<std::endl;
    // std::cout<<(white==board.white())<<std::endl;

    std::cout<<board.can_attack()<<std::endl;


    return 0;
}