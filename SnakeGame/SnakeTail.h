#ifndef SNAKETAIL_H
#define SNAKETAIL_H
#include "SnakeHead.h"



namespace st {
	class SnakeTail :public sf::RectangleShape
	{
	private:
		int iIndexForGrid = 0, jIndexForGrid = 0;

	public:
		void setIndexes(int i=0, int j=0){
			iIndexForGrid = i;
			jIndexForGrid = j;
		}
		
		int getIndexI() {
			return iIndexForGrid;
		}
		int getIndexJ() {
			return jIndexForGrid;
		}

	};
	class CondtrolSnakeTail {
	private:
		std::vector<SnakeTail> tailMap;
		void controlTail(SnakeHead& head, int i);
	public:
		void addToMap();
		void moveTail(SnakeHead& head, sf::RenderWindow& window, std::vector<std::vector<sf::RectangleShape>>& gridMap);
	};
	
}

#endif 



