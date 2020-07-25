#include "Rectangle.h"

Rectangle::Rectangle()
{
	//declaration of all methods
	shape.setPrimitiveType(sf::Quads);
	shape.resize(4);
	shape[0].position = sf::Vector2f(150, 150);
	shape[0].color = sf::Color::Yellow;
	shape[1].position = sf::Vector2f(250, 150);
	shape[1].color = sf::Color::Green;
	shape[2].position = sf::Vector2f(250, 100);
	shape[2].color = sf::Color::Red;
	shape[3].position = sf::Vector2f(150, 100);
	shape[3].color = sf::Color::Blue;

}