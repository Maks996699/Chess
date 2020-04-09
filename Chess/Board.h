#pragma once
#include <iostream>
#include "Piece.h"
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
	Piece* getPoint(int x, int y);
	void movePiece(int x, int y, int nx, int ny);
private:
	static const int size = 8;
	Piece* board[size][size];
};

