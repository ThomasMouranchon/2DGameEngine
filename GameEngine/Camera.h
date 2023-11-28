#pragma once
#include <SFML/Graphics.hpp>


namespace GE
{
	class Camera
	{
	public:
		sf::View view;
		view.reset(sf::FloatRect(200,200,200,200));

	};
}