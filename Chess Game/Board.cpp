#include "Board.h"


Board::Board() :board(8) {//Poppulate the board with the correct pieces.


	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
		{
			if (i == 0 && j == 0) {//This is where the backrow for the white chess pieces will be.
				
								   
			
				//Moving from using raw pointer to smart pointers.
				
				Piece* wRook = new Piece(R, White);
				Piece* wKnight = new Piece(N, White);
				Piece* wBishop = new Piece(B, White);
				Piece* wQueen = new Piece(Q, White);
				Piece* wKing = new Piece(K, White);
				

				/*
				std::unique_ptr wRook = std::make_unique<Piece>(R, White);
				std::unique_ptr wKnight = std::make_unique<Piece>(N, White);
				std::unique_ptr wBishop = std::make_unique<Piece>(B, White);
				std::unique_ptr wQueen = std::make_unique<Piece>(Q, White);
				std::unique_ptr wKing = std::make_unique<Piece>(K, White);
				*/

				Position pos;
				pos.xpos = i;
				pos.ypos = j;


				board[i].push_back(wRook);
				wRook->setPosition(pos);
				pos.ypos++;

				board[i].push_back(wKnight);
				wKnight->setPosition(pos);
				pos.ypos++;

				board[i].push_back(wBishop);
				wBishop->setPosition(pos);
				pos.ypos++;

				board[i].push_back(wQueen);
				wQueen->setPosition(pos);
				pos.ypos++;

				board[i].push_back(wKing);
				wKing->setPosition(pos);
				pos.ypos++;

				wBishop = new Piece(B, White);
				wBishop->setPosition(pos);
				board[i].push_back(wBishop);
				pos.ypos++;

				wKnight = new Piece(N, White);
				wKnight->setPosition(pos);
				board[i].push_back(wKnight);
				pos.ypos++;

				wRook = new Piece(R, White);
				wRook->setPosition(pos);
				board[i].push_back(wRook);


			}
			else if (i == 1) {//This is where pawns will be constructed. Strictly Pawns. Pawns start on rows 6 (Black) and 1 (White). 
				Piece* wPawn = new Piece(P, White);
				
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].push_back(wPawn);
				wPawn->setPosition(pos);
			}
			else if (i == 2) {
				Piece* empty = new Piece();
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].push_back(empty);
				empty->setPosition(pos);
			}
			else if (i == 3) {
				Piece* empty = new Piece();
				
				Position pos;
				pos.xpos = i;
				pos.ypos = j;
				
				board[i].push_back(empty);
				empty->setPosition(pos);
			}
			else if (i == 4) {
				Piece* empty = new Piece();
				
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].push_back(empty);
				empty->setPosition(pos);
			}
			else if (i == 5) {
				Piece* empty = new Piece();
				
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].push_back(empty);
				empty->setPosition(pos);
			}
			else if (i == 6) {//This is where pawns will be constructed. Strictly Pawns. Pawns start on rows 6 (Black) and 1 (White). 
				Piece* bPawn = new Piece(P, Black);
				
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].push_back(bPawn);
				bPawn->setPosition(pos);

			}
			else if (i == 7 && j == 0) {//This is where the backrow for the white chess pieces will be.
				Piece* bRook = new Piece(R, Black);
				Piece* bKnight = new Piece(N, Black);
				Piece* bBishop = new Piece(B, Black);
				Piece* bQueen = new Piece(Q, Black);
				Piece* bKing = new Piece(K, Black);

				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].push_back(bRook);
				bRook->setPosition(pos);
				pos.ypos++;

				board[i].push_back(bKnight);
				bKnight->setPosition(pos);
				pos.ypos++;

				board[i].push_back(bBishop);
				bBishop->setPosition(pos);
				pos.ypos++;

				board[i].push_back(bQueen);
				bQueen->setPosition(pos);
				pos.ypos++;
				
				board[i].push_back(bKing);
				bKing->setPosition(pos);
				pos.ypos++;

				bBishop = new Piece(B, Black);
				board[i].push_back(bBishop);
				bBishop->setPosition(pos);
				pos.ypos++;

				bKnight = new Piece(N, Black);
				board[i].push_back(bKnight);
				bKnight->setPosition(pos);
				pos.ypos++;

				bRook = new Piece(R, Black);
				board[i].push_back(bRook);
				bRook->setPosition(pos);
			}
		}

	}
}


void Board::displayBoard(){

	
	for (int i = 7; i > -1; i--) {
		std::cout << "_________________________________________" << std::endl<<std::endl;
		for (int j = 0; j < board[i].size(); j++)
		{
			std::cout << "| " << chessCharacter(board[i][j]) << " ";
			
			std::cout << board[i][j]->getPiecePosition().xpos << " ";
			std::cout << board[i][j]->getPiecePosition().ypos << std::endl;

		}
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "_________________________________________" << std::endl;
}


std::string Board::chessCharacter(Piece * chessPiece)
{
	std::string chessCharStrng = "";
	switch (chessPiece->getPieceID())
	{
	default:
		break;
	case 0:
		chessCharStrng = " ";
		//std::cout << "yo";
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

	if (chessPiece->getPlayer() == 1) {
		return chessCharStrng + "*";
	}
	else {
		return chessCharStrng + " "; //Added space to keep me symmetry on the board.
	}
}

bool Board::movePiece(Position target, Position destination)
{
	Piece* tPiece; //Target Piece
	Piece* dPiece; // Destination Piece

	tPiece = board[target.xpos][target.ypos];

	dPiece = board[destination.xpos][destination.ypos];
	board[destination.xpos][destination.ypos] = tPiece;

	board[target.xpos][target.ypos] = dPiece;

	return true;

}
