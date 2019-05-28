#pragma once
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

#define ARROW_UP    0xE048
#define ARROW_DOWN  0xE050
#define ARROW_LEFT  0xE04B
#define ARROW_RIGHT 0xE04D

#define START_X(a) ((a.m_width)/2)
#define START_Y(a) ((a.m_hight)/2)
#define START_DIR ARROW_UP

enum {
	BLACK = 0,
	HEAD,
	STAR = -1,
};

class map
{
	int ** points;
	int m_hight;
	int m_width;

public:

	map(int hight, int width);
	~map();

	int mapArea();
	void printMap(int score);
	void setValue(int x, int y, int value);
	friend class snake;
};
