#pragma once
//使用するヘッダー
#include "GameL\SceneManager.h"

using namespace GameL;

class CSceneMain :public CSceneMain
{
public:
	CSceneMain();
	~CSceneMain();
	void InitScene();//ゲームメインの初期化メソッド
	void Scene();//ゲームメインの実行中メソッド
private:
};