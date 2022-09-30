#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <list>
#include "Utils.h"
#include "InputManager.h"
#include "SpriteGameObject.h"
#include "ResourceManager.h"

#define X 1920
#define Y 1080

int main()
{
    VideoMode vm(X, Y);
    RenderWindow window(vm, "Timber!!", Style::Default);
    Vector2u windowSize = window.getSize();

    //
    auto resourceMgr = ResourceManager::GetInstance();
    list<SpriteGameObject*> gameObjectList;
    gameObjectList.push_back(new SpriteGameObject(*resourceMgr->GetTexture("graphics/background.png")));
    //

    //Font
    Font font;
    font.loadFromFile("fonts/KOMIKAP_.ttf");

    Text messageText;
    messageText.setFont(font);
    messageText.setCharacterSize(75);
    messageText.setFillColor(Color::White);
    messageText.setString("Press Enter to start!");
    //
    Text menuText;
    menuText.setFont(font);
    menuText.setCharacterSize(75);
    menuText.setFillColor(Color::White);
    menuText.setString("Menu");
    //

    Clock clock;
    bool SelectMenu = false;
    bool PlayGame = false;
    bool Title = true;

    while ( window.isOpen() )
    {
        /*Time dt = clock.restart();
        Event ev;*/

        //Title Scene
        while ( Title )
        {
            cout << "title" << endl;
            Time dt = clock.restart();
            Event ev;

            InputManager::ClearInput();
            while ( window.pollEvent(ev) )
            {
                InputManager::UpdateInput(ev);
            }
            //mainTitle()
            //cout << "Title" << endl;
            if ( Keyboard::isKeyPressed(Keyboard::Escape) )
            {
                window.close();
                break;
            }
            if ( Keyboard::isKeyPressed(Keyboard::Return) )
            {

                SelectMenu = true;
                Title = false;
                break;
            }
            float deltaTime = dt.asSeconds();

            //Update
            for ( auto go  : gameObjectList )
            {

                go->Update(deltaTime);
            }

            //Draw
            window.clear();
            for ( auto go : gameObjectList )
            {
                go->Draw(window);
            }
            window.draw(messageText);
            window.display();
        }


        //Menu Scene
        while ( SelectMenu )
        {
            cout << "menu" << endl;
            Time dt = clock.restart();
            Event ev;
            InputManager::ClearInput();
            while ( window.pollEvent(ev) )
            {
                InputManager::UpdateInput(ev);

            }

            if ( Keyboard::isKeyPressed(Keyboard::Escape) )
            {
                SelectMenu = false;
                Title = true;
            }
            //Menu()
            /*if ( Keyboard::isKeyPressed(Keyboard::Return) )
            {
                
            }*/
            
            float deltaTime = dt.asSeconds();

            //Update
            for ( auto go : gameObjectList )
            {

                go->Update(deltaTime);
            }

            //Draw
            window.clear();
            for ( auto go : gameObjectList )
            {
                go->Draw(window);
            }
            window.draw(menuText);
            window.display();
        }
        //Game Scene
        //while ( PlayGame )
        //{
        //    if ( Keyboard::isKeyPressed(Keyboard::Escape) )
        //    {
        //        PlayGame = false;
        //        break;
        //    }
        //    if ( Keyboard::isKeyPressed(Keyboard::Return) )
        //    {
        //        cout << "Game: " << TestSelection << endl;
        //    }
        //    PlayGame = false;
        //    //Game()
        //}       
    }
    for ( auto go : gameObjectList )
    {
        go->Release();
        delete go;
    }
    gameObjectList.clear();
    return 0;
}