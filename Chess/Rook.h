#pragma once
#include "Piece.h"
class Rook :
	public Piece
{
public:
	Rook(int playerNum);
	~Rook();
	bool checkRules(const int& x, const int& y, const int& nx, const int& ny);
	void show();

private:

};

