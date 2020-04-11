#include "Knight.h"

Knight::Knight(int playerNum) : Piece(playerNum)
{
	sign += "N";
}

Knight::~Knight()
{
}

bool Knight::checkRules(int x, int y, int nx, int ny)
{
	if (((x - nx) * (x - nx) + (y - ny) * (y - ny)) == 5)
		return true;
	return false;
}

void Knight::show()
{
	std::cout << sign;
}
