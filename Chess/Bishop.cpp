#include "Bishop.h"

Bishop::Bishop(int playerNum) : Piece(playerNum)
{
	sign += "B";
}

Bishop::~Bishop()
{
}

bool Bishop::checkRules(int x, int y, int nx, int ny)
{
	return false;
}

void Bishop::show()
{
	std::cout << sign;
}
