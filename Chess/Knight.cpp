#include "Knight.h"

Knight::Knight(int playerNum) : Piece(playerNum)
{
	sign += "N";
}

Knight::~Knight()
{
}

bool Knight::checkRules()
{
	return false;
}

void Knight::show()
{
	std::cout << sign;
}
