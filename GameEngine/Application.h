#pragma once
#include "Entity.h"

namespace GE {
	class Application
	{
	public :

        std::vector<Entity*> listEntity;
        sf::RenderWindow window;
        static GE::Application* instance;

        Application();
        //~Application();

        void Loop(sf::Time t);
        void Update();
        void Run();
        Entity* CreateEntity(std::string name);
        Entity* GetEntity(Entity*);

        static Application* GetInstance();

        void Init(int windowSizeX, int windowSizeY, std::string windowName);

	};
}