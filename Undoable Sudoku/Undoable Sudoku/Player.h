#pragma once
#include <iostream>
using namespace std;
class Player
{
protected:
	string username;
	int score;
	
public :
	Player();
	void setUsername(string);
	string getUsername();
	void setScore(int);
	int getScore();

};

