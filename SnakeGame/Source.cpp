#include "SnakeGameHeader.h"

using namespace sf;

int main()
{

    RenderWindow window(VideoMode(500, 500), L"Snake Game", Style::Resize);

    window.setVerticalSyncEnabled(true);
    SnakeHead head;
    head.setPosition(475, 475);
    

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        head.createSnake();
        window.clear();
        window.draw(head);
        window.display();
    }
    return 0;
}