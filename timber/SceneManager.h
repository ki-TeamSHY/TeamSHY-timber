#pragma once
#include <iostream>
#include "InputManager.h"
#include "Utils.h"
#include "SpriteGameObject.h"
#include "ResourceManager.h"
#include "Singleton.h"

using namespace std;
using namespace sf;

enum class SceneList
{
	Main,
	Menu,
	Game,
	End,
};

class SceneManager : public Singleton<SceneManager>
{
private:
	SceneList sceneList;
public:
	SceneManager();
	virtual ~SceneManager()
	{
		Destroy();
	}

	void SelectScene(SceneList state);

};

