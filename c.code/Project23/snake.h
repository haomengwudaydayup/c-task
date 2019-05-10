#pragma once
#include "map.h"
#include <cstdlib>
#include <ctime>

struct pos
{
	int x;
	int y;
};

class snake
{
	pos head;
	void eatStar(map &maps);
public:
	int lenth;

	snake(map &maps);
	void mkStar(map &maps);
	bool move(map &maps, char offsetX, char offsetY);
};