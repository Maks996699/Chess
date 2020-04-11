#pragma once
#include "Piece.h"
class Knight :
	public Piece
{
public:
	Knight(int playerNum);
	~Knight();
	bool checkRules(int x, int y, int nx, int ny);
	void show();

private:

};

