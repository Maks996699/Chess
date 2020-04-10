#include "main.h"

int main() {

	Game* game = new Game();

	game->start();
	game->getUserCommand();
	system("cls");
	game->showBoard();

	//while (game->running()) {

	//}

	delete game;

	return 0;
}