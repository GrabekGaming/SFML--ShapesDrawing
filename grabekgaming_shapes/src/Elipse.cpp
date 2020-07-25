#include "Elipse.h"

Elipse::Elipse(int xPn, int yPn, int rPn, int n)
{	
	//all variables and functions
	pX = xPn;
	pY = yPn;
	pr = rPn;
	n = 60;
	// determine type and size of shape
	eShape.setPrimitiveType(sf::TrianglesFan);
	eShape.resize(n);
	createElipse();
}
void Elipse::createElipse() {
	int i_theta = 0;
	int i_angleIncrement = 360 / n;
	//	// x' = x+ cos(theta)*r ;
	//	//y' = y+ sin(theta)*r ;
	for (int i = 0; i < n; i++) 
	{
		eShape[i].position = sf::Vector2f((pX + std::cos(i_theta)*100), (pY + std::sin(i_theta)*pr)); // position of an elipse using euqation stated above
		eShape[i].color = sf::Color::Blue;
		i_theta += i_angleIncrement;
	}
}
void Elipse::draw(sf::RenderTarget& target, sf::RenderStates states) const // function that draw shape
{
	target.draw(eShape);
}
