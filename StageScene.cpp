#include "StageScene.h"

StageScene::StageScene(){

}

//キーにコマンドを割り当てる
void StageScene::Initialize(){
	inputHandler_ = new InputHandler();

	//Assign command
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	//New Player
	player_ = new Player();
	player_->Initialize();
}

//コマンドの実行
void StageScene::Update(){
	//get Input
	icommand_ = inputHandler_->HandleInput();

	//set command
	if (this->icommand_) {
		icommand_->Exec(*player_);
	}

	player_->Update();
}

void StageScene::Draw(){
	player_->Draw();
}
