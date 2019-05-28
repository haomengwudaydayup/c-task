#include "print.h"
#include <windows.h>
#include <cstring>
#include <cstdio>

void print_start()
{
	char * p = new char[512];
	memset(p, 0, 512);
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　贪  吃  蛇　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　◆Game Start　　　　　■\n");
	strcat_s(p, 512, "■　　　　　 Game Set 　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　 Exit 　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "　　　方向键选择　回车键确认\n");
	strcat_s(p, 512, "　　　　　　开始游戏\n");
	system("cls");
	puts(p);
	delete[] p;
}

void print_set()
{
	char * p = new char[512];
	memset(p, 0, 512);
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　贪  吃  蛇　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　Game Start　　　　　■\n");
	strcat_s(p, 512, "■　　　　◆ Game Set 　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　 Exit 　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "　　　方向键选择　回车键确认\n");
	strcat_s(p, 512, "　　　　　设置地图大小\n");
	system("cls");
	puts(p);
	delete[] p;
}

void print_exit()
{
	char * p = new char[512];
	memset(p, 0, 512);
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　贪  吃  蛇　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　Game Start　　　　　■\n");
	strcat_s(p, 512, "■　　　　　 Game Set 　　　　　■\n");
	strcat_s(p, 512, "■　　　　◆　 Exit 　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "　　　方向键选择　回车键确认\n");
	strcat_s(p, 512, "　　　　　　退出游戏\n");
	system("cls");
	puts(p);
	delete[] p;
}

void print_setnumW(int &x, int &y)
{
	char * p = new char[512];
	memset(p, 0, 512);
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　宽　度　　　高　度　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　%2d　　　　　%2d　　　　■\n");
	strcat_s(p, 512, "■　　　　▲　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "　　　方向键选择　回车键确认\n");
	strcat_s(p, 512, "　　　　设置宽度（范围4-30）\n");
	system("cls");
	printf(p, x, y);
	delete[] p;
}

void print_setnumH(int &x, int &y)
{
	char * p = new char[512];
	memset(p, 0, 512);
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　宽　度　　　高　度　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　%2d　　　　　%2d　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　▲　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "　　　方向键选择　回车键确认\n");
	strcat_s(p, 512, "　　　　设置高度（范围4-30）\n");
	system("cls");
	printf(p, x, y);
	delete[] p;
}

void print_pause(int score)
{
	char * p = new char[512];
	memset(p, 0, 512);
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　暂　　　停　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　目前得分：　%3d 　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "　　　　　按P键继续游戏\n");
	system("cls");
	printf(p, score);
	delete[] p;
}

void print_win(int score)
{
	char * p = new char[512];
	memset(p, 0, 512);
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　恭　　　喜　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■ 您的蛇已经占据地图上全部的点 ■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　 得分：　%3d　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "　　　　 按回车键继续游戏\n");
	system("cls");
	printf(p, score);
	delete[] p;
}

void print_over(int score)
{
	char * p = new char[512];
	memset(p, 0, 512);
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　GAME　OVER　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　 得分：　%3d  　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■　　　　　　　　　　　　　　　■\n");
	strcat_s(p, 512, "■■■■■■■■■■■■■■■■■\n");
	strcat_s(p, 512, "　　　　 按回车键继续游戏\n");
	system("cls");
	printf(p, score);
	delete[] p;
}