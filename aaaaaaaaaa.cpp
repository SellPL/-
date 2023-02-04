#include <SFML/Graphics.hpp>
using namespace sf;

int main() {
    RenderWindow window(VideoMode(700, 500), "Circle");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }
        
        window.clear(Color::Black);

        CircleShape circleS(100.f);
        circleS.setFillColor(Color::White);
        circleS.move(50, 50);
        window.draw(circleS);
        
        RectangleShape rectangle(Vector2f(200.f, 5.f));
        rectangle.move(50, 150);
        rectangle.setFillColor(Color::Blue);
        window.draw(rectangle);
        window.display();
    }
}
