#ifndef _PAWN_H_
#define _PAWN_H_

#include "Piece.h"
#include <iostream> // Currently only here for testing.

class Pawn : public Piece {
private:
	//Members
	//firstMove reffers to the pawns very first move of the game. Since it can either move two spaces up or one space up.
	bool firstMoveDone;


public:

	//Constructor
	Pawn();
	Pawn(pieceNames ID);
	Pawn(pieceNames ID, pieceColor player);


	//Destructor
	virtual ~Pawn();

	//Methods
	void setFirstMove(bool didMove);
	bool getFirstMove();
	virtual bool validateMove(Position moveToPos) override;




};
#endif // _PAWN_H_