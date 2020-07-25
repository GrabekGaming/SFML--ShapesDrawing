#include "Dot.h"

Dot::Dot()
{	
	//declaration of all methods
	shape.setPrimitiveType(sf::Points);
	shape.resize(1);
	shape[0].position = sf::Vector2f(200, 200);
	shape[0].color = sf::Color::Red;
}