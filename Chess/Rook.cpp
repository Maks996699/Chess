#include "Rook.h"
#include "Game.h"

Rook::Rook(int playerNum) : Piece(playerNum)
{
	sign += "R";
}

Rook::~Rook()
{
}

bool Rook::checkRules(int x, int y, int nx, int ny)
{
	int step = std::abs(nx - x);
	if ((x == nx) && (y != ny))
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

void Rook::show()
{
	std::cout << sign;
}
