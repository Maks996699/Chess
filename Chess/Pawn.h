#pragma once
#include "Piece.h"
class Pawn :
	public Piece
{
public:
	Pawn(int playerNum);
	~Pawn();
	bool checkRules(int x, int y, int nx, int ny);
	void show();
private:

};

