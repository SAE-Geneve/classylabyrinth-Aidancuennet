#pragma once
#include <string>
#include "character.h"

class Enemy: public Character {
public:
	~Enemy();
	Enemy(int x, int y, int health_points, int attack, int defense, std::string name);
	Enemy();

	void set_enemy(Enemy enemy, int x, int y);
	void erase_enemy(Enemy enemy, int x, int y);
	Enemy get_enemy(int x, int y);

	std::string name;
	int y;
	int health_points;
	int attack;
	int defense;
};
