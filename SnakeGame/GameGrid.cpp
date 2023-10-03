#include "GameGrid.h"

void GameGrid::fillingVector(sf::RenderWindow& window) {
	for (size_t i = 0; i <= window.getSize().x / sizeGrid; i++)
	{
		std::vector<sf::RectangleShape> subRow;
		for (size_t j = 0; j < window.getSize().y / sizeGrid; j++)
		{
			sf::RectangleShape rectangle(sf::Vector2f(sizeGrid, sizeGrid));
			rectangle.setPosition(sf::Vector2f(i * sizeGrid, j * sizeGrid));
			rectangle.setOutlineColor(sf::Color::White);
			rectangle.setOutlineThickness(2);
			rectangle.setFillColor(sf::Color::Black);
			subRow.push_back(rectangle);
		}
		gridMap.push_back(subRow);
	}
}

void GameGrid::drawGrid(sf::RenderWindow& window) {
	for (size_t i = 0; i < gridMap.size(); i++)
		for (size_t j = 0; j < gridMap[i].size(); j++)
			window.draw(gridMap[i][j]);
}
