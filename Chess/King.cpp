#include "King.h"

King::King(int playerNum) : Piece(playerNum)
{
	sign += "K";
}

King::~King()
{
}

bool King::checkRules()
{
	return false;
}

void King::show()
{
	std::cout << sign;
}
