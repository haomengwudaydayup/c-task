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

void Init_broad(char arr_str[ROWS][COLS], int row, int col, char set);//��ʼ������
void Print_broad(char arr_str[ROWS][COLS], int row, int col);//��ӡ����


void Desposit_Mine(char mine_broad[ROWS][COLS], int row, int col);//�����
void Mine_Clean(char test[ROWS][COLS], char show_broad[ROWS][COLS], char mine_broad[ROWS][COLS], int row, int col);//������
static int Calculate_number(char show_broad[ROWS][COLS], int x, int y);//���㺯��
void Judge_F_mine(char mine_broad[ROWS][COLS], int x, int y, int row, int col);//�жϵ�һ���Ƿ�Ϊ��
void Clean_Mine(char show_broad[ROWS][COLS], char mine_broad[ROWS][COLS], int x, int y);//һ��Ƭ����
int Computer_num(char test[ROWS][COLS], char show_broad[ROWS][COLS], int row, int col);//ͳ��ÿ����ʾ�ĸ���

#endif // !GAME.H
