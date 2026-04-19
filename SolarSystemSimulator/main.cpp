#include <SFML/Graphics.hpp>

#include "Config.hpp"
#include "SolarSystem.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Solar system");

	SolarSystem solar_system(sf::Vector2f(window.getSize().x / 2, window.getSize().y / 2));

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear();
		window.display();
	}
}