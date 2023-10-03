#include "SnakeHead.h"

void SnakeHead::controlHead() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) direction = 'D';
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) direction = 'W';
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) direction = 'S';
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) direction = 'A';
}

void SnakeHead::moveHead(std::vector<std::vector<sf::RectangleShape>>& gridMap){
	
	if (startGameFlag) {
		iIndexForGrid = (gridMap.size() - 1) / 2;
		jIndexForGrid = (gridMap[0].size() - 1) / 2;
		startGameFlag = false;
	}
	if (iIndexForGrid >= gridMap.size()) iIndexForGrid = 0;
	if (jIndexForGrid >= gridMap[0].size()) jIndexForGrid = 0;
	this->setPosition(gridMap[iIndexForGrid][jIndexForGrid].getPosition());
	if (direction == 'S') jIndexForGrid++;
	if (direction == 'W') jIndexForGrid--;
	if (direction == 'A') iIndexForGrid--;
	if (direction == 'D') iIndexForGrid++;
	

}

void SnakeHead::drawHead(std::vector<std::vector<sf::RectangleShape>>& gridMap){
	controlHead();
	moveHead(gridMap);
	
	
}