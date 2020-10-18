#include "Board.h"


Board::Board() :board(8) {//Poppulate the board with the correct pieces.


	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
		{
			if (i == 0 && j == 0) {//This is where the backrow for the white chess pieces will be.

				Position pos;
				pos.xpos = i;
				pos.ypos = j;


				board[i].emplace_back(std::make_unique<Piece>(R, White));
				board[i].back()->setPosition(pos);
				pos.ypos++; //Incrementing the ypos for use in code below.

				board[i].emplace_back(std::make_unique<Piece>(N, White));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(B, White));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(Q, White));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(K, White));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(B, White));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(N, White));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(R, White));
				board[i].back()->setPosition(pos);
				pos.ypos++;

			}
			else if (i == 1) {//This is where pawns will be constructed. Strictly Pawns. Pawns start on rows 6 (Black) and 1 (White). 
			
			//Most likely old code that can be deleted after succesfull run.
			//Piece* wPawn = new Pawn(P, White);

				
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].emplace_back(std::make_unique<Pawn>(P, White));
				board[i].back()->setPosition(pos);
			}
			else if (i == 2) {//creating the empty spaces on the board on lines 2-5.
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].emplace_back(std::make_unique<Piece>());
				board[i].back()->setPosition(pos);
			}
			else if (i == 3) {
				Position pos;
				pos.xpos = i;
				pos.ypos = j;
				
				board[i].emplace_back(std::make_unique<Piece>());
				board[i].back()->setPosition(pos);
			}
			else if (i == 4) {
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].emplace_back(std::make_unique<Piece>());
				board[i].back()->setPosition(pos);
			}
			else if (i == 5) {				
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].emplace_back(std::make_unique<Piece>());
				board[i].back()->setPosition(pos);
			}
			else if (i == 6) {//This is where pawns will be constructed. Strictly Pawns. Pawns start on rows 6 (Black) and 1 (White). 
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].emplace_back(std::make_unique<Pawn>(P, Black));
				board[i].back()->setPosition(pos);

			}
			else if (i == 7 && j == 0) {//This is where the backrow for the white chess pieces will be.

				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].emplace_back(std::make_unique<Piece>(R, Black));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(N, Black));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(B, Black));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(Q, Black));
				board[i].back()->setPosition(pos);
				pos.ypos++;
				
				board[i].emplace_back(std::make_unique<Piece>(K, Black));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(B, Black));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(N, Black));
				board[i].back()->setPosition(pos);
				pos.ypos++;

				board[i].emplace_back(std::make_unique<Piece>(R, Black));
				board[i].back()->setPosition(pos);
			}
		}

	}
}


void Board::displayBoard() {

	for (int i = 7; i > -1; i--) {
		if (i == 7) {
			std::cout << "  __a____b____c____d____e____f____g____h___" << std::endl << std::endl;
		}
		else {
			std::cout << "  _________________________________________" << std::endl << std::endl;
		}
		for (int j = 0; j < board[i].size(); j++)
		{
			if (j == 0) {
				std::cout << (i + 1) << " | " << chessCharacter(board[i][j].get());
			}
			else {
				std::cout << " | " << chessCharacter(board[i][j].get());
			}

			//std::cout << board[i][j]->getPiecePosition().xpos << " ";
			//std::cout << board[i][j]->getPiecePosition().ypos << std::endl;

		}
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "  __a____b____c____d____e____f____g____h___" << std::endl << std::endl;
}


std::string Board::chessCharacter(Piece * chessPiece)
{
	//Funtion that gets the piece ID and returns it with the appropriate alterations based what team the player is (Black/White).
	std::string chessCharStrng = "";
	switch (chessPiece->getPieceID())
	{
	default:
		break;
	case 0:
		chessCharStrng = " ";
		break;
	case 1:
		chessCharStrng = "P";
		break;
	case 2:
		chessCharStrng = "N";
		break;
	case 3:
		chessCharStrng = "B";
		break;
	case 4:
		chessCharStrng = "R";
		break;
	case 5:
		chessCharStrng = "Q";
		break;
	case 6:
		chessCharStrng = "K";
		break;
	}

	if (chessPiece->getPlayer() == 1) {//player using the black pieces are denoted with an asterisk next to the piece.
		return chessCharStrng + "*";
	}
	else {
		return chessCharStrng + " "; //Added space to keep the symmetry on the board.
	}
}


bool Board::movePiece(Position target, Position destination)
{
	//Uses the Vector swap method to swap places on the board.
	//Have to check if the move is valid before we do the swap.

	board[destination.xpos][destination.ypos].swap(board[target.xpos][target.ypos]); //Swaps the two pointers, Pos does not get changed when swapped. (Pieces get swapped but still hold their old position.)
	board[target.xpos][target.ypos]->setPosition(target); //Updates the position of the piece at target with the coordinates of the target position.
	board[destination.xpos][destination.ypos]->setPosition(destination); //Updates the position of the Piece at destination with the destination coordinates.
	
	return true;
}

bool Board::validMove()
{
	Position target;
	Position destination;

	int x = 0;
	int y = 0;
	int upperCaseDeduct = 65;  //The ASCII value of 'A'. It is used to check to see if numbers are within range of valid numbers.
	int lowerCaseDeduct = 97;  //The ASCII value of 'a'. It is used to check to see if numbers are within range of valid numbers.
	bool complete = false;

	while (!complete) {
		//char userInput[3];
		std::string userInput = "";
		std::cout << "Which piece would you like to move? Ex. A5" << std::endl;
		std::getline(std::cin, userInput, '\n');
		y = (unsigned char)userInput[0]; //userInput[0] is the letter part of the string.
		x = std::atoi(&userInput[1]); //userInput[1] is the number part of the string.
		if (!isalpha(y)) {
			std::cout << "Please enter a single letter in the first spot, followed by a valid digit." << std::endl;
			continue;
		}
		else if (y >= 65 && y <= 72) {
			y -= upperCaseDeduct;
		}
		else if (y >= 97 && y <= 104) {
			y -= lowerCaseDeduct;
		}
		else {
			std::cout << "Enter a valid letter A-H. " << std::endl;
		}
		if (!isdigit(userInput[1])) {
			std::cout << "Please enter a valid digit immediately following the letter." << std::endl;
			continue;
		}
		else if (x <= 8 && x >= 1) {
			target.xpos = x - 1;
			target.ypos = y;
			complete = true;
		}
		else {
			std::cout << "Enter a valid number between 1-8." << std::endl;
		}
	}

	//Reseting the condition for completion.
	complete = false;

	while (!complete) {

		std::string userInput = "";
		std::cout << "Where would you like to move the piece?" << std::endl;
		std::getline(std::cin, userInput, '\n');
		y = (unsigned char)userInput[0]; //userInput[0] is the letter part of the string.
		x = std::atoi(&userInput[1]); //userInput[1] is the number part of the string.


		//Checking for valid input of Letter.
		if (!isalpha(y)) {
			std::cout << "Please enter a single letter in the first spot, followed by a valid digit." << std::endl;
			continue;
		}
		else if (y >= 65 && y <= 72) {
			y -= upperCaseDeduct;
		}
		else if (y >= 97 && y <= 104) {
			y -= lowerCaseDeduct;
		}
		else {
			std::cout << "Enter a valid letter A-H. " << std::endl;
		}

		//Checking for valid input of number.
		if (!isdigit(userInput[1])) {
			std::cout << "Please enter a valid digit immediately following the letter." << std::endl;
			continue;
		}
		else if (x <= 8 && x >= 1) {
			destination.xpos = x - 1;
			destination.ypos = y;
			complete = true;
		}
		else {
			std::cout << "Enter a valid number between 1-8." << std::endl;
		}
	}

	//Works for pawns,(calls the validateMove method that is defined in the derived class instead of the base class.)
	if (board[target.xpos][target.ypos]->validateMove(destination)) {
		std::cout << "Can move to space." << std::endl;
		movePiece(target, destination);
		return true;
	}
	else {
		std::cout << "The move that you entered was not valid." << std::endl;
		return false;
	}

}

