#pragma once
#include <Player.h>
class Player;

//コマンドを呼び出す
class ICommand {
public:
	virtual ~ICommand();
	virtual void Exec(Player& player) = 0;
};
//右
class MoveRightCommand :public ICommand {
public:
	void Exec(Player& player)override;
};
//左
class MoveLeftCommand :public ICommand {
public:
	void Exec(Player& player)override;
};
