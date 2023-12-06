<<<<<<< HEAD
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
=======
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
>>>>>>> ece8dfd8cb0370c2c1d5fb89e05a080a630b6b49
}