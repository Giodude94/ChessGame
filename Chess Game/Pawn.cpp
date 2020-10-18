#include "Pawn.h"

Pawn::Pawn():Piece(){
	this->firstMoveDone = false;
}


Pawn::Pawn(pieceNames ID):Piece(ID) {
	this->firstMoveDone = false;
}

Pawn::Pawn(pieceNames ID, pieceColor player):Piece(ID, player)
 {
	this->firstMoveDone = false;
}

Pawn::~Pawn()
{
}

bool Pawn::getFirstMove()
{
	return this->firstMoveDone;
}

void Pawn::setFirstMove(bool didMove)
{
	this->firstMoveDone = didMove;
}

bool Pawn::validateMove(Position moveToPos)//Will need to take in the pawns position on the board.
{
	std::cout << "Moved from position: Row "<< pos.xpos << "  Col " << pos.ypos << std::endl;
	//If it is the pawns first move then it can only move one spot up or two spots up.
	//if (!firstMoveDone) {
		//Pawn can only move one piece forward or two pieces forward.
		
	//}
	//std::cout << "This is the validateMove defined inside of Pawn." << std::endl;

	return true; 
}