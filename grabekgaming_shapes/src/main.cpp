/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML winow in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
*/

#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Line.h"
#include "Elipse.h"
#include "Shape.h"
#include "Dot.h"
#include "Triangle.h"
#include "Arc.h"


using namespace std;


int main() //!< Entry point for the application
{

	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes"); // Create window for display 1024x800
	window.setFramerateLimit(60); // Set up frame limit


	// Below all subclasses linked to superclass Shape
	Shape lineShape = Line();
	Shape dotShape = Dot();
	Shape rectangleShape = Rectangle();
	Shape squareShape = Square();
	Shape triangleShape = Triangle();

	// Bellow all classes linked directly to drawable
	Circle circleShape(500, 120, 50, 80);
	Elipse elipseShape(450, 250, 50, 80);
	Arc arcShape(100, 300, 80, 120);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();

		
		// Do your drawing here
		window.draw(lineShape);
		window.draw(dotShape);
		window.draw(rectangleShape);
		window.draw(squareShape);
		window.draw(triangleShape);
		window.draw(circleShape);
		window.draw(elipseShape);
		window.draw(arcShape);

		window.display();

		
	}
	return 0;
}
 