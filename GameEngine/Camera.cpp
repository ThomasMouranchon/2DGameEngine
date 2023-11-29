#include "Camera.h"

void GE::Camera::Init(sf::RenderWindow* window)
{
	appWindow = window;
	sf::View view = appWindow->getView();
	/*appWindow.setView(view);*/
	//appWindow.reset(sf::FloatRect(200, 200, 300, 200));
}
