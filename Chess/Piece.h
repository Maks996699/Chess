#pragma once
#include <string>
#include <iostream>
class Piece
{
public:
	Piece(int playerNum);
	Piece();
	virtual ~Piece();
	virtual bool checkRules(char posCh, int posInt, char nextCh, int nextInt);
	virtual void show();


protected:
	int playerNum;
	std::string sign;
};

