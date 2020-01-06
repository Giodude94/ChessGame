#include "Board.h"


Board::Board() :board(8) {//Poppulate the board with the correct pieces.


	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
		{
			if (i == 0 && j == 7) {//This is where the backrow for the white chess pieces will be.
				Piece* wRook = new Piece(R, White);
				Piece* wKnight = new Piece(N, White);
				Piece* wBishop = new Piece(B, White);
				Piece* wQueen = new Piece(Q, White);
				Piece* wKing = new Piece(K, White);

				board[i].push_back(wRook);
				board[i].push_back(wKnight);
				board[i].push_back(wBishop);
				board[i].push_back(wQueen);
				board[i].push_back(wKing);

				wBishop = new Piece(B, White);
				board[i].push_back(wBishop);

				wKnight = new Piece(N, White);
				board[i].push_back(wKnight);

				wRook = new Piece(R, White);
				board[i].push_back(wRook);

			}
			else if (i == 1) {//This is where pawns will be constructed. Strictly Pawns. Pawns start on rows 6 (Black) and 1 (White). 
				Piece* wPawn = new Piece(P, White);

				board[i].push_back(wPawn);
			}
			else if (i == 2) {
				Piece* empty = new Piece();
				board[i].push_back(empty);
			}
			else if (i == 3) {
				Piece* empty = new Piece();
				board[i].push_back(empty);
			}
			else if (i == 4) {
				Piece* empty = new Piece();
				board[i].push_back(empty);
			}
			else if (i == 5) {
				Piece* empty = new Piece();
				board[i].push_back(empty);
			}
			else if (i == 6) {//This is where pawns will be constructed. Strictly Pawns. Pawns start on rows 6 (Black) and 1 (White). 
				Piece* bPawn = new Piece(P, Black);
				board[i].push_back(bPawn);

			}
			else if (i == 7 && j == 7) {//This is where the backrow for the white chess pieces will be.
				Piece* bRook = new Piece(R, Black);
				Piece* bKnight = new Piece(N, Black);
				Piece* bBishop = new Piece(B, Black);
				Piece* bQueen = new Piece(Q, Black);
				Piece* bKing = new Piece(K, Black);

				board[i].push_back(bRook);
				board[i].push_back(bKnight);
				board[i].push_back(bBishop);
				board[i].push_back(bQueen);
				board[i].push_back(bKing);

				bBishop = new Piece(B, Black);
				board[i].push_back(bBishop);

				bKnight = new Piece(N, Black);
				board[i].push_back(bKnight);

				bRook = new Piece(R, Black);
				board[i].push_back(bRook);
			}
		}

	}
}


const void Board::displayBoard() {
	for (int i = 7; i > -1; i--) {
		std::cout << "_________________________________________"<<std::endl<<std::endl;
		for (int j = 0; j < board[i].size(); j++)
		{
			std::cout << "| " << chessCharacter(board[i][j]) << " ";
			
			//std::cout << board[i][j]->getPiecePosition().xpos << " ";
			//std::cout << board[i][j]->getPiecePosition().ypos<< std::endl;
			
			//std::cout << board[i][j] << " ";
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
