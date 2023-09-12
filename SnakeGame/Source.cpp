#include "SnakeGameHeader.h"

using namespace sf;

int main()
{

    RenderWindow window(VideoMode(1000, 1000), L"Snake Game", Style::Default);

    window.setVerticalSyncEnabled(true);
    SnakeHead head;
    sf::Texture texture;
    texture.loadFromFile("C:/Users/Alexander/source/repos/SnakeGame/SnakeGame/Sprites/SnakeHeadTexture.jpg");
    head.setPosition(500, 500);
    head.setTexture(texture);
    

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        head.MoveHead();
        window.clear();
        window.draw(head);
        window.display();
    }
    return 0;
}