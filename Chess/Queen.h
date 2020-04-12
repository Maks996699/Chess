#pragma once
#include "Piece.h"
class Piece;

class Queen :
	public Piece
{
public:
	Queen(int playerNum);
	~Queen();
	bool checkRules(const int& x, const int& y, const int& nx, const int& ny);
	void show();

private:


};

