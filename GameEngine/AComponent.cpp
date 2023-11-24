#include "pch.h"
#include "AComponent.h"

GE::AComponent::AComponent()
{
}

/*void GE::AComponent::Awake()
{
}

void GE::AComponent::Start()
{
}*/

/*void GE::AComponent::Update(sf::RenderTarget& target)
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(10, 10);
	target.draw(shape);
}*/

void GE::AComponent::FixedUpdate()
{
}

/*void GE::AComponent::LateUpdate()
{
}*/

float GE::AComponent::OnCollisionEnter()
{
	return 0.0f;
}
