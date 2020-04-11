
#include "Piece.h"


Piece::Piece(int playerNum)
{
	this->playerNum = playerNum;
	sign = playerNum == 1 ? "W" : "B";
}

Piece::Piece()
{
}

Piece::~Piece()
{
}

bool Piece::checkRules(int x, int y, int nx, int ny)
{
	return false;
}

void Piece::show()
{
	std::cout << "  ";
}

int Piece::getPlayerNum()
{
	return playerNum;
}
