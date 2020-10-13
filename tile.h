#pragma once

#include <string>

enum class TileType : char
{
	BLOCK = '#',
	EMPTY = '.',
	ENEMY = 'E',
	PLAYER = 'P',
};

enum class CommandType
{
	QUIT,
	NORTH,
	SOUTH,
	EAST,
	WEST,
	ATTACK,
	HELP,
};

