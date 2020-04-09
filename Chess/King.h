#pragma once
#include "Piece.h"
class King :
	public Piece
{
public:
	King(int playerNum);
	~King();
	bool checkRules();
	void show();
private:


};

