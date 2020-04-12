#pragma once
#include "Piece.h"
class Knight :
	public Piece
{
public:
	Knight(int playerNum);
	~Knight();
	bool checkRules(const int& x, const int& y, const int& nx, const int& ny);
	void show();

private:

};

