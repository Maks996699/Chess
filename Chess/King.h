#pragma once
#include "Piece.h"
class King :
	public Piece
{
public:
	King(int playerNum);
	~King();
	bool checkRules(const int& x, const int& y, const int& nx, const int& ny);
	void show();

private:

};

