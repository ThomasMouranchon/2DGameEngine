#include "SpriteComponent.h"
#include "Application.h"

GE::SpriteComponent::SpriteComponent()
{
	//texture.loadFromFile("D:\\THOMAS\\Ynov\\C++\\2DGameEngine\\Sprites\\Tower.png");
	//sprite.setTexture(texture);
	//sprite.setColor(sf::Color::Green);
	//sprite.setPosition(300, 10);
}

void GE::SpriteComponent::Start()
{
}

void GE::SpriteComponent::Update(float deltaTime)
{
}

void GE::SpriteComponent::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(sprite, states);
}

void GE::SpriteComponent::loadSprite(std::string path)
{
	texture.loadFromFile(path);
	sprite.setTexture(texture);
}

void GE::SpriteComponent::loadSpriteByAssetId(std::string id)
{
	GE::Application* app = GE::Application::GetInstance();
	loadSprite(app->resourceManager.GetPathByID(id));
}

