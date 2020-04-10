#pragma once
#include "Piece.h"
class Bishop :
	public Piece
{
public:
	Bishop(int playerNum);
	~Bishop();
	bool checkRules(int x, int y, int nx, int ny);
	void show();
private:


};

