#pragma once
#include "Piece.h"
class Piece;

class Queen :
	public Piece
{
public:
	Queen(int playerNum);
	~Queen();
	bool checkRules(int x, int y, int nx, int ny);
	void show();

private:


};

