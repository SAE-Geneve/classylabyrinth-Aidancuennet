#pragma once
#include <string>
#include "character.h"


class Player: public Character {

	~Player();
	Player(int x, int y, int health_points, int max_health_points, int attack, int defense, int string, int experience, int health_regen);
	
public:

	int x = 22;
	int y = 1;
	int health_points = 100;
	int max_health_points = 100;
	int attack = 20;
	int defense = 5;
	std::string name = "The Hero";
	int experience = 0;
	int health_regen = 5;

	void set_player();
	Player get_player();

};