#include "SceneManager.h"
#include "MainScene.h"

SceneManager::SceneManager()
	 {}

void SceneManager::SelectScene(SceneList state)
{
	Destroy();

	switch ( state )
	{
	case SceneList::Main:
		scene = CreateScene<MainScene&>::Create();
		break;
	case SceneList::Menu:
		break;
	case SceneList::Game:
		break;
	case SceneList::End:
		break;
	default:
		break;
	}
}
