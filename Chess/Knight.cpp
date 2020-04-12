#include "Knight.h"
#include "Game.h"

Knight::Knight(int playerNum) : Piece(playerNum)
{
	sign += "N";
}

Knight::~Knight()
{
}

bool Knight::checkRules(const int& x, const int& y, const int& nx, const int& ny)
{
	if ((((x - nx) * (x - nx) + (y - ny) * (y - ny)) == 5) &&
		(!checkTeamKill(nx, ny)))
	{
		return true;
	}
	return false;
}

void Knight::show()
{
	std::cout << sign;
}
