#pragma once
#include <SFML/Graphics.hpp>


namespace GE
{
	class Camera
	{
	public:
		sf::RenderWindow* window;
		sf::View view = window.getView();
		window.setView(view);
	};
}