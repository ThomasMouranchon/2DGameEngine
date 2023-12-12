#pragma once
#include "Collider.h"

namespace GE
{
    class BoxCollider : public Collider
    {
    protected:
        b2PolygonShape shape;
        float sizeX;
        float sizeY;

    public:
        virtual void GetColliderShape(b2PolygonShape* polygonShape) override;
        void SetSize();
    };
}