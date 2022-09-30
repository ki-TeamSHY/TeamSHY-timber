#pragma once
#include <iostream>
#include "InputManager.h"
#include "Utils.h"

using namespace std;
using namespace sf;

class SceneManager
{
private:
	int pos;

public:
	SceneManager();
	~SceneManager();
	void SelectGameMode();
};

