#include "main.h"

int main() {

	Game* game = new Game();

	game->start();

	//while (game->running()) {

	//}

	delete game;

	return 0;
}