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
	std::vector<std::vector<sf::RectangleShape>> getVector() {
		return gridMap;
	};
	int getGridSize() {
		return sizeGrid;
	}
	void fillingVector(sf::RenderWindow& window);
	void drawGrid(sf::RenderWindow& window);
};
#endif

