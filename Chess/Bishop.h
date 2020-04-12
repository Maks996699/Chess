#pragma once
#include "Piece.h"
class Bishop :
	public Piece
{
public:
	Bishop(int playerNum);
	~Bishop();
	bool checkRules(const int& x, const int& y, const int& nx, const int& ny);
	void show();
private:


};

