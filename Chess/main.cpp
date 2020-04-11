#include "main.h"

int main() {

	Game* game = new Game();

	game->start();

	char buff;
	while (game->running()) {
		game->getUserCommand();
		fflush(stdin);
		_getch();
		fflush(stdin);
		system("cls");
		game->showBoard();
	}

	delete game;

	return 0;
}