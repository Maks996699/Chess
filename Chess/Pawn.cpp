#include "Pawn.h"
#include "Game.h"

Pawn::Pawn(int playerNum) : Piece(playerNum)
{
	sign += "P";
}

Pawn::~Pawn()
{
}

bool Pawn::checkRules(const int& x, const int& y, const int& nx, const int& ny)
{
	if (playerNum == 1)
	{
		if ((y + 1 == ny) && x == nx)
		{
			if (Game::boardObj->getPoint(nx, ny) == nullptr)
				return true;
			return false;
		}
		else if ((y + 2 == ny) && y == 1 && x == nx)
		{
			if (Game::boardObj->getPoint(nx, ny) == nullptr)
				return true;
			return false;
		}
		else if ((ny - y == 1) && (abs(nx - x) == 1))
		{
			if (!checkTeamKill(nx, ny))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else if (playerNum == 2)
	{
		if ((y - 1 == ny) && x == nx)
		{
			if (Game::boardObj->getPoint(nx, ny) == nullptr)
				return true;
			return false;
		}
		else if ((y - 2 == ny) && y == 6 && x == nx)
		{
			if (Game::boardObj->getPoint(nx, ny) == nullptr)
				return true;
			return false;
		}
		else if ((y - ny == 1) && (abs(nx - x) == 1))
		{
			if (!checkTeamKill(nx, ny))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}

}

void Pawn::show()
{
	std::cout << sign;
}
