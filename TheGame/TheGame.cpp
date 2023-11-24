// TheGame.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include <yaml-cpp/yaml.h>
#include <filesystem>
#include <list>
#include <vector>

#include <SFML/Graphics.hpp>
#include <GameEngine/Application.h>
#include <GameEngine/CircleComponent.h>
#include <GameEngine/SpriteComponent.h>
#include <GameEngine/ResourceManager.h>

namespace fs = std::filesystem;

int main()
{
    GE::Application app;
   // sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
    app.Init(1920, 1080, "The Game");
    
    GE::ResourceManager resourceManager;
    for (const auto& entry : fs::directory_iterator("../Sprites"))
    {
        resourceManager.getTexture(entry.path().filename().string());
        //resourceManager.listTexture.push_back(entry.path().filename().string());
        //fs::directory_iterator("D:\\THOMAS\\Ynov\\C++\\2DGameEngine\\Sprites");
        //fs::directory_iterator("../2DGameEngine/Sprites");
        //resourceManager.getTexture();
    }
    /*sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(10, 500);
    sf::RectangleShape shape2(sf::Vector2f(120, 50));
    shape2.setFillColor(sf::Color::Red);*/

    GE::Entity* ent1 = app.CreateEntity("background");
    ent1->CreateComponent<GE::SpriteComponent>("test");// <GE::SpriteRenderer>("Background");
    ent1->setPosition(100, 100);
    //app.listEntity[0]->CreateAComponent<GE::SpriteRenderer>("Background");
    //shape2.transform;
    /*
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        /*window.draw(shape);
        window.draw(shape2);*/
        /*window.display();
    }*/
    app.Update();

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
