#ifndef GAME_H
#define GAME_H
#include "GameGrid.h"
#include <iostream>
class Game
{
private:
	int windowWidth = 500;
	int windowHeight = 400;
	std::string windowTitle = "Snake Game";
	sf::RenderWindow window{ sf::VideoMode(windowWidth, windowHeight), windowTitle };
	void windowSettings();
public:
	void setWindowSize(int height = 400, int width = 500) {
		windowHeight = height;
		windowWidth = width;
	}
	void setWindowTitle(std::string name) { windowTitle = name; }
	void start();
};
#endif // !GAME_H
