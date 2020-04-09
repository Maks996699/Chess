#pragma once
#include "Piece.h"
class Bishop :
	public Piece
{
public:
	Bishop(int playerNum);
	~Bishop();
	bool checkRules();
	void show();
private:


};

