#include "Queen.h"

Queen::Queen(int playerNum) : Piece(playerNum)
{
	sign += "Q";
}

Queen::~Queen()
{
}

bool Queen::checkRules()
{
	return false;
}

void Queen::show()
{
	std::cout << sign;
}
