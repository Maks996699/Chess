#pragma once
#include "Piece.h"
class Queen :
	public Piece
{
public:
	Queen(int playerNum);
	~Queen();
	bool checkRules();
	void show();

private:


};

