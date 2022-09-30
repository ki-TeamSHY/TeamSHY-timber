#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <list>
#include "InputManager.h"
#include "Utils.h"
#include "SpriteGameObject.h"
#include "ResourceManager.h"


#define X 1920
#define Y 1080

using namespace std;
using namespace sf;

enum class SceneEnum
{
	Main,
	Menu,
	Game,
	End,
};

class SceneManager 
{
private:
	list<SpriteGameObject*> gameObjectList;
	SceneEnum scene;
	VideoMode vm;
	RenderWindow window;
	Vector2u windowSize;
	Time dt;// = clock.restart();
	Event ev;
	Clock clock;
	bool SelectMenu;
	bool PlayGame;
	bool MTState;
public:
	SceneManager();

	virtual ~SceneManager()	{}

	void Init();

	bool GetTitleStatus();

	void SelectScene(SceneEnum state);

};

