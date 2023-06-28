#include <stdexcept>
#include <vector>

#include "queen_attack.h"

namespace queen_attack {
    chess_board::chess_board(const std::pair<int, int> &white,const std::pair<int, int> &black) {
        if (has_valid_positions(white, black)) {
            throw std::domain_error("Input value is not valid");
        }

        white_pos = white;
        black_pos = black;
    }

    std::pair<int, int> chess_board::white() const{
        return white_pos;
    }
    std::pair<int, int> chess_board::black() const{
        return black_pos;
    }

    bool chess_board::has_valid_positions(const std::pair<int, int> &white, const std::pair<int, int> &black) const{
        return (white.first<0 || white.first>7) || (white.second<0 || white.second>7) ||
               (black.first<0 || black.first>7) || (black.second<0 || black.second>7) ||
                white == black;
    }

    bool chess_board::can_attack() const {
        std::vector<std::vector<int>> chess_board(8, std::vector<int>(8,0));
        int vert = this->white_pos.first;
        int horiz = this->white_pos.second;
        
        /*Fill Horizontal/Vertical*/
        for (int j = 1;
            (j <= (7-vert) || j<=(vert)) || (j <= (7-horiz) || j<=(horiz));
            j++) {
            // Fill Horizontal
            if (j <= (7-vert)) {
                chess_board[horiz][vert+j] = 1;
            }
            if (j<=(vert)) {
                chess_board[horiz][vert-j] = 1;
            }
            // Fill Vertical
            if (j <= (7-horiz)) {
                chess_board[horiz+j][vert] = 1;
            }
            if (j<=(horiz)) {
                chess_board[horiz-j][vert] = 1;
            }
        }
        /*Fill Diagonal*/
        for (int j=1; 
            (j<=(7-vert)&&(j<=7-horiz)) || (j<=vert && j<=horiz) ||
            (j<=(7-vert) && j<=horiz) || (j<=vert && j<=(7-horiz));
            j++) {
            if (j<=(7-vert)&&(j<=7-horiz)) {
                chess_board[horiz+j][vert+j] = 1;
            }
            if (j<=vert && j<=horiz) {
                chess_board[horiz-j][vert-j] = 1;
            }
            if (j<=(7-vert) && j<=horiz) {
                chess_board[horiz-j][vert+j] = 1;
            }
            if (j<=vert && j<=(7-horiz)) {
                chess_board[horiz+j][vert-j] = 1;
            }
        }

        int vertB = this->black_pos.first;
        int horizB = this->black_pos.second;
        return chess_board[horizB][vertB];
    }
}  // namespace queen_attack
