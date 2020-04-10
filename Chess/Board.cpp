#include "Board.h"


Board::Board()
{
}

Board::~Board()
{
}

void Board::show()
{
	std::string letterLine = "   a  b  c  d  e  f  g  h";
	std::string topLine = "  _______________________";
	std::string dividingLine = "-|--|--|--|--|--|--|--|--|-";
	std::string bottomLine = " |__|__|__|__|__|__|__|__|";
	std::string dividingSymbol = "|";
	std::string spaceSymbol = " ";
	std::string doubleSpace = "  ";

	std::cout << letterLine << std::endl;
	std::cout << dividingLine << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1;
		for (int j = 0; j < size; j++)
		{
			std::cout << dividingSymbol;
			if (board[i][j])
			{
				board[i][j]->show();
			}
			else
			{
				std::cout << doubleSpace;
			}
		}

		std::cout << dividingSymbol  << i + 1 << std::endl;
		std::cout << dividingLine << std::endl;
	}

	std::cout << letterLine << std::endl;
}

void Board::startPos()
{
	int BlackPlayer = 2;
	int WhitePlayer = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			if (i == 0)
			{
				switch (j)
				{
				case 0: board[i][j] = new Rook(WhitePlayer); break;
				case 1: board[i][j] = new Knight(WhitePlayer); break;
				case 2: board[i][j] = new Bishop(WhitePlayer); break;
				case 3: board[i][j] = new Queen(WhitePlayer); break;
				case 4: board[i][j] = new King(WhitePlayer); break;
				case 5: board[i][j] = new Bishop(WhitePlayer); break;
				case 6: board[i][j] = new Knight(WhitePlayer); break;
				case 7: board[i][j] = new Rook(WhitePlayer); break;
				}
			}
			else if (i == size - 1)
			{
				switch (j)
				{
				case 0: board[i][j] = new Rook(BlackPlayer); break;
				case 1: board[i][j] = new Knight(BlackPlayer); break;
				case 2: board[i][j] = new Bishop(BlackPlayer); break;
				case 3: board[i][j] = new Queen(BlackPlayer); break;
				case 4: board[i][j] = new King(BlackPlayer); break;
				case 5: board[i][j] = new Bishop(BlackPlayer); break;
				case 6: board[i][j] = new Knight(BlackPlayer); break;
				case 7: board[i][j] = new Rook(BlackPlayer); break;
				}
			}
			else if (i == 1)
			{
				board[i][j] = new Pawn(WhitePlayer);
			}
			else if (i == size - 2)
			{
				board[i][j] = new Pawn(BlackPlayer);
			}
			else
			{
				board[i][j] = nullptr;
			}
		}
	}
}

Piece* Board::getPoint(int x, int y)
{
	if (x < size && y < size)
	{
		return board[y][x];
	}
	//error
}

void Board::movePiece(int x, int y, int nx, int ny)
{
	delete board[ny][nx];
	board[ny][nx] = nullptr;

	board[ny][nx] = board[y][x];
	board[y][x] = new Piece();
}
