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
		printf("请输入坐标>");
		scanf_s("%d%d", &i, &j);
		if ((i >= 1 && i <= ROW) && (j >= 1 && j <= COL))
		{
			if (broad[i - 1][j - 1] == ' ')
			{
				broad[i - 1][j - 1] = 'Y';//A代表玩家输入
				break;
			}
		}
		else
		{
			printf("错误输入！\n");
		}
	
	}
}

char Is_win(char broad[ROW][COL], int row, int col)
{
	/*int i = 0, j = 0;*/
	////判断玩家赢
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
	////判断电脑赢
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
	////判断平局
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
#if 0

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

#elif 1
	int i = 0, j = 0;
	int count1 = 0;
	int count2 = 0;
	//这是判断行列赢得情况
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{

			if(broad[i][j] == ' ')//如果是空的话，跳出
				break;
			if (broad[i][j] == 'X')
				count1++;
			if (broad[i][j] == 'Y')
				count2++;
			if (count1 == col)
				return 'X';
			if (count2 == col)
				return 'Y';
		}
	}
	//这是判断数列赢得情况
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{
			if (broad[j][i] == ' ')//如果是空的话，跳出
				break;
			if (broad[j][i] == 'X')
				count1++;
			if (broad[j][i] == 'Y')
				count2++;
			if (count1 == col+col)
				return 'X';
			if (count2 == col+col)
				return 'Y';
		}
	}
	//这是对角线形式赢得情况
	for (i = 0; i < row; i++)
	{
		if (broad[i][i] == ' ')//如果是空的话，跳出
			break;
		if (broad[i][i] == 'X')
			count1++;
		if (broad[i][i] == 'Y')
			count2++;
		if (count1 == col + col+ col)
			return 'X';
		if (count2 == col + col +col)
			return 'Y';
	}

	//这是对角线形式赢得情况
	for (i = 0; i < row; i++)
	{
		if (broad[i][col -1 -i] == ' ')//如果是空的话，跳出
			break;
		if (broad[i][col -1 -i] == 'X')
			count1++;
		if (broad[i][col -1 -i] == 'Y')
			count2++;
		if (count1 == col + col + col +col)
			return 'X';
		if (count2 == col + col + col +col)
			return 'Y';
	}



	//这是判断平局得情况
	if (is_Fill(broad, ROW, COL) == 1)
	{
		return 'P';
	}
	//这是继续的情况
	return ' ';


#endif //0
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