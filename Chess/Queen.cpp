#include "Queen.h"
#include "Game.h"


Queen::Queen(int playerNum) : Piece(playerNum)
{
	sign += "Q";
}

Queen::~Queen()
{
}

bool Queen::checkRules(int x, int y, int nx, int ny)
{
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
	else if ((x == nx) && (y != ny))
	{
		for (int i = 1; i < step; i++)
		{
			if (Game::boardObj->getPoint(x, (ny > y) ? (y + i) : (y - i)) != nullptr)
			{
				return false;
			}
		}
		return true;
	}
	else if ((x != nx) && (y == ny))
	{
		for (int i = 1; i < step; i++)
		{
			if (Game::boardObj->getPoint((nx > x) ? (x + i) : (x - i), y) != nullptr)
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void Queen::show()
{
	std::cout << sign;
}
