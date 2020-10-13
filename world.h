#pragma once
#include <string>


class World
{
public :
	char GetTile(int x, int y);
	
	
private:

	// Map of the local space.
	std::string world_ =
		"########################" // 24 * 8
		"#.....E......E.....#..P#" // P is at (22, 1)
		"#######..#####..####...#"
		"#........#.............#"
		"#.E......#...E...E.....#"
		"#..##################..#"
		"#.........E............#"
		"########################";

	
	
};
