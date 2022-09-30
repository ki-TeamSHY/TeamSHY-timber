#pragma once
#include <iostream>
#include "InputManager.h"
#include "Utils.h"
#include "SpriteGameObject.h"
#include "ResourceManager.h"
#include "Singleton.h"

class Scene
{
public:
	virtual void Update(float dt);
	virtual void Draw(RenderWindow& window);
};

