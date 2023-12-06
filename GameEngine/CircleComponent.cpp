<<<<<<< HEAD
#include "CircleComponent.h"

GE::CircleComponent::CircleComponent() : shape(200)
{
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(10, 10);
}

void GE::CircleComponent::Start()
{
}

void GE::CircleComponent::Update(float deltaTime)
{
}

void GE::CircleComponent::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shape, states);
=======
#include "CircleComponent.h"

GE::CircleComponent::CircleComponent() : shape(200)
{
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(10, 10);
}

void GE::CircleComponent::Start()
{
}

void GE::CircleComponent::Update(float deltaTime)
{
}

void GE::CircleComponent::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shape, states);
>>>>>>> ece8dfd8cb0370c2c1d5fb89e05a080a630b6b49
}