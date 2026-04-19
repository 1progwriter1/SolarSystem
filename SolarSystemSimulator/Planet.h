#pragma once

#include <SFML/Graphics.hpp>

class Planet {
public:
	Planet(float init_orbit_radius, float init_planet_radius, float init_angular_velocity, std::string texture_path);

	void Update(sf::Vector2f orbit_center, sf::Time delta_time);
	void Draw(sf::RenderWindow& window);

private:
	float orbit_radius;
	float planet_radius;
	float angular_velocity;
	sf::Texture texture;
	sf::CircleShape planet;
	float angle = 0;
};

