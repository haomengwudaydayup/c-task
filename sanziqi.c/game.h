#ifndef GAME.H
#include<time.h>
//#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

#define ROW 4
#define COL 4


void InitBroad(char broad[ROW][COL], int, int);//����MAP
void Display_Borad(char broad[ROW][COL], int, int);//�������̺���
void ComputerMove(char broad[ROW][COL], int, int);//�����ƶ�
void PlayerMove(char broad[ROW][COL], int, int);//����ƶ�

char Is_win(char broad[ROW][COL], int, int);
int is_Fill(char broad[ROW][COL], int, int);
#endif // !GAME.H