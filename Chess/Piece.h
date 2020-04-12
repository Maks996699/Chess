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
	virtual bool checkRules(const int& x, const int& y, const int& nx, const int& ny);
	virtual void show();
	int getPlayerNum();
	bool getDidMove();


protected:
	int playerNum;
	std::string sign;
	bool didMove;

	bool checkTeamKill(const int& nx, const int& ny);
};

