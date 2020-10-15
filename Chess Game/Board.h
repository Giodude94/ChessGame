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
	std::vector<std::vector<std::unique_ptr<Piece>>> board;//Board is a 2d vector that is made of pointers to Piece objects.



public:
	//Constructor for Board Class
	Board();

	//Methods
	//Function for displaying the board. Const so we do not change any of the data while displaying.
	void displayBoard();
	
	//Function that returns a string that represents the chess piece for the board to use as display.
	std::string chessCharacter(Piece * chessPiece);
	
	//Move a pice from target to destination. Currently does not check paramaters.
	bool movePiece(Position target, Position destination);

	//Function that will ask the player where they would like to move, and convert their answer to int for use in the vector. (Letter then number)
	void askMove();


};




#endif // _BOARD_H_

