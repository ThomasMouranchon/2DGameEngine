#include <Box2D/Box2D.h>
#include "AComponent.h"

namespace GE
{
    class Collider : public AComponent
    {
    protected:
        b2FixtureDef fixtureDef;
        b2Fixture* fixture;

    public:
        void CreateFixtureWithRigidbody(b2Body* rigidbody);
        virtual void GetColliderShape(b2PolygonShape* polygonShape);
        
        void SetDensity(float density);
        void SetFriction(float friction);
    };
}