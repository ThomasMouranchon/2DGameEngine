#include <iostream>

#include "Application.h"
#include "Entity.h"
#include <list>

GE::Application* GE::Application::instance;

GE::Application::Application()
{
	//listEntity entityList = new listEntity<>;
	//std::list<Entity> entityList;
	instance = this;

	CreateEntity("testEntity");
}

/*GE::Application::~Application()
{
}*/

void GE::Application::Loop(sf::Time t)
{

}

void GE::Application::Update()
{
	while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
		/*sf::CircleShape shape(100.f);
		shape.setFillColor(sf::Color::Green);
		shape.setPosition(10, 10);
		window.draw(shape);*/
		for (int i = 0; i < listEntity.size(); i++)
		{
			listEntity[i]->Update(1);
		}
		for (int i = 0; i < listEntity.size(); i++)
		{
			window.draw(*listEntity[i]);
		}
        /*window.draw(shape);
        window.draw(shape2);*/
        window.display();
    }
}

void GE::Application::Run()
{

}

void GE::Application::Init(int windowSizeX, int windowSizeY, std::string windowName)
{
	window.create(sf::VideoMode(windowSizeX, windowSizeY), windowName);
}

GE::Entity* GE::Application::CreateEntity(std::string name)
{
	Entity* entityName = new Entity();
	listEntity.push_back(entityName);
	return entityName;
}

GE::Entity* GE::Application::GetEntity(Entity* name)
{
	listEntity.push_back(name);
	return name;
}

GE::Application* GE::Application::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new Application();
	}
	return instance;
}