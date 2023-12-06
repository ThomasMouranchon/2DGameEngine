<<<<<<< HEAD
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
		virtual void Start() override;

		// Hérité via AComponent
		virtual void Update(float deltaTime) override;

		// Hérité via Drawable
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

		virtual void loadSprite(std::string path);

		virtual void loadSpriteByAssetId(std::string id);
	};

=======
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
		virtual void Start() override;

		// Hérité via AComponent
		virtual void Update(float deltaTime) override;

		// Hérité via Drawable
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

		virtual void loadSprite(std::string path);

		virtual void loadSpriteByAssetId(std::string id);
	};

>>>>>>> ece8dfd8cb0370c2c1d5fb89e05a080a630b6b49
}