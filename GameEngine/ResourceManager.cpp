#include "ResourceManager.h"

//sf::Texture* GE::ResourceManager::getTexture(sf::Texture* texture)
void GE::ResourceManager::getTexture(std::string name)
{
	sf::Texture* texture = texture->loadFromFile(name);
	listTexture.push_back(texture);
	name: listTexture.size() - 1;
	return name;
}
