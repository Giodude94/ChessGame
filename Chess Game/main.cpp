//Giovanni Vega
//Chess OOP Project
//Start 11/15/19
//This is a personal project where I am trying to make a Chess game using OOP. 
//This will be a local game where two users can play on the same computer by inputting the coordinates of the piece they want to move and where they would like to move it.
//



#include "Board.h"
#include <vector>


int main() {


	/*
	//Testing if the position updates for the piece using the SetPosition method.
	
	{
		Position Destination;
		Destination.xpos = 5;
		Destination.ypos = 5;
		//std::cout << Destination.xpos << " " << Destination.ypos << std::endl;

		std::vector<std::unique_ptr<Piece>> test;
		test.push_back(std::make_unique<Piece>(R, Black));
		std::cout << test[0]->getPiecePosition().xpos << " " << test[0]->getPiecePosition().ypos << std::endl;
		test[0]->setPosition(Destination);
		std::cout << test[0]->getPiecePosition().xpos << " " << test[0]->getPiecePosition().ypos << std::endl;
	}
	*/

	//Getting to know smart pointers with the code in this multi-line comment
	//Board gameBoard;
	//gameBoard.displayBoard();

	
	/*
	std::vector<std::vector<std::shared_ptr<Piece>>> board(8);
	std::vector<std::unique_ptr<Piece>> test;
	std::vector<std::vector<std::unique_ptr<Piece>>> test2(8);

	std::shared_ptr<Piece> wRookptr = std::make_shared<Piece>(R, White);
	std::unique_ptr<Piece> bRookptr = std::make_unique<Piece>(R, Black);
	std::unique_ptr<Piece> wRookptr2 = std::make_unique<Piece>(R, White); //proves that we can use unique ptrs for vector of vectors.
	std::unique_ptr<Piece> bRookptr2 = std::make_unique<Piece>(R, Black);

	//std::cout << wRook->getPieceID() << std::endl;

	//test.push_back(wRookptr);

	//test2[0].push_back(std::move(wRookptr2));
	//test.push_back(std::move(bRookptr));
	//board[0].push_back(wRookptr);
	
	test2[0].push_back(std::move(wRookptr2));
	test2[0].emplace_back(std::make_unique<Piece>(R, Black));

	std::cout << test2[0][0]->getPieceID() << std::endl;
	std::cout << test2[0][1]->getPieceID() << std::endl;
	std::cout << test2[0][0] << std::endl;
	std::cout << test2[0][0].get() << std::endl;
	
	//board[0].emplace_back(std::make_unique<Piece>(R, White));

	*/

	/*
	std::vector<std::vector<Piece*>> board(8);

	Piece rook;
	Piece* pRook = &rook;


	Pawn pawn;
	Piece* pPawn = &pawn;

	board[0].push_back(pRook);
	board[0].push_back(pPawn);


	std::cout << board[0][0]->getPieceID() << std::endl;
	std::cout << board[0][0]->validateMove() << std::endl;
	std::cout << board[0][1]->getPieceID() << std::endl;
	std::cout << board[0][1]->validateMove() << std::endl;

	*/
	







	//Pawn pawn(P,Black);
	//Pawn pawn(K);
	//std::cout << pawn.getFirstMove() << std::endl;
	//std::cout << pawn.getPieceID() << std::endl;
	//std::cout << pawn.getPlayer() << std::endl;
	
	

	
	
	Board gameBoard;

	gameBoard.displayBoard();
	gameBoard.validMove();
	gameBoard.displayBoard();
	gameBoard.validMove();
	gameBoard.displayBoard();
	


	/*

	Position target;
	Position destination;

	char letter;
	int x = 0;
	int y = 0;
	char again = 'Y';
 
	
	while (again == 'Y') {

		std::cout << "Which piece would you like to move?" << std::endl;
		std::cin >> target.xpos;
		std::cin >> target.ypos;

		target.xpos = x;
		target.ypos = y;

		std::cout << "Where would you like to move the piece?" << std::endl;
		std::cin >> x;
		std::cin >> y;

		destination.xpos = x;
		destination.ypos = y;

		if (gameBoard.movePiece(target, destination)) {
			gameBoard.displayBoard();
			std::cout << "Again?" << std::endl;
			std::cin >> again;
		}
		else {
			std::cout << "There was an issue with moving the piece." << std::endl;
		}
	}
	*/
	


	

	system("Pause");




	return 0;
}