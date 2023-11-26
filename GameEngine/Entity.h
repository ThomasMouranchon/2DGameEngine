#pragma once

#include <SFML/Graphics.hpp>
#include "AComponent.h"

namespace GE {
	class Entity : public sf::Transformable, public sf::Drawable
	{
	public:
		std::vector<AComponent*> listComponent;
		void Start();
		void Update(float deltaTime);

		template<typename T>
		T* CreateComponent()
		{
			T* componentName = new T();
			listComponent.push_back(componentName);
			return componentName;
		}

		AComponent* AddComponentToList(AComponent* component);
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	};

}