#pragma once
#include <fstream>
#include "Board.h"

class Game
{
public:
	Game();
	~Game();
	void start();
	void save();
	void load();
	void restart();
	bool running();
	static Board* brd;

private:
	bool isRunning;

};

