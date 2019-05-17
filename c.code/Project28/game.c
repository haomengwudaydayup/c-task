#include"game.h"
#include<string.h>
#include<stdio.h>




void InitBroad(char broad[ROW][COL], int row, int col)
{
	memset(&broad[0], ' ', row * col * sizeof(broad[0][0]));
}

void Display_Borad(char broad[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < row; i++)
	{

		
		for (j = 0; j < col; j++)
		{
			printf(" %c ",broad[i][j]);
			if(j < col - 1)
			printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
	}
}

void ComputerMove(char broad[ROW][COL], int row, int col)
{
	int ret1 = rand() % ROW;
	int ret2 = rand() % COL;
	while (1)
	{
		if (broad[ret1][ret2] == ' ')
		{
			broad[ret1][ret2] = 'X';
			break;
		}
	}
}

void PlayerMove(char broad[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	while (1)
	{
		printf("ÇëÊäÈë×ø±ê>");
		scanf_s("%d%d", &i, &j);
		if ((i >= 1 && i <= ROW) && (j >= 1 && j <= COL))
		{
			if (broad[i - 1][j - 1] == ' ')
			{
				broad[i - 1][j - 1] = 'Y';//A´ú±íÍæ¼ÒÊäÈë
				break;
			}
		}
		else
		{
			printf("´íÎóÊäÈë£¡\n");
		}
	
	}
}

char Is_win(char broad[ROW][COL], int row, int col)
{
	/*int i = 0, j = 0;*/
	////ÅÐ¶ÏÍæ¼ÒÓ®
	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		if (broad[i][j] != 'A')
	//			break;
	//		if (j == COL-1)
	//			return 'Y';
	//	}

	//	for (j = 0; j < col; j++)
	//	{

	//		if (broad[j][i] != 'A')
	//			break;
	//		if (j == ROW-1)
	//			return 'Y';
	//	}
	//	
	//}
	////ÅÐ¶ÏµçÄÔÓ®
	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		if (broad[i][j] != 'Z')
	//			break;
	//		if (j == COL-1)
	//			return 'X';
	//	}

	//	for (j = 0; j < col; j++)
	//	{
	//		if (broad[j][i] != 'Z')
	//			break;
	//		if (j == ROW-1)
	//			return 'X';
	//	}

	//}
	////ÅÐ¶ÏÆ½¾Ö
	//for (i = 0; i < ROW; i++)
	//{
	//	for (j = 0; j < COL; j++)
	//	{
	//		if (broad[i][j] == ' ')
	//			return 0;
	//	}
	//}
	//if (i == ROW-1 && j == COL-1)
	//	return 'P';
	//return ' ';
	int i = 0, j = 0;

	for (i = 0; i < ROW; i++)
	{
		if (broad[i][0] == broad[i][1] && broad[i][1] == broad[i][2] && broad[i][0] != ' ')
			return broad[i][0];
		if (broad[0][i] == broad[1][i] && broad[1][i] == broad[2][i] && broad[0][i] != ' ')
			return broad[0][i];
	}
	if (broad[0][0] == broad[1][1] && broad[1][1] == broad[2][2] && broad[i][0] != ' ')
		return broad[0][0];
	if (broad[0][2] == broad[1][1] && broad[1][1] == broad[2][0] && broad[i][0] != ' ')
		return broad[1][1];
	if (is_Fill(broad, ROW, COL) == 1)
	{
		return 'P';
	}
	return ' ';
}

int is_Fill(char broad[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (broad[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}