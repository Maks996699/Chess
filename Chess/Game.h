#pragma once
#include <fstream>
#include <iostream>
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
	bool getUserCommand();
	void showBoard();
	static Board* boardObj;

private:
	int playerTurn;
	bool isRunning;
	bool checkPos(const std::string &pos);
	int chToInt(const char& ch);
	int numChToInt(const char& ch);
};

