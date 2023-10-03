#include "Game.h"
void Game::start() {
	GameGrid grid;
	SnakeHead snake;
	snake.setSize(sf::Vector2f(25,25));
	snake.setFillColor(sf::Color::Red);
	grid.fillingVector(window);

	std::vector<std::vector<sf::RectangleShape>> gridMap = grid.getVector();
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::Black);
		
		grid.drawGrid(window);
		snake.drawHead(gridMap);
		window.draw(snake);
		window.display();
	}
}

