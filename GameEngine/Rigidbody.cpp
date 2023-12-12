#include "Rigidbody.h"
#include "Application.h"

// Setters
void GE::Rigidbody::SetBodyType(b2BodyType type) {
    bodyDef.type = type;
}

void GE::Rigidbody::SetPosition(float x, float y) {
    bodyDef.position.Set(x, y);
}

void GE::Rigidbody::SetLinearVelocity(float vx, float vy) {
    body.SetLinearVelocity(b2Vec2(vx, vy));
}

void GE::Rigidbody::SetAngularVelocity(float angularVelocity) {
    body.SetAngularVelocity(angularVelocity);
}



// Getters
b2Vec2 GE::Rigidbody::GetPosition() const {
    return body.GetPosition();
}

float GE::Rigidbody::GetAngle() const {
    return body.GetAngle();
}

b2Vec2 GE::Rigidbody::GetLinearVelocity() const {
    return body.GetLinearVelocity();
}

float GE::Rigidbody::GetAngularVelocity() const {
    return body.GetAngularVelocity();
}

b2Body& GE::Rigidbody::GetBody() {
    return body;
}