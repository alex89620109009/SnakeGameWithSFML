#include <SFML/Graphics.hpp>
#include "SnakeGameHeader.h"
void SnakeHead::moveControl() {
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
void SnakeHead::endGame() {
	if (this->getPosition().x > 475 || this->getPosition().x < 0 || this->getPosition().y > 475 || this->getPosition().y < 0)
	{
		this->setPosition(225, 225);
	}
}
void SnakeHead::moveHead() {
	
	if (direction == 'D' ) this->move(0.5, 0);
	if (direction == 'A') this->move(-0.5, 0);
	if (direction == 'W' ) this->move(0, -0.5);
	if (direction == 'S') this->move(0, 0.5);

}

void SnakeHead::addTexture_m(const std::string& filePath) {
	
	sf::Texture texture;
	texture.loadFromFile(filePath);
	this->setTexture(texture);
		
}

void SnakeHead::createSnake() {
	addTexture_m("Sprites/SnakeHeadTexture.jpg");
	endGame();
	moveControl();
	moveHead();
}





