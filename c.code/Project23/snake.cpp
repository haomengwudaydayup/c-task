#include "snake.h"

snake::snake(map &maps)
{
	head.y = START_Y(maps);
	head.x = START_X(maps);
	maps.points[head.y][head.x] = 1;
	maps.points[head.y][head.x + 1] = 2;
	lenth = 2;
}

void snake::mkStar(map &maps)
{
	srand((unsigned)time(NULL));
	int maxnum = maps.m_hight * maps.m_width;
	int rand_num = rand() % maxnum;
	while (lenth < maxnum)
	{
		if (BLACK == maps.points[rand_num / maps.m_width][rand_num % maps.m_width])
		{
			maps.points[rand_num / maps.m_width][rand_num % maps.m_width] = STAR;
			return;
		}
		else
		{
			rand_num++;
			if (rand_num >= maxnum)
			{
				rand_num = 0;
			}
		}
	}
}

void snake::eatStar(map &maps)
{
	for (int i = 0; i < maps.m_hight; i++)
	{
		for (int j = 0; j < maps.m_width; j++)
		{
			if (STAR == maps.points[i][j])
			{
				maps.points[i][j] = HEAD;
				head.x = j;
				head.y = i;
			}
			else if (0 != maps.points[i][j])
			{
				maps.points[i][j]++;
			}
		}
	}
	lenth++;
}

bool snake::move(map &maps, char offsetX, char offsetY)
{
	head.y += offsetY;
	head.x += offsetX;

	if (head.y >= maps.m_hight || head.y < 0 ||
		head.x >= maps.m_width || head.x < 0 ||
		(maps.points[head.y][head.x] != BLACK &&
			maps.points[head.y][head.x] != STAR &&
			maps.points[head.y][head.x] != lenth))
	{
		return true;
	}

	if (maps.points[head.y][head.x] == STAR)
	{
		eatStar(maps);
		mkStar(maps);
		return false;
	}

	for (int i = 0; i < maps.m_hight; i++)
	{
		for (int j = 0; j < maps.m_width; j++)
		{
			if (lenth == maps.points[i][j])
			{
				maps.points[i][j] = BLACK;
			}
			else if (BLACK != maps.points[i][j] && STAR != maps.points[i][j])
			{
				maps.points[i][j]++;
			}
		}
	}

	maps.points[head.y][head.x] = HEAD;
	return false;
}

