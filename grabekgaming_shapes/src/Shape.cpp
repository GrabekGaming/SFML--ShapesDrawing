#include "Shape.h"

void Shape::draw(sf::RenderTarget & target, sf::RenderStates states) const //function that draw the shape
{
	target.draw(shape);
}
