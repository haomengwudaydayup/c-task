#ifndef GAME.H

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



#define ROWS ROW+2
#define COLS COL+2
#define ROW 9
#define COL 9

#define MINENUM 15
#define UN_MINENUM (ROW*COL - MINENUM)

void Init_broad(char arr_str[ROWS][COLS], int row, int col, char set);//初始化函数
void Print_broad(char arr_str[ROWS][COLS], int row, int col);//打印函数


void Desposit_Mine(char mine_broad[ROWS][COLS], int row, int col);//存放雷
void Mine_Clean(char test[ROWS][COLS], char show_broad[ROWS][COLS], char mine_broad[ROWS][COLS], int row, int col);//清理雷
static int Calculate_number(char show_broad[ROWS][COLS], int x, int y);//计算函数
void Judge_F_mine(char mine_broad[ROWS][COLS], int x, int y, int row, int col);//判断第一次是否为雷
void Clean_Mine(char show_broad[ROWS][COLS], char mine_broad[ROWS][COLS], int x, int y);//一大片清雷
int Computer_num(char test[ROWS][COLS], char show_broad[ROWS][COLS], int row, int col);//统计每次显示的个数

#endif // !GAME.H
