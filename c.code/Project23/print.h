#pragma once
#define PAGE_NUM 3
#define SET_NUM 2
enum
{
	START = 0,
	SET,
	EXIT,
};

void print_start();
void print_set();
void print_exit();
void print_setnumW(int &x, int &y);
void print_setnumH(int &x, int &y);
void print_pause(int score);
void print_win(int score);
void print_over(int score);
