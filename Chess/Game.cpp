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

	isRunning = true;
	//check file
	Game::boardObj->startPos();
	Game::boardObj->show();
}

bool Game::running()
{
	return isRunning;
}

bool Game::getUserCommand()
{
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
			int x = chToInt(start[0]);
			int y = numChToInt(start[1]) - 1;
			int nx = chToInt(end[0]);
			int ny = numChToInt(end[1]) - 1;

			if (boardObj->getPoint(x, y)->checkRules(x, y, nx, ny))
				boardObj->movePiece(x, y, nx, ny);
			else
				std::cout << "Wrong move";
		}
		else
		{
			std::cout << "Bad comm";
		}
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
	if (pos[0] != 'a' && pos[0] != 'b' && pos[0] != 'c' && pos[0] != 'd' &&
		pos[0] != 'e' && pos[0] != 'f' && pos[0] != 'g' && pos[0] != 'h' &&
		pos[1] < 1 && pos[1] > 8)
	{
		return false;
	}
	return true;
	
}

int Game::chToInt(const char& ch)
{
	return int(ch - 'a');
}

int Game::numChToInt(const char& ch)
{
	return int(ch - '0');;
}

