#include "Rook.h"

Rook::Rook(int playerNum) : Piece(playerNum)
{
	sign += "R";
}

Rook::~Rook()
{
}

bool Rook::checkRules()
{
	return false;
}

void Rook::show()
{
	std::cout << sign;
}
