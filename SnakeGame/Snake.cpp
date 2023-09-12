#include <SFML/Graphics.hpp>
#include "SnakeGameHeader.h"
	void SnakeHead::HeadControl() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			direction = 'D';
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			direction = 'A';
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			direction = 'W';
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			direction = 'S';
		}
	}
	void SnakeHead::MoveHead() {
		HeadControl();
		if (direction == 'D' ) this->move(0.5, 0);
		if (direction == 'A') this->move(-0.5, 0);
		if (direction == 'W' ) this->move(0, -0.5);
		if (direction == 'S') this->move(0, 0.5);

	}


