#include "Entity.h"
#include "AComponent.h"

void GE::Entity::Awake()
{

}

void GE::Entity::Start()
{

}

void GE::Entity::Update()
{
	for (int i = 0; i < listComponent.size(); i++)
	{
		listComponent[i]->Update();
	}
}

void GE::Entity::FixedUpdate(float deltaTime)
{

}

void GE::Entity::LateUpdate(float deltaTime)
{

}

void GE::Entity::CreateComponent(std::string name)
{
	/*AComponent* componentName = new AComponent();
	listComponent.push_back(componentName);
	return componentName;*/
}

void GE::Entity::AddComponent(AComponent* component)
{
	listComponent.push_back(component);
}

void GE::Entity::draw(sf::RenderTarget& target, sf::RenderStates states)const
{

}

std::string GetID(std::string name)
{
	return name;
}

std::string GetName(std::string name)
{
	return name;
}