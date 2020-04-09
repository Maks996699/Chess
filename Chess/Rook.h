#pragma once
#include "Piece.h"
class Rook :
	public Piece
{
public:
	Rook(int playerNum);
	~Rook();
	bool checkRules();
	void show();
private:


};

