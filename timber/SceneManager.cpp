#include "SceneManager.h"


SceneManager::SceneManager()
    :scene(SceneEnum::Main), vm({ X, Y }), window({ vm, "Timber!!", Style::Default })
{
   
    SelectMenu = false;
    PlayGame = false;
    MTState = true;
}


void SceneManager::Init()
{
    SelectMenu = false;
    PlayGame = false;
    MTState = true;
}

void SceneManager::SelectScene(SceneEnum state)
{
    Font font;
    font.loadFromFile("fonts/KOMIKAP_.ttf");

    Text messageText;
    messageText.setFont(font);
    messageText.setCharacterSize(75);
    messageText.setFillColor(Color::White);
    messageText.setString("Press Enter to start!");

    windowSize = window.getSize();
    auto resourceMgr = ResourceManager::GetInstance();
    gameObjectList.push_back(new SpriteGameObject(*resourceMgr->GetTexture("graphics/background.png")));
    dt = clock.restart();

	switch ( state )
	{
	case SceneEnum::Main:
        
        
		break;
	case SceneEnum::Menu:
		break;
	case SceneEnum::Game:
		break;
	case SceneEnum::End:
		break;
	default:
		break;
	}
}

bool SceneManager::GetTitleStatus()
{
    return MTState;
}
