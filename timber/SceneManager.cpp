#include "SceneManager.h"

SceneManager::SceneManager()
    :pos(0)
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::SelectGameMode()
{
    Font font;
    font.loadFromFile("fonts/KOMIKAP_.ttf");
    Text menu;
    menu.setFont(font);
    menu.setCharacterSize(75);
    menu.setFillColor(Color::White);
    menu.setString("Press Enter to start!");
    Utils::SetOrigin(menu, Origins::MC);
    menu.setPosition(1920 * 0.5f, 1080 * 0.5f);

    Text selectPos;
    if ( Keyboard::isKeyPressed(Keyboard::Up) )
    {

    }
    if ( Keyboard::isKeyPressed(Keyboard::Down) )
    {
       
    }
    if ( Keyboard::isKeyPressed(Keyboard::Return) )
    {

    }
}
