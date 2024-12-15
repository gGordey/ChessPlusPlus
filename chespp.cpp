#include "chesspp.h"
#include <iostream>

typedef unsigned int uint;

char* chspp::get_possible_moves(chspp::board& board, bool side)
{
    uint moves_amound = 0;
    return "011oo0";
}
chspp::board* chspp::create_board()
{
    chspp::board* board = new chspp::board;
    char pieses_count = 0;
    for (bool i = false; i != true; i = !i)
    {
        // pawns
        for(char j = 0; j < 8; ++j)
        {  
            board->pieces[pieses_count] = {PIECE_PAWN, i, {j, 1}}; 
            ++pieses_count;
        }
        // rooks
        board->pieces[pieses_count]     = {PIECE_ROOK, i, {0, 0}};
        board->pieces[pieses_count+1]   = {PIECE_ROOK, i, {7, 0}};
        pieses_count += 2;
        // knights
        board->pieces[pieses_count]     = {PIECE_KNIGHT, i, {1, 0}};
        board->pieces[pieses_count+1]   = {PIECE_KNIGHT, i, {6, 0}};
        pieses_count += 2;
        // bishops
        board->pieces[pieses_count]     = {PIECE_BISHOP, i, {2, 0}};
        board->pieces[pieses_count+1]   = {PIECE_BISHOP, i, {5, 0}};
        pieses_count += 2;
        // queen
        board->pieces[pieses_count]     = {PIECE_QUEEN, i, {3, 0}};
        ++pieses_count;
        // king 
        board->pieces[pieses_count]     = {PIECE_KING, i, {4, 0}};
    }
    std::cout << pieses_count;
}
