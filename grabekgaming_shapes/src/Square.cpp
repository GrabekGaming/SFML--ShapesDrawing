#include "Square.h"

Square::Square()
{
	//declaration of all methods
	shape.setPrimitiveType(sf::Quads);
	shape.resize(4);
	shape[0].position = sf::Vector2f(130, 80);
	shape[0].color = sf::Color::Yellow;
	shape[1].position = sf::Vector2f(180, 80);
	shape[1].color = sf::Color::Green;
	shape[2].position = sf::Vector2f(180, 30);
	shape[2].color = sf::Color::Red;
	shape[3].position = sf::Vector2f(130, 30);
	shape[3].color = sf::Color::Blue;
}