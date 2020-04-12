#pragma once
#include <iostream>
#include "Queen.h"
#include "King.h"
#include "Bishop.h"
#include "Knight.h"
#include "Rook.h"
#include "Pawn.h"

class Board
{
public:
	Board();
	~Board();
	void show();
	void startPos();
	Piece* getPoint(const int& x, const int& y);
	void movePiece(const int& x, const int& y, const int& nx, const int& ny);
	static const int size = 8;
private:
	Piece* board[size][size];
};

