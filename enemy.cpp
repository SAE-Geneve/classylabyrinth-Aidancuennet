#include "enemy.h"
#include "character.h"
#include <string>
#include <iostream>

Enemy::Enemy(int x, int y, int health_points = 50, int attack = 10, int defense = 2, std::string name = "Gob"):
	Character(){}
Enemy::Enemy()
{
}
 Enemy::~Enemy(){}

void Enemy::set_enemy(Enemy enemy, int x, int y){}
void Enemy::erase_enemy(Enemy enemy, int x, int y){}
Enemy Enemy::get_enemy(int x, int y)
{
	return Enemy();
}
Enemy get_enemy(int x, int y) {};