#include <iostream>
#include "tile.h"
#include "command.h"
#include "enemy.h"
#include "player.h"
#include "character.h"


void show_description(Enemy enemy)
{
	std::cout << "Enemy is nearby!\nHealth : " << enemy.health_points << "\nAttack : "
		<< enemy.attack << "\nDefense : " << enemy.defense << std::endl;
}
void show_help()
{
	std::cout << "Valid options:\n";
	std::cout << "\t[q]uit  -> quit the game.\n";
	std::cout << "\t[n]orth -> move north.\n";
	std::cout << "\t[s]outh -> move south.\n";
	std::cout << "\t[e]ast -> move east.\n";
	std::cout << "\t[w]est -> move west.\n";
	std::cout << "\t[a]ttack -> attack.\n";
	std::cout << "\t[h]elp -> get help.\n";
	// See the list of command in the tile.h.
}

void show_state()
{
	Player player = get_player();
	std::cout << "Maze :\n";
	for (int i = player.y - 4; i < player.y + 4; i++)
	{
		for (int j = player.x - 12; j < player.x + 12; j++)
		{
			std::cout << (char)get_tile_at_position(j, i);
		}
		std::cout << std::endl;
	}
	// You can either show the whole maze or just a portion of it.

	std::cout << "\nPlayer(" << player.x << ", " << player.y << ") :\n";

	// Now check if there is an enemy within range.
	// for each enemy within range:
	// show enemy description.

	if (TileType::ENEMY == get_tile_at_position(player.x, player.y + 1))
		show_description(get_enemy(player.x, player.y + 1));
	if (TileType::ENEMY == get_tile_at_position(player.x, player.y - 1))
		show_description(get_enemy(player.x, player.y - 1));
	if (TileType::ENEMY == get_tile_at_position(player.x + 1, player.y))
		show_description(get_enemy(player.x + 1, player.y));
	if (TileType::ENEMY == get_tile_at_position(player.x - 1, player.y))
		show_description(get_enemy(player.x - 1, player.y));


}

CommandType get_command()
{
	std::cout << "] ";
	std::string command_str;
	std::getline(std::cin, command_str);
	switch (command_str[0])
	{
	case 'q':
		return CommandType::QUIT;
	case 'n':
		return CommandType::NORTH;
	case 's':
		return CommandType::SOUTH;
	case 'e':
		return CommandType::EAST;
	case 'w':
		return CommandType::WEST;
	case 'a':
		return CommandType::ATTACK;
	case 'h':
	default:
		show_help();
		return CommandType::HELP;
	}
}

int main()
{
	std::cout << "Welcome in the Maze!\n";
	show_help();
	while (true)
	{
		show_state();
		CommandType command_type = get_command();
		switch (command_type)
		{
		case CommandType::QUIT:
			std::cout << "bye!\n";
			return 0;
		case CommandType::NORTH:
			north();
			tick();
			break;
		case CommandType::SOUTH:
			south();
			tick();
			break;
		case CommandType::EAST:
			east();
			tick();
			break;
		case CommandType::WEST:
			west();
			tick();
			break;
		case CommandType::ATTACK:
			attack();
			tick();
			break;
		case CommandType::HELP:
		default:
			tick();
			break;
		}
	}
	return 0;
}
