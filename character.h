#pragma once
#include <string>
#include "enemy.h"

class Character
{
public:
	Character(
		int x,
		int y,
		int health_points,
		int attack,
		int defence);
	Character();

protected:	
	int x_;
	int y_;
	int health_points_;
	int attack_;
	int defence_;
};
