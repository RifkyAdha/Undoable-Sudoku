#include "Player.h"

Player::Player()
{
	username = " ";
	score = 0;
}

void Player::setUsername(std::string Username)
{
	this->username = Username;
}

std::string Player::getUsername()
{
	return username;
}

void Player::setScore(int Score)
{
	this->score = Score;
}

int Player::getScore()
{
	return score;
}
