
#ifndef _PIECE_H_
#define _PIECE_H_

//Should be pure virtual so we can inheret other pieces from this class.

#include "Utilities.h"
#include <iostream> //Currently onle here for testing.

typedef struct Position {
	int xpos;
	int ypos;
} Position;


class Piece
{
protected: //Protected means inherited classes have acces to them (appear as private).
	//Members
	pieceNames pieceID; //Piece ID is used to tell what type of chess piece it is.
	pieceColor player; //To tell who's move it is/ what player is currently using their turn.
	Position pos;	   //pos is a variable that will hold an x-position and a y-position variable with corresponds to the chess board.

	 
public:
	//Constructors & Destructor
	Piece();
	Piece(pieceNames);
	Piece(pieceNames, pieceColor);
	virtual ~Piece();

	//Methods
	void setPieceID(pieceNames ID);
	pieceNames getPieceID();

	void setPlayer(pieceColor player);
	pieceColor getPlayer();

	void setPosition(Position pos); //What needs to be passed in the arguement the chess piece in question or does 'this' work, and where do we want to set position
	Position getPiecePosition(); //Keep the return type as Position? // Need to overload constructor to display x and Y

	virtual bool validateMove(); // used to validate each piece's moves. It is a virtual function in order to use specific members in each subclass that inherits from this class.

};

#endif // _PIECE_H_