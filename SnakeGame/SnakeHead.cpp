#include "SnakeHead.h"

void SnakeHead::controlHead() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) direction = 'D';
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) direction = 'W';
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) direction = 'S';
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) direction = 'A';
}
void SnakeHead::borderControl(std::vector<std::vector<sf::RectangleShape>>& gridMap) {
	if (this->getIndexI() >= gridMap.size() - 1 || this->getIndexJ() >= gridMap[0].size() - 1 ||
		this->getIndexJ() < 0 || this->getIndexI() <= 0) this->startGameFlag = true;
}
void SnakeHead::moveHead(std::vector<std::vector<sf::RectangleShape>>& gridMap){
	
	if (startGameFlag) {
		iIndexForGrid = (gridMap.size() - 1) / 2;
		jIndexForGrid = (gridMap[0].size() - 1) / 2;
		startGameFlag = false;
	}
	this->borderControl(gridMap);
	this->setPosition(gridMap[iIndexForGrid][jIndexForGrid].getPosition());
	if (direction == 'S') jIndexForGrid++;
	if (direction == 'W') jIndexForGrid--;
	if (direction == 'A') iIndexForGrid--;
	if (direction == 'D') iIndexForGrid++;
	Sleep(75);

}

void SnakeHead::controlSnake(std::vector<std::vector<sf::RectangleShape>>& gridMap){
	
	moveHead(gridMap);
	controlHead();
	
	
	
}