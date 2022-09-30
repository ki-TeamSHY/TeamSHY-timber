#pragma once

template<class T>
class CreateScene
{
public:
	CreateScene() {}
	virtual ~CreateScene(){}

	static T* Create()
	{
		T* p = new T;
		p->Init();
		return p;
	}
};

