#ifndef SNAKE_H
#define SNAKE_H
#include "SFML/Graphics.hpp"
namespace snake {
	class Snake: public sf::RectangleShape
	{
	protected:
		int iIndexForGrid = 0, jIndexForGrid = 0;

	public:
		void setIndexes(int i = 0, int j = 0) {
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
}

#endif // !SNAKE_H



