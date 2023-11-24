#include <iostream>

#include "Entity.h"
#include "AComponent.h"
#include "CircleComponent.h"
#include "SpriteComponent.h"

void GE::Entity::Awake()
{

}

void GE::Entity::Start()
{

}

void GE::Entity::Update(float deltaTime)
{
	for (int i = 0; i < listComponent.size(); i++)
	{
		listComponent[i]->Update(deltaTime);
	}
}

void GE::Entity::FixedUpdate(float deltaTime)
{
	/*for (int i = 0; i < listComponent.size(); i++)
	{
		listComponent[i]->Update();
	}*/
}

void GE::Entity::LateUpdate(float deltaTime)
{
	/*for (int i = 0; i < listComponent.size(); i++)
	{
		listComponent[i]->Update();
	}*/
}


GE::AComponent* GE::Entity::GetComponent(AComponent* component)
{
	listComponent.push_back(component);
	return component;
}

void GE::Entity::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	states.transform.combine(getTransform());
	for (int i = 0; i < listComponent.size(); i++)
	{
		sf::Drawable* drawable = dynamic_cast<sf::Drawable*>(listComponent[i]);
		if (drawable != nullptr) {
			target.draw(*drawable, states);
		}
	}
}

std::string GetID(std::string name)
{
	return name;
}

std::string GetName(std::string name)
{
	return name;
}