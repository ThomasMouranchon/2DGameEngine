#pragma once

#include <SFML/Graphics.hpp>
//#include <AComponent.cpp>
#include "AComponent.h"

namespace GE {
	class Entity : public sf::Transformable, sf::Drawable
	{
	protected:
		std::string _id;
		std::string _name;

	public:
		//Entity(std::string name);
		std::vector<AComponent*> listComponent;
		void Awake();
		void Start();
		void Update();
		void FixedUpdate(float deltaTime);
		void LateUpdate(float deltaTime);
		void CreateComponent(std::string name);
		void AddComponent(AComponent* component);
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

		std::string GetID(std::string name);
		std::string GetName(std::string name);

		int id;
		char nom;
	};

}