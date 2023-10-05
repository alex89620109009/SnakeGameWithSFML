#include "SnakeTail.h"


void snake::CondtrolSnakeTail::addToMap( ) {
	Snake tail;
	tail.setSize(sf::Vector2f(25,25));
	tail.setFillColor(sf::Color::Yellow);
	tailMap.push_back(tail);
	
}

void snake::CondtrolSnakeTail::controlTail(SnakeHead& head, int i) {
	switch (head.getDirection())
	{
	case 'D':
		tailMap[i].setIndexes(head.getIndexI() - 2, head.getIndexJ());
		break;
	case 'A':
		tailMap[i].setIndexes(head.getIndexI()+2, head.getIndexJ());
		break;
	case 'W':
		tailMap[i].setIndexes(head.getIndexI(), head.getIndexJ()+2);
		break;
	case 'S':
		tailMap[i].setIndexes(head.getIndexI(), head.getIndexJ()-2);
		break;
	}
}

void snake::CondtrolSnakeTail::moveTail(SnakeHead& head, sf::RenderWindow& window, std::vector<std::vector<sf::RectangleShape>>& gridMap) {
	
	for (size_t i = 0; i < tailMap.size(); i++)
	{
		
		controlTail(head, i);
		tailMap[i].setPosition(gridMap[tailMap[i].getIndexI()][tailMap[i].getIndexJ()].getPosition());
		window.draw(tailMap[i]);
		
	}
		
	

}
