#include "Game.h"
void Game::start() {
	GameGrid grid;
	grid.fillingVector(window);
	window.setVerticalSyncEnabled(true);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::Black);
		grid.drawGrid(window);
		window.display();
	}
}

