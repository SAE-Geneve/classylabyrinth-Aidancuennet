#include <string>
#include "character.h"
#include "enemy.h"
#include "player.h"
#include <iostream>

Character::Character(
	int x,
	int y,
	int health_points,
	int attack,
	int defence)
	: x_(x),
	y_(y),
	health_points_(health_points),
	attack_(attack),
	defence_(defence) {
}
	
