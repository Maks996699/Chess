
#include "Queen.h"


Queen::Queen(int playerNum) : Piece(playerNum)
{
	sign += "Q";
}

Queen::~Queen()
{
}

bool Queen::checkRules(int x, int y, int nx, int ny)
{
	return false;
}

void Queen::show()
{
	std::cout << sign;
}
