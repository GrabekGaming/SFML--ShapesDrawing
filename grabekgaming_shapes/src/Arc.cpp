#include "Arc.h"

Arc::Arc(int xPn, int yPn, int rPn, int n)
{
	//all variables and functions
	pX = xPn;
	pY = yPn;
	pr = rPn;
	n = 80;
	// determine type and size of shape
	aShape.setPrimitiveType(sf::TrianglesFan);
	aShape.resize(n);
	createArc();
}
void Arc::createArc() 
{	
	static const float PI = 3.141592f; // determine the pi number
	//	// x' = x+ cos(theta)*r ;
	//	//y' = y+ sin(theta)*r ;
	for (int i = 0; i < n; i++) // loop to create a mulittiple points
	{
		float i_theta = i * 2 * PI / 360 - PI / 2; // angle necessary to create an arc
		aShape[i].position = sf::Vector2f((pX + std::cos(i_theta) * pr), (pY + std::sin(i_theta)*pr)); // position of an arc using euqation stated above
		aShape[i].color = sf::Color::Cyan;
	}
}
void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const // function that draw shape
{
	target.draw(aShape);
}
