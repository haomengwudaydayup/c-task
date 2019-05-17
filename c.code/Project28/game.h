#ifndef GAME.H
#include<time.h>

#define ROW 3
#define COL 3


void InitBroad(char broad[ROW][COL], int, int);//声明MAP
void Display_Borad(char broad[ROW][COL], int, int);//声明棋盘函数
void ComputerMove(char broad[ROW][COL], int, int);//电脑移动
void PlayerMove(char broad[ROW][COL], int, int);//玩家移动

char Is_win(char broad[ROW][COL], int, int);
int is_Fill(char broad[ROW][COL], int, int);
#endif // !GAME.H
