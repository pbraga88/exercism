#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H
#include <iostream>

namespace queen_attack {
    // bool q_attack(std::string_view posA, std::string_view posB);
    class chess_board {
        std::pair<int, int> white_pos;
        std::pair<int, int> black_pos;
    
    public:
        chess_board(const std::pair<int, int> &white,const std::pair<int, int> &black);
        
        std::pair<int, int> white() const;
        std::pair<int, int> black() const;

        bool can_attack() const;
        bool has_valid_positions (const std::pair<int, int> &white, const std::pair<int, int> &black) const;
    };  // namespace queen_attack
}
#endif // QUEEN_ATTACK_H