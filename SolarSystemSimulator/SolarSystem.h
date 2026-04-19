#pragma once

#include <vector>

#include "Planet.h"

class SolarSystem {
public:
	SolarSystem(sf::Vector2f init_center);

	void AddPlanet(Planet planet);

	void Update(sf::Time delta_time);

	void Draw(sf::RenderWindow& window);

private:
	std::vector<Planet> planets;
	sf::Vector2f center;
};

