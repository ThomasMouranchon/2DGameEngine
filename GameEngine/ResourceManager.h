#pragma once
#include <iostream>

#include "Application.h"
#include "AComponent.h"
#include "Entity.h"

namespace GE
{
	class ResourceManager
	{
	public:
		std::vector<sf::Texture*> listTexture;
		//TCHAR buffer[MAX_PATH];
		//std::string GetModuleFileName(NULL, buffer, sizeof(buffer));

		//sf::Texture* getTexture(sf::Texture* texture);
		void getTexture(std::string name);


	};
}