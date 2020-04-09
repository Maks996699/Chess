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

bool Piece::checkRules(char posCh, int posInt, char nextCh, int nextInt)
{
	return false;
}

void Piece::show()
{
	std::cout << "  ";
}
