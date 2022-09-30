#pragma once
#include "IBehavior.h"

enum class SceneList
{
	Main,
	Menu,
	Game,
	End,
};

class Scene : public IBehavior
{
public:
	Scene() {};
	virtual ~Scene() {};
};

