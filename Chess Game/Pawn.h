#ifndef _PAWN_H_
#define _PAWN_H_

#include "Piece.h"
#include <iostream> // Currently only here for testing.

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
	virtual ~Pawn();

	//Methods
	void setFirstMove(bool move);
	bool getFirstMove();
	virtual bool validateMove() override;




};
#endif // _PAWN_H_