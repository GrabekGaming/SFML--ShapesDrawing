#pragma once
#include "SFML/Graphics.hpp"
class Elipse : public sf::Drawable
{
public:

	Elipse();

	Elipse(int xPn, int yPn, int rPn, int n);

	void createElipse();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:
	//create variables 
	int pX;
	int pY;
	int pr;
	int n = 60;
	sf::VertexArray eShape; //create vertexarray called cShape 
};