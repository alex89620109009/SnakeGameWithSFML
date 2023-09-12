
#ifndef SNAKE
#define SNAKE
#include <SFML/Graphics.hpp>
class SnakeHead : public sf::Sprite {
public:
	void MoveHead();
private:
	void HeadControl();
	char direction = NULL;


};

#endif