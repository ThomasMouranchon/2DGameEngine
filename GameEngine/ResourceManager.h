#pragma once
#include <map>
#include <string>

namespace GE
{
	class ResourceManager
	{
	public:
		ResourceManager();

		std::map < std::string, std::string > assetsMap;
		
		std::string GetPathByID(std::string);
		
		//TCHAR buffer[MAX_PATH];
		//std::string GetModuleFileName(NULL, buffer, sizeof(buffer));


	};
}