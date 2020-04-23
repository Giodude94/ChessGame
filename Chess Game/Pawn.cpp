#include "Pawn.h"

Pawn::Pawn():Piece(){
	this->firstMove = false;
}


Pawn::Pawn(pieceNames ID):Piece(ID) {
	this->firstMove = false;
}

Pawn::Pawn(pieceNames ID, pieceColor player):Piece(ID, player)
 {
	this->firstMove = false;
}

Pawn::~Pawn()
{
}

bool Pawn::getFirstMove()
{
	return this->firstMove;
}

void Pawn::setFirstMove(bool move)
{
	this->firstMove = move;
}

bool Pawn::validateMove()
{
	std::cout << "This is the validateMove defined inside of Pawn." << std::endl;

	return true; 
}