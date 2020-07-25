#pragma once
#include "SFML/Graphics.hpp"

class Circle : public sf::Drawable
{
public:

	// all functions necessary to create an arc

	Circle();

	Circle(int xPn, int yPn, int rPn, int n);

	void createCircle();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const; 

private:
	//create variables 
	int pX;
	int pY;
	int pr;
	int n = 60;
	sf::VertexArray cShape; //create vertexarray called cShape 
};