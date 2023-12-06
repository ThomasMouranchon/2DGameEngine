<<<<<<< HEAD
#include <iostream>

#include "Entity.h"
#include "AComponent.h"
#include "CircleComponent.h"
#include "SpriteComponent.h"

void GE::Entity::Start()
{
	for (int i = 0; i < listComponent.size(); i++)
	{
		listComponent[i]->Start();
	}
}

void GE::Entity::Update(float deltaTime)
{
	for (int i = 0; i < listComponent.size(); i++)
	{
		listComponent[i]->Update(deltaTime);
	}
}

GE::AComponent* GE::Entity::AddComponentToList(AComponent* component)
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
=======
#include <iostream>

#include "Entity.h"
#include "AComponent.h"
#include "CircleComponent.h"
#include "SpriteComponent.h"

void GE::Entity::Start()
{
	for (int i = 0; i < listComponent.size(); i++)
	{
		listComponent[i]->Start();
	}
}

void GE::Entity::Update(float deltaTime)
{
	for (int i = 0; i < listComponent.size(); i++)
	{
		listComponent[i]->Update(deltaTime);
	}
}

GE::AComponent* GE::Entity::AddComponentToList(AComponent* component)
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
>>>>>>> ece8dfd8cb0370c2c1d5fb89e05a080a630b6b49
}