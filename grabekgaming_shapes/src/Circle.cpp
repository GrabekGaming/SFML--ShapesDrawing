#include "Circle.h"

Circle::Circle(int xPn, int yPn, int rPn, int n)
{
	//all variables and functions
	pX = xPn;
	pY = yPn;
	pr = rPn;
	n = 60;	
	// determine type and size of shape
	cShape.setPrimitiveType(sf::TrianglesFan);
	cShape.resize(n);
	createCircle();
}
void Circle::createCircle() {
	int i_theta = 0;
	int i_angleIncrement = 360 / n;
	//	// x' = x+ cos(theta)*r ;
	//	//y' = y+ sin(theta)*r ;
	for (int i = 0; i < n; i++) 
	{
		cShape[i].position = sf::Vector2f((pX + std::cos(i_theta) * pr), (pY + std::sin(i_theta)*pr));
		cShape[i].color = sf::Color::White;
		i_theta += i_angleIncrement;
	}
}
void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const // function to draw shape
{
	target.draw(cShape);
}
