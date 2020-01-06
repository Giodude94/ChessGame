//Giovanni Vega
//Chess OOP Project
//Start 11/15/19
//This is a personal project where I am trying to make a Chess game using OOP. 
//This will be a local game where two users can play on the same computer by inputting the coordinates of the piece they want to move and where they would like to move it.
//



#include "Board.h"
#include <vector>
//#include "Piece.h"



int main() {
	/*
	//Piece* piece
	Piece* piece = new Piece(P, Black);

	//std::cout << piece->getPieceID() <<std::endl;

	std::vector<std::vector<Piece*>> board(8);

	std::vector<std::vector<int>> test();
	
	//Piece * piece = new Piece(P,Black);
	board[0].push_back(piece);
	piece = new Piece(P, Black);
	board[1].push_back(piece);

	//std::cout << board[0][1]->getPieceID();
	
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++)
		{
			//std::cout << i << " " << j;
			std::cout << board[i][j]->getPieceID() << " ";
			std::cout << board[i][j] << " ";
			if (i == 1) {
				Piece* piece = new Piece(1, 1);
				board.push_back(piece);
			
		}
		std::cout << std::endl;
	}

	std::cout << board[0][0]<<std::endl;
	std::cout << board[1][0] << std::endl;
	std::cout<<std::endl;

	piece = board[0][0];

	delete piece;
	board[0][0] = NULL;
	delete board[1][0];

	std::cout << board[0][0] << std::endl;
	std::cout << board[1][0] << std::endl;


	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++) {

			std::cout << board[i][j]->getPieceID() << " ";
		}
		std::cout << "\n";
	}
	
	*/
	

	Board gameBoard;

	gameBoard.displayBoard();
	


	

	system("Pause");




	return 0;
}