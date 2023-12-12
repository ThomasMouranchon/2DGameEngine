#include <Box2D/Box2D.h>
#include "AComponent.h"

namespace GE
{
    class Rigidbody : public AComponent
    {
    protected:
        b2BodyDef bodyDef;
        b2Body body;

    public:
        // Setters
        void SetBodyType(b2BodyType type);
        void SetPosition(float x, float y);
        void SetLinearVelocity(float vx, float vy);
        void SetAngularVelocity(float angularVelocity);

        // Getters
        b2Vec2 GetPosition() const;
        float GetAngle() const;
        b2Vec2 GetLinearVelocity() const;
        float GetAngularVelocity() const;
        b2Body& GetBody();
    };
}