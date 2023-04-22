#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Window");
    sf::CircleShape hexagon(50.f, 6); 
    hexagon.setPosition(window.getSize().x/2 - hexagon.getRadius(), window.getSize().y/2 - hexagon.getRadius());
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.draw(hexagon); 
        window.display();
    }
    return 0;
}
