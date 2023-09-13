
#ifndef SNAKE
#define SNAKE
#include <SFML/Graphics.hpp>
#include <map>
class SnakeHead : public sf::Sprite {
private:
	void endGame();
	void moveControl();
	char direction = NULL;
	void addTexture_m(const std::string& filePath);
	void moveHead();

public:
	void createSnake();

};


#endif