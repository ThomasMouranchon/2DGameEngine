#include "CircleComponent.h"

GE::CircleComponent::CircleComponent() : shape(200)
{
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(10, 10);
}

void GE::CircleComponent::Update(float deltaTime)
{
}

void GE::CircleComponent::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shape, states);
}
