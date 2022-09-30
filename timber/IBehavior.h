#pragma once
#include "SFML/Graphics.hpp"
#include "Utils.h"

class IBehavior
{
public:
	~IBehavior() {};
	
	virtual void Init() = 0;
	virtual void Release() = 0;
	virtual void Update(float dt) = 0;
	virtual void Draw(RenderWindow& window) = 0;
};

