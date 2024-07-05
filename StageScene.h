#pragma once
#include "Player.h"
#include "InputHandler.h"
#include "ICommand.h"
#include "IScene.h"

//入力ハンドルとコマンドを結びつける
class StageScene :public IScene{
private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* icommand_ = nullptr;
	Player* player_;

public:
	StageScene();

	void Initialize()override;
	void Update()override;
	void Draw()override;
};