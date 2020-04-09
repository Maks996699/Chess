#pragma once
#include "Piece.h"
class Knight :
	public Piece
{
public:
	Knight(int playerNum);
	~Knight();
	bool checkRules();
	void show();

private:

};

