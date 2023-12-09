#pragma once
#include <SFML/Graphics.hpp>


namespace GE
{
	class Camera
	{
	public:
		sf::RenderWindow* appWindow;
		sf::View view;

		void Init(sf::RenderWindow* window);
		void Update(sf::RenderWindow* window);

	};
}