#include "Rook.h"
#include "Game.h"

Rook::Rook(int playerNum) : Piece(playerNum)
{
	sign += "R";
}

Rook::~Rook()
{
}

bool Rook::checkRules(const int& x, const int& y, const int& nx, const int& ny)
{
	if (checkTeamKill(nx, ny))
	{
		return false;
	}

	int step = 0;
	if ((x == nx) && (y != ny))
	{
		step = std::abs(ny - y);
		for (int i = 1; i < step; i++)
		{
			if (Game::boardObj->getPoint(x, (ny > y) ? (y + i) : (y - i)) != nullptr)
			{
				return false;
			}
		}
		didMove = true;
		return true;
	}
	else if ((x != nx) && (y == ny))
	{
		step = std::abs(nx - x);
		for (int i = 1; i < step; i++)
		{
			if (Game::boardObj->getPoint((nx > x) ? (x + i) : (x - i), y) != nullptr)
			{
				return false;
			}
		}
		didMove = true;
		return true;
	}
	return false;
}

void Rook::show()
{
	std::cout << sign;
}

