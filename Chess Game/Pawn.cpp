#include "Pawn.h"



Pawn::Pawn():Piece(){
	this->firstMove = false;
}


Pawn::Pawn(pieceNames ID):Piece(ID) {
	this->firstMove = false;
}

Pawn::Pawn(pieceNames ID, pieceColor player):Piece(ID, player)
 {
	//Position pos;
	//pos.xpos = 0;
	//pos.ypos = 0;

	//this->setPieceID(ID);
	//this->setPlayer(player);
	//this->setPosition(pos);
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
