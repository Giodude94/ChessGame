#ifndef _BOARD_H_
#define _BOARD_H_

#include <iostream>
#include <vector>
#include <string>
#include "Piece.h"
#include "Utilities.h"
#include "Pawn.h"


class Board {
private:
	std::vector<std::vector<Piece *>> board;//Board is a 2d vector that is made of pointers to Piece objects.



public:
	//Constructor for Board Class
	Board();


	void displayBoard(); //Function for displaying the board. Const so we do not change any of the data while displaying.
	std::string chessCharacter(Piece* chessPiece); //Function that returns a string that represents the chess piece for the board to use as display.
	bool movePiece(Position target, Position destination); //Move a pice from target to destination. Currently does not check paramaters.



};




#endif // _BOARD_H_

