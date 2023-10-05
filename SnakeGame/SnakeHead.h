#ifndef SNAKEHEAD_H
#define SNAKEHEAD_H
#include "Snake.h"
#include "windows.h"

namespace snake {
	class SnakeHead :public Snake
	{
	private:
		void controlHead();
		char direction = 'D';
		void moveHead(std::vector<std::vector<sf::RectangleShape>>& gridMap);
		bool startGameFlag = true;
		void borderControl(std::vector<std::vector<sf::RectangleShape>>& gridMap);
	public:
		char getDirection() { return direction; }
		bool getStartGameFlag() { return startGameFlag; }
		void setStartGameFlag(bool flag) { startGameFlag = flag; }
		void controlSnake(std::vector<std::vector<sf::RectangleShape>>& gridMap);
	};
}

#endif // !SNAKEHEAD_H



