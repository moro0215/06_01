#pragma once
#include <ICommand.h>

//入力をまとめる
class InputHandler {
public:
	ICommand* HandleInput();

	//左方向
	void AssignMoveLeftCommand2PressKeyA();
	//右方向
	void AssignMoveRightCommand2PressKeyD();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;

};
