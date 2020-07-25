#pragma once
#include <SFML/Graphics.hpp>

class Shape : public sf::Drawable
{
public:

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;
protected:
	sf::VertexArray shape;

};
