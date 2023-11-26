#pragma once
#include <SFML/Graphics.hpp>
#include <string>

namespace GE {
	class AComponent
	{
	public:
		virtual void Start() = 0;
		virtual void Update(float deltaTime) = 0;
	};
}