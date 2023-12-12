#pragma once
#include "Box2D/Box2D.h"

namespace GE
{
	class Physics
	{
	protected:

		b2Vec2 gravity;
		b2World world;

	public:

		float timeStep = 1.0f/60.0f;
		int32 velocityIterations = 8;
		int32 positionIterations = 3;

		Physics();
		void Update();
		static const float WorldScale;
	};

}