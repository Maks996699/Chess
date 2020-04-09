#include "Bishop.h"

Bishop::Bishop(int playerNum) : Piece(playerNum)
{
	sign += "B";
}

Bishop::~Bishop()
{
}

bool Bishop::checkRules()
{
	return false;
}

void Bishop::show()
{
	std::cout << sign;
}
