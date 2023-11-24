#pragma once
#include <SFML/Graphics.hpp>
#include <string>

namespace GE {
	class AComponent
	{
	protected:
		std::string _id;
	public:
		AComponent();

		//virtual void Awake() = 0;
		//virtual void Start() = 0;
		virtual void Update(float deltaTime) = 0;
		//virtual void Update(sf::RenderTarget& target);
		virtual void FixedUpdate();
		//virtual void LateUpdate(float deltaTime) = 0;
		virtual float OnCollisionEnter();

		//bool isVisible = true;

		//std::string;
	};
}