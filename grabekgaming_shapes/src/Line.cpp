#include "Line.h"

Line::Line()
{
	//declaration of all methods
	shape.setPrimitiveType(sf::Lines);
	shape.resize(2);
	shape[0].position = sf::Vector2f(10, 10);
	shape[0].color = sf::Color::Green;
	
	shape[1].position = sf::Vector2f(100, 100);
	shape[1].color = sf::Color::Red;
}
