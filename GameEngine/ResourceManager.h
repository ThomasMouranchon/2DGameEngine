<<<<<<< HEAD
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
=======
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
>>>>>>> ece8dfd8cb0370c2c1d5fb89e05a080a630b6b49
}