#pragma once
#include <string>
#include <iostream>
#include <cmath>

class Piece
{
public:
	Piece(int playerNum);
	Piece();
	virtual ~Piece();
	virtual bool checkRules(int x, int y, int nx, int ny);
	virtual void show();


protected:
	int playerNum;
	std::string sign;
};

