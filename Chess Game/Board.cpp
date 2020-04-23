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
				Piece* wPawn = new Piece(P, White);

				
				Position pos;
				pos.xpos = i;
				pos.ypos = j;

				board[i].emplace_back(std::make_unique<Piece>(P, White));
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

				board[i].emplace_back(std::make_unique<Piece>(P, Black));
				board[i].back()->setPosition(pos);

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


void Board::displayBoard(){

	
	for (int i = 7; i > -1; i--) {
		std::cout << "_________________________________________" << std::endl<<std::endl;
		for (int j = 0; j < board[i].size(); j++)
		{
			std::cout << "| " << chessCharacter(board[i][j].get()) << " ";
			
			//std::cout << board[i][j]->getPiecePosition().xpos << " ";
			//std::cout << board[i][j]->getPiecePosition().ypos << std::endl;

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
		return chessCharStrng + " "; //Added space to keep me symmetry on the board.
	}
}

/*
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
*/