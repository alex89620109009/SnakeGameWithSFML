#include "SnakeTail.h"

/// <summary>
 
/// </summary>
/// <param name="head"></param>
//void SnakeTail::addShapeInVector(SnakeHead& head){
//	rect.setSize(head.getSize());
//	rect.setFillColor(sf::Color::Green);
//	vectorTails.push_back(rect);
//	thisId = vectorTails.size() - 1;
//}
//
//void SnakeTail::moveTail(std::vector<std::vector<sf::RectangleShape>>& gridMap, SnakeHead& head, sf::RenderWindow& window) {
//	window.draw(vectorTails[thisId]);
//	if (thisId = 0)
//	{
//		iIndexForGrid = head.getIndexI();
//		jIndexForGrid = head.getIndexJ();
//	}
//	iIndexForGrid = head.getIndexI();
//	jIndexForGrid = head.getIndexJ()
//
//}

void st::CondtrolSnakeTail::addToMap( ) {
	SnakeTail tail;
	tail.setSize(sf::Vector2f(25,25));
	tail.setFillColor(sf::Color::Yellow);
	tailMap.push_back(tail);
	
}

void st::CondtrolSnakeTail::controlTail(SnakeHead& head, int i) {
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

void st::CondtrolSnakeTail::moveTail(SnakeHead& head, sf::RenderWindow& window, std::vector<std::vector<sf::RectangleShape>>& gridMap) {
	
	for (size_t i = 0; i < tailMap.size(); i++)
	{
		
		controlTail(head, i);
		tailMap[i].setPosition(gridMap[tailMap[i].getIndexI()][tailMap[i].getIndexJ()].getPosition());
		window.draw(tailMap[i]);
		
	}
		
	

}
