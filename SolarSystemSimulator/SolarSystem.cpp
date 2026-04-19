#include "SolarSystem.h"

SolarSystem::SolarSystem(sf::Vector2f init_center) {
	center = init_center;
}

void SolarSystem::AddPlanet(Planet planet) {
	planets.push_back(planet);
}

void SolarSystem::Update(sf::Time delta_time) {
	for (int i = 0; i < planets.size(); ++i) {
		planets[i].Update(center, delta_time);
	}
}

void SolarSystem::Draw(sf::RenderWindow& window) {
	for (int i = 0; i < planets.size(); ++i) {
		planets[i].Draw(window);
	}
}