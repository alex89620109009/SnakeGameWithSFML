#include "SnakeGameHeader.h"

using namespace sf;

int main()
{

    RenderWindow window(VideoMode(400, 400), L"Snake Game", Style::Default);

    window.setVerticalSyncEnabled(true);
    SnakeHead head;
    sf::Texture texture;
    texture.loadFromFile("C:/Users/Alexander/Downloads/1e31694cd93e4a2d6208215801c98a2d.jpg");
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
        window.draw(head);
        window.display();
    }
    return 0;
}