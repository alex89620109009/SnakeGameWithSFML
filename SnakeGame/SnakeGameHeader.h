#pragma once
#include "snake.cpp"
class SnakeHead : public sf::Sprite
{	public:
		void MoveHead() {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			{
				this->move(-0.1, 0);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			{
				this->move(0.1, 0);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			{
				this->move(0, -0.1);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			{
				this->move(0, 0.1);
			}
	}

};