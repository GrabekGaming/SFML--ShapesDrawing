#pragma once
#include "SFML/Graphics.hpp"

class Arc : public sf::Drawable //access to drawable class
{
public:

	// all functions necessary to create an arc
	Arc(); 

	Arc(int xPn, int yPn, int rPn, int n);

	void createArc();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:

	//create variables 
	int pX;
	int pY;
	int pr;
	int n = 80;
	//create vertexarray called aShape 
	sf::VertexArray aShape;
};
