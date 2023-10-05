#ifndef GAME_H
#define GAME_H
#include "GameGrid.h"
#include <iostream>
#include "SnakeHead.h"
#include "SnakeTail.h"
class Game
{
private:
	int windowWidth = 500;
	int windowHeight = 400;
	std::string windowTitle = "Snake Game";
	
	
public:
	void setWindowSize(int height = 400, int width = 500) {
		windowHeight = height;
		windowWidth = width;
	}
	void setWindowTitle(std::string name) { windowTitle = name; }
	void start(int windowWidth, int windowHeight, std::string windowTitle);
	
};
#endif // !GAME_H
