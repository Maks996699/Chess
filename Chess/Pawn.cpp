#include "Pawn.h"

Pawn::Pawn(int playerNum) : Piece(playerNum)
{
	sign += "P";
}

Pawn::~Pawn()
{
}

bool Pawn::checkRules()
{
	return false;
}

void Pawn::show()
{
	std::cout << sign;
}
