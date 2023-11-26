#pragma once
#include "Entity.h"
#include "ResourceManager.h"

namespace GE {
	class Application
	{
	public :

        std::vector<Entity*> listEntity;
        sf::RenderWindow window;
        ResourceManager resourceManager;
        static GE::Application* instance;

        Application();
        //~Application();

        void Update();
        Entity* CreateEntity(std::string name);
        Entity* AddEntityToList(Entity*);

        Entity* GetParentEntity(AComponent*);

        static Application* GetInstance();

        void Init(int windowSizeX, int windowSizeY, std::string windowName);

	};
}