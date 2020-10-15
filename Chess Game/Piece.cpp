#include "Piece.h"

Piece::Piece()
	:Piece{NoName, NoColor} {

}

Piece::Piece(pieceNames ID)
	:Piece{ ID , NoColor }
{
}

Piece::Piece(pieceNames ID, pieceColor player) //Since we delegate to this constructor we only need to initialize the x and y pos in the body of this constructor.
	:pieceID{ ID }, player{ player }{
	this->pos.xpos = 0;
	this->pos.ypos = 0;
}

Piece::Piece(const Piece & source) // Used for L-value.
	: pieceID{ source.pieceID }, player{ source.player }, pos{ source.pos }
{

}

Piece::Piece(Piece &&source) // Used for R-value.
{

}


Piece:: ~Piece() {

}

void Piece::setPieceID(pieceNames ID)
{
	pieceID = ID;
}

pieceNames Piece::getPieceID()
{
	return pieceID;
}

void Piece::setPlayer(pieceColor player)
{
	player = this->player;
}

pieceColor Piece::getPlayer()
{
	return player;
}

void Piece::setPosition(Position pos)
{
	this->pos.xpos = pos.xpos;
	this->pos.ypos = pos.ypos;
}

Position Piece::getPiecePosition()
{
	return this->pos;
}

bool Piece::validateMove()
{
	std::cout << "This is the validateMove defined inside of Piece." << std::endl;
	return true;
}
