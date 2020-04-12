#include "Piece.h"
#include "Game.h"

Piece::Piece(int playerNum)
{
	this->playerNum = playerNum;
	sign = playerNum == 1 ? "W" : "B";
	didMove = false;
}

Piece::Piece()
{
	didMove = false;
}

Piece::~Piece()
{
}

bool Piece::checkRules(const int& x, const int& y, const int& nx, const int& ny)
{
	return false;
}

void Piece::show()
{
	std::cout << "  ";
}

int Piece::getPlayerNum()
{
	return playerNum;
}

bool Piece::getDidMove()
{
	return didMove;
}

bool Piece::checkTeamKill(const int& nx, const int& ny)
{
	if (Game::boardObj->getPoint(nx, ny) != nullptr)
	{
		if (playerNum == Game::boardObj->getPoint(nx, ny)->getPlayerNum())
		{
			return true;
		}
	}
	return false;
}
