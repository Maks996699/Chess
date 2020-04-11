#pragma once
#include "Piece.h"
class Rook :
	public Piece
{
public:
	Rook(int playerNum);
	~Rook();
	bool checkRules(int x, int y, int nx, int ny);
	void show();
private:


};

