#pragma once
#include <SFML/Graphics.hpp>


namespace GE
{
	class Camera
	{
	public:
		sf::RenderWindow* appWindow;

		void Init(sf::RenderWindow* window);

	};
}