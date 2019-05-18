/*
	三子棋模块开发
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"


void menu()
{
	printf("***********************\n");
	printf("******* 1、play *******\n");
	printf("******* 0、exit *******\n");
	printf("***********************\n");
}

void game()
{
	int ret = 0;
	char broad[ROW][COL] = { 0 };
	InitBroad(broad, ROW, COL);
	//	Display_Borad(broad, ROW, COL);//打印棋盘
	while (1)
	{
		printf("\n电脑走>\n");
		ComputerMove(broad, ROW, COL);//电脑移动
		Display_Borad(broad, ROW, COL);
		ret = Is_win(broad, ROW, COL);
		if (ret != ' ')
			break;
		printf("\n玩家走>\n");
		PlayerMove(broad, ROW, COL);//玩家移动
		Display_Borad(broad, ROW, COL);
		ret = Is_win(broad, ROW, COL);
		if (ret != ' ')
			break;
	}

	if (ret == 'X')
		printf("电脑赢!\n");
	else if (ret == 'Y')
		printf("玩家赢!\n");
	else if (ret == 'P')
		printf("平局！\n");
	//	Display_Borad(broad, ROW, COL);//打印棋盘
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置种子

	do
	{
		menu();//菜单

		printf("请输入>");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:

			break;

		default:
			printf("错误输入！\n");
			break;
		}


	} while (input != 0);

	system("pause");
	return 0;
}