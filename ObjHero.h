#pragma once
#include "GameL\SceneManager.h"
using namespace GameL;

class CObjHero :public CObj
{
public:
	CObjHero() {};
	~CObjHero() {};
	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー
private:
};