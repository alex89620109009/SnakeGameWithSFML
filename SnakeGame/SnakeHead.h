#ifndef SNAKEHEAD_H
#define SNAKEHEAD_H
#include "SFML/Graphics.hpp"
#include "windows.h"

class SnakeHead :public sf::RectangleShape
{
private:
	int iIndexForGrid = 0, jIndexForGrid = 0;
	void controlHead();
	char direction = 'D';
	void moveHead(std::vector<std::vector<sf::RectangleShape>>& gridMap) ;
	bool startGameFlag = true;
	
public:

	void drawHead(std::vector<std::vector<sf::RectangleShape>>& gridMap);
};
#endif // !SNAKEHEAD_H



