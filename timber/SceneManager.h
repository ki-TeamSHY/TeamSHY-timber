#pragma once
#include <iostream>
#include "InputManager.h"
#include "Utils.h"
#include "SpriteGameObject.h"
#include "ResourceManager.h"
#include "Singleton.h"
#include "Scene.h"
#include "CreateScene.h"

using namespace std;
using namespace sf;

class SceneManager : public Singleton<SceneManager>
{
private:
	Scene* scene;
	VideoMode vm;
	RenderWindow window;
	Vector2u windowSize;
public:
	SceneManager();
	virtual ~SceneManager()
	{
		Destroy();
	}

	void SelectScene(SceneList state);

};

