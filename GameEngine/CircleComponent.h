<<<<<<< HEAD
#pragma once
#include <SFML/Graphics.hpp>
#include "AComponent.h"

namespace GE
{
	class CircleComponent : public AComponent, public sf::Drawable
	{
	protected:
		sf::CircleShape shape;
		
	public:
		CircleComponent();

		// H�rit� via AComponent
		virtual void Update(float deltaTime) override;


		// H�rit� via Drawable
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;


		// H�rit� via AComponent
		virtual void Start() override;

	};

=======
#pragma once
#include <SFML/Graphics.hpp>
#include "AComponent.h"

namespace GE
{
	class CircleComponent : public AComponent, public sf::Drawable
	{
	protected:
		sf::CircleShape shape;
		
	public:
		CircleComponent();

		// H�rit� via AComponent
		virtual void Update(float deltaTime) override;


		// H�rit� via Drawable
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;


		// H�rit� via AComponent
		virtual void Start() override;

	};

>>>>>>> ece8dfd8cb0370c2c1d5fb89e05a080a630b6b49
}