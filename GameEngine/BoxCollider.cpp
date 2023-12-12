#include "BoxCollider.h"

void GE::BoxCollider::GetColliderShape(b2PolygonShape* polygonShape)
{
	//shape.SetAsBox(1, 1);
	SetSize();
}

void GE::BoxCollider::SetSize()
{
	shape.SetAsBox(sizeX, sizeY);
}
