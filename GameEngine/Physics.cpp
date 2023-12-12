#include "Physics.h"

GE::Physics::Physics(): gravity(gravity), world(gravity)
{
	gravity = b2Vec2(0.0f, -9.8f);
	world.SetAllowSleeping(true);
}

void GE::Physics::Update()
{
	world.Step(timeStep, velocityIterations, positionIterations);
}
