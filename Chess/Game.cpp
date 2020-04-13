#include "Game.h"

Board* Game::boardObj = new Board();

Game::Game()
{
}

Game::~Game()
{
}

void Game::start()
{
	playerTurn = 1;
	isRunning = true;
	//check file
	Game::boardObj->startPos();
	Game::boardObj->show();
}

void Game::restart()
{
	boardObj->startPos();
}

bool Game::running()
{
	return isRunning;
}

bool Game::getUserCommand()
{
	if (playerTurn == 1)
	{
		std::cout << "White turn" << std::endl;
	}
	else
	{
		std::cout << "Black turn" << std::endl;
	}

	std::cout << std::endl << "What your wonna?(move,load,save,restart): ";

	std::string command;
	std::cin >> command;

	if (command == "move")
	{
		std::cout << "What your chess move?(a4 to a7): ";

		std::string start, buff, end;
		std::cin >> start >> buff >> end;

		if (checkPos(start) && checkPos(end))
		{
			const int x = chToInt(start[0]);
			const int y = numChToInt(start[1]) - 1;
			const int nx = chToInt(end[0]);
			const int ny = numChToInt(end[1]) - 1;

			if ((boardObj->getPoint(x, y) != nullptr) && (boardObj->getPoint(x, y)->checkRules(x, y, nx, ny)))
			{
				if (boardObj->getPoint(x, y)->getPlayerNum() == playerTurn)
				{
					boardObj->movePiece(x, y, nx, ny);
					playerTurn = playerTurn % 2 + 1;
				}
				else
				{
					std::cout << "Not your turn" << std::endl;
				}
			}
			else
			{
				std::cout << "Wrong move";
			}
		}
		else
		{
			std::cout << "Wrong position";
		}
	}
	else if (command == "restart")
	{
		restart();
	}
	else 
	{
		std::cout << "Bad command, try again";
		return false;
	}
}

void Game::showBoard()
{
	boardObj->show();
}

bool Game::checkPos(const std::string& pos)
{
	if (pos[0] >= 'a' && pos[0] <= 'h' && pos[1] >= '1' && pos[1] <= '8')
	{
		return true;
	}
	return false;
	
}

int Game::chToInt(const char& ch)
{
	return int(ch - 'a');
}

int Game::numChToInt(const char& ch)
{
	return int(ch - '0');;
}

