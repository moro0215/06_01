#pragma once

struct Vector2 {
	float x;
	float y;
};

class Player {
private:
	Vector2 pos_{};
	float speed_;

public:
	Player();
	//初期化
	void Initialize();
	//更新
	void Update();
	//描画
	void Draw();

	//メンバ関数
	//右移動
	void MoveRight();
	//左移動
	void MoveLeft();

};