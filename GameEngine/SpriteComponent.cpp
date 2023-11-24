#include "SpriteComponent.h"

GE::SpriteComponent::SpriteComponent()
{
	texture.loadFromFile("D:\\THOMAS\\Ynov\\C++\\2DGameEngine\\Sprites\\Tower.png");
	sprite.setTexture(texture);
	//sprite.setColor(sf::Color::Green);
	//sprite.setPosition(300, 10);
}

void GE::SpriteComponent::Update(float deltaTime)
{
}

void GE::SpriteComponent::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(sprite, states);
}
