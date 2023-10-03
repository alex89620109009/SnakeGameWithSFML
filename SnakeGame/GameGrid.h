#ifndef GAMEGRID_H
#define GAMEGRID_H
#include <vector>
#include "SFML/Graphics.hpp"
class GameGrid
{
private:
	int sizeGrid = 25;
	std::vector<std::vector<sf::RectangleShape>> gridMap;

public:
	void fillingVector(sf::RenderWindow& window);
	void drawGrid(sf::RenderWindow& window);
};
#endif

