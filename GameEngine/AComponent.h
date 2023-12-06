<<<<<<< HEAD
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
=======
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
>>>>>>> ece8dfd8cb0370c2c1d5fb89e05a080a630b6b49
}