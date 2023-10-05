#include "SnakeHead.h"

void snake::SnakeHead::controlHead() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) direction = 'D';
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) direction = 'W';
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) direction = 'S';
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) direction = 'A';
}
void snake::SnakeHead::borderControl(std::vector<std::vector<sf::RectangleShape>>& gridMap) {
	if (this->getIndexI() >= gridMap.size() - 1 || this->getIndexJ() >= gridMap[0].size() - 1 ||
		this->getIndexJ() < 0 || this->getIndexI() <= 0) this->startGameFlag = true;
}
void snake::SnakeHead::moveHead(std::vector<std::vector<sf::RectangleShape>>& gridMap){
	
	if (startGameFlag) {
		this->iIndexForGrid = (gridMap.size() - 1) / 2;
		this->jIndexForGrid = (gridMap[0].size() - 1) / 2;
		startGameFlag = false;
	}
	this->borderControl(gridMap);
	this->setPosition(gridMap[this->iIndexForGrid][this->jIndexForGrid].getPosition());
	if (direction == 'S') this->jIndexForGrid++;
	if (direction == 'W') this->jIndexForGrid--;
	if (direction == 'A') this->iIndexForGrid--;
	if (direction == 'D') this->iIndexForGrid++;
	Sleep(75);

}

void snake::SnakeHead::controlSnake(std::vector<std::vector<sf::RectangleShape>>& gridMap){
	
	moveHead(gridMap);
	controlHead();
	
	
	
}