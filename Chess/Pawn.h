#pragma once
#include "Piece.h"
class Pawn :
	public Piece
{
public:
	Pawn(int playerNum);
	~Pawn();
	bool checkRules(const int& x, const int& y, const int& nx, const int& ny);
	void show();
private:

};

