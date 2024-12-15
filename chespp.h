#ifndef _CHESSPP_
#define _CHESSPP_

// pieces
#define PIECE_PAWN      0
#define PIECE_ROOK      1
#define PIECE_KNIGHT    2
#define PIECE_BISHOP    3
#define PIECE_QUEEN     4
#define PIECE_KING      5
// sides
#define SIDE_WHITE      0
#define SIDE_BLACK      1

namespace chspp
{
    struct piece
    {
        char type; // define pieces
        bool side; // 0 -> white, 1 -> black
        char pos[2]; // 0 -> x, 1 -> y
    };
    struct board
    {
        piece pieces[32]; // piece.type = -1 -> piece is captured
    };
    
    char* get_possible_moves(board& b, bool side);

    board* create_board();
};

#endif // _CHESSPP_