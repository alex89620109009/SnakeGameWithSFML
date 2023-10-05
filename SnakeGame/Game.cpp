#include "Game.h"
void Game::start(int windowWidth = 500, int windowHeight = 400, std::string windowTitle = "Snake tail") {
	sf::RenderWindow window( sf::VideoMode(windowWidth, windowHeight), windowTitle );
	GameGrid grid;
	snake::SnakeHead snake;
	

	
	snake.setSize(sf::Vector2f(25,25));
	grid.fillingVector(window);
	snake.setFillColor(sf::Color::Red);
	snake::CondtrolSnakeTail tail;
	tail.addToMap();
	
	

	std::vector<std::vector<sf::RectangleShape>> gridMap = grid.getVector();
	while (window.isOpen()) {
		
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::Black);
		
		grid.drawGrid(window);
		
		
		
		snake.controlSnake(gridMap);
		tail.moveTail(snake, window, gridMap);
		window.draw(snake);
		
		window.display();
		
		
		
	}
}

