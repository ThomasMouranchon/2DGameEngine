#include "Collider.h"

void GE::Collider::CreateFixtureWithRigidbody(b2Body* rigidbody)
{
    b2PolygonShape shape;
    GetColliderShape(&shape);

    fixtureDef.shape = &shape;
    fixture = rigidbody->CreateFixture(&fixtureDef);
}

void GE::Collider::GetColliderShape(b2PolygonShape* polygonShape)
{

}

void GE::Collider::SetDensity(float density)
{
    fixtureDef.density = density;
    fixture->SetDensity(density);
}

void GE::Collider::SetFriction(float friction)
{
    fixtureDef.friction = friction;
    fixture->SetFriction(friction);
}