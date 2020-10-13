#include "player.h"
#include "character.h"
#include <string>
#include <iostream>
Player::Player(int x, int y, int health_points, int attack, int defense , int max_health_points , int string, int experience, int health_regen):
Character(){
	void set_player(Player player);
	Player get_player();
}

void Player::set_player(){}

Player::~Player() = default;
