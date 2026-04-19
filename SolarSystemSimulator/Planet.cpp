#include "Planet.h"

#include <cmath>

Planet::Planet(float init_orbit_radius, float init_planet_radius, float init_angular_velocity, std::string texture_path) {
	orbit_radius = init_orbit_radius;
	planet_radius = init_planet_radius;
	angular_velocity = init_angular_velocity;

	texture.loadFromFile(texture_path);
	planet.setRadius(planet_radius);
	planet.setTexture(&texture);
	planet.setOrigin(planet_radius, planet_radius);
}

void Planet::Draw(sf::RenderWindow& window) {
	window.draw(planet);
}

void Planet::Update(sf::Vector2f orbit_center, sf::Time delta_time) {
	angle += angular_velocity * delta_time.asSeconds();
	sf::Vector2f pos = orbit_center;
	pos.x += std::cos(angle) * orbit_radius;
	pos.y += std::sin(angle) * orbit_radius;
	planet.setPosition(pos);
}