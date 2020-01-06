#ifndef _BOARD_H_
#define _BOARD_H_

#include <iostream>
#include <vector>
#include <string>
#include "Piece.h"
#include "Utilities.h"


class Board {
private:
	std::vector<std::vector<Piece*>> board;//Board is a 2d vector that is made of pointers to Piece objects.




public:
	//Constructor for Board Class
	Board();


	const void displayBoard(); //Function for displaying the board;
	std::string chessCharacter(Piece* chessPiece);



};




#endif // _BOARD_H_

