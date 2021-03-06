#include "Bishop.h"
#include "Game.h"

Bishop::Bishop(int playerNum) : Piece(playerNum)
{
	sign += "B";
}

Bishop::~Bishop()
{
}

bool Bishop::checkRules(const int& x, const int& y, const int& nx, const int& ny)
{
	if (checkTeamKill(nx, ny))
	{
		return false;
	}

	int step = std::abs(nx - x);
	if (((nx - x) * (nx - x)) == ((ny - y) * (ny - y)))
	{
		for (int i = 1; i < step; i++)
		{
			if (Game::boardObj->getPoint((nx > x) ? (x + i) : (x - i),
				(ny > y) ? (y + i) : (y - i)) != nullptr)
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void Bishop::show()
{
	std::cout << sign;
}
