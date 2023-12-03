#include "Camera.h"

void GE::Camera::Init(sf::RenderWindow* window)
{
	//appWindow = window;
	view = window->getView();
	view.reset(sf::FloatRect(100, 100, 1920, 1080));
	//view.setRotation(20.f);
	window->setView(view);
}

void GE::Camera::Update(sf::RenderWindow* window)
{
	/*view = window->getView();
	window->setView(view);*/
}
