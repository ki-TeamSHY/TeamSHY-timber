#pragma once
#include "SpriteGameObject.h"
#include "ResourceManager.h"
#include "EffectLog.h"
#include <list>


using namespace std;

class Tree : public SpriteGameObject
{
private:
	Texture& texTree;
	Texture texLog;
	Sides side;
	int GameMode;
	int is1P2P;
	bool isChop;

	std::list<EffectLog*> unuseLogs;
	std::list<EffectLog*> useLogs;
public:
	Tree(Texture& texTree,int gamemode, int is1P2P);
	~Tree();

	virtual void Init() override;
	virtual void Release() override;
	virtual void Update(float dt) override;
	virtual void Draw(RenderWindow& window) override;
	virtual void SetFlipX(bool flip);

	void ShowLogEffect(Sides side);
};

