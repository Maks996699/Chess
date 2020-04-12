#include "King.h"
#include "Game.h"

King::King(int playerNum) : Piece(playerNum)
{
	sign += "K";
	didMove = false;
}

King::~King()
{
}

bool King::checkRules(const int& x, const int& y, const int& nx, const int& ny)
{
	if (checkTeamKill(nx, ny))
	{
		return false;
	}

	if ((std::abs(nx - x) == 2) && (ny == y) && (!didMove)) //castling
	{
		int lengthToRock = 0;
		if (nx - x == 2)
		{
			lengthToRock = 3;
			if ((Game::boardObj->getPoint(x + lengthToRock, ny) != nullptr) &&
				!(Game::boardObj->getPoint(x + lengthToRock, ny)->getDidMove()))
			{
				for (int i = 1; i < lengthToRock; i++)
				{
					if (Game::boardObj->getPoint(x + i, ny) != nullptr)
					{
						return false;
					}
				}
				Game::boardObj->movePiece(x + lengthToRock, y, x + 1, ny);
				didMove = true;
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (x - nx == 2)
		{
			lengthToRock = 4;
			if ((Game::boardObj->getPoint(x - lengthToRock, ny) != nullptr) &&
				!(Game::boardObj->getPoint(x - lengthToRock, ny)->getDidMove()))
			{
				for (int i = 1; i < lengthToRock; i++)
				{
					if (Game::boardObj->getPoint(x - i, ny) != nullptr)
					{
						return false;
					}
				}
				Game::boardObj->movePiece(x - lengthToRock, y, x - 1, ny);
				didMove = true;
				return true;
			}
			else
			{
				return false;
			}
		}
	}

	if (std::abs(nx - x) > 1 || std::abs(ny - y) > 1)
	{
		return false;
	}

	didMove = true;
	return true;
}

void King::show()
{
	std::cout << sign;
}

