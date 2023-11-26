#include "ResourceManager.h"
#include <filesystem>
#include <yaml-cpp/yaml.h>
#include <windows.h>

//sf::Texture* GE::ResourceManager::getTexture(sf::Texture* texture)

GE::ResourceManager::ResourceManager()
{
	TCHAR buffer[MAX_PATH];
	GetModuleFileName(NULL, buffer, sizeof(buffer));

	std::string executablePath = std::filesystem::path(buffer).parent_path().string();

	YAML::Node file = YAML::LoadFile(executablePath + "\\config.yaml");

	YAML::Node config = file["config"];
	YAML::Node assets = config["assets"];
	
	for (YAML::Node asset : assets)
	{
		assetsMap[asset["id"].as<std::string>()] = executablePath + "\\" + asset["path"].as<std::string>();
	}

}

std::string GE::ResourceManager::GetPathByID(std::string id)
{
	return assetsMap[id];
}
