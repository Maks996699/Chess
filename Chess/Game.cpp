#include "Game.h"

Board* Game::brd = new Board();

Game::Game()
{
}

Game::~Game()
{
}

void Game::start()
{

	isRunning = true;
	brd->startPos();
	brd->show();
}

bool Game::running()
{
	return isRunning;
}
