#include "Player.h"
#include <Novice.h>

Player::Player(){

}

void Player::Initialize(){
	pos_ = { 640,300 };
	speed_ = 5;
}

void Player::Update(){

}

void Player::Draw(){
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, 30, 30, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight(){
	this->pos_.x += this->speed_;
}

void Player::MoveLeft(){
	this->pos_.x -= this->speed_;
}
