//Giovanni Vega
//Chess OOP Project
//Start 11/15/19
//This is a personal project where I am trying to make a Chess game using OOP. 
//This will be a local game where two users can play on the same computer by inputting the coordinates of the piece they want to move and where they would like to move it.
//



#include "Board.h"
#include <vector>





int main() {

	//Pawn pawn(P,Black);
	Pawn pawn(K);
	std::cout << pawn.getFirstMove() << std::endl;
	std::cout << pawn.getPieceID() << std::endl;
	std::cout << pawn.getPlayer() << std::endl;
	//Piece pPawn;
	
	

	/*

	Board gameBoard;

	gameBoard.displayBoard();

	Position target;
	Position destination;
	int x = 0;
	int y = 0;


	std::cout << "Which piece would you like to move?" << std::endl;
	std::cin >> x;
	std::cin >> y;

	target.xpos = x;
	target.ypos = y;

	std::cout << "Where would you like to move the piece?" << std::endl;
	std::cin >> x;
	std::cin >> y;

	destination.xpos = x;
	destination.ypos = y;

	if (gameBoard.movePiece(target, destination)) {
		gameBoard.displayBoard();
	}
	else {
		std::cout << "There was an issue with moving the piece." << std::endl;
	}

	


	
*/
	system("Pause");




	return 0;
}