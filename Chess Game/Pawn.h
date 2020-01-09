#ifndef _PAWN_H_
#define _PAWN_H_

#include "Piece.h"

class Pawn : public Piece {
private:
	//Members
	bool firstMove;


public:

	//Constructor
	Pawn();
	Pawn(pieceNames ID);
	Pawn(pieceNames ID, pieceColor player);


	//Destructor
	~Pawn();

	//Methods
	void setFirstMove(bool move);
	bool getFirstMove();




};
#endif // _PAWN_H_