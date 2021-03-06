#include <map>
#include "Player.h"
#include "enemy.h"
#include "tile.h"


// An anonymous namespace just here so you cannot access there from somewhere
// else.
namespace {

	// Map of the local space.
	std::string local_world =
		"########################" // 24 * 8
		"#.....E......E.....#..P#" // P is at (22, 1)
		"#######..#####..####...#"
		"#........#.............#"
		"#.E......#...E...E.....#"
		"#..##################..#"
		"#.........E............#"
		"########################";

	// Local player stuff.
	