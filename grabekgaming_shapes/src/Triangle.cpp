#include "Triangle.h"

Triangle::Triangle()
{
	//declaration of all methods
	shape.setPrimitiveType(sf::Triangles);
	shape.resize(3);
	shape[0].position = sf::Vector2f(350, 50);
	shape[0].color = sf::Color::White;
	shape[1].position = sf::Vector2f(400, 150);
	shape[1].color = sf::Color::Red;
	shape[2].position = sf::Vector2f(300, 150);
	shape[2].color = sf::Color::Blue;

}