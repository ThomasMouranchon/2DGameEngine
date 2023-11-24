#pragma once

#include <SFML/Graphics.hpp>
//#include <AComponent.cpp>
#include "AComponent.h"

namespace GE {
	class Entity : public sf::Transformable, public sf::Drawable
	{
	protected:
		std::string _id;
		std::string _name;

	public:
		//Entity(std::string name);
		std::vector<AComponent*> listComponent;
		void Awake();
		void Start();
		void Update(float deltaTime);
		void FixedUpdate(float deltaTime);
		void LateUpdate(float deltaTime);

		template<typename T>
		T* CreateComponent(std::string name)
		{
			T* componentName = new T();
			listComponent.push_back(componentName);
			return componentName;
		}

		AComponent* GetComponent(AComponent* component);
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

		/*template<typename T> T* CreateAComponent(std::string n)
		{
			T* comp = new T(n);
			listComponent.push_back(comp);
			return comp;
		}*/

		std::string GetID(std::string name);
		std::string GetName(std::string name);

		int id;
		char nom;
	};

}