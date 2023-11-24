#pragma once
#include <SFML/Graphics.hpp>
#include "AComponent.h"

namespace GE
{
    class SpriteComponent : public AComponent, public sf::Drawable
    {
	protected:
		sf::Sprite sprite;
		sf::Texture texture;

	public:
		SpriteComponent();

		// Hérité via AComponent
		virtual void Update(float deltaTime) override;


		// Hérité via Drawable
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

    };

}