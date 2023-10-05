#ifndef SNAKETAIL_H
#define SNAKETAIL_H
#include "Snake.h"
#include"SnakeHead.h"


namespace snake {
	
	class CondtrolSnakeTail {
	private:
		std::vector<Snake> tailMap;
		void controlTail(SnakeHead& head, int i);
	public:
		void addToMap();
		void moveTail(SnakeHead& head, sf::RenderWindow& window, std::vector<std::vector<sf::RectangleShape>>& gridMap);
	};
	
}

#endif 



