#include"game.h"

//实现文件




void Init_broad(char arr_str[ROWS][COLS], int row, int col, char set)
{	
	int i = 0, j = 0;
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr_str[i][j] = set;//#号代表非雷
		}
	}
	//memset(mine_broad, set, row*col * sizeof(mine_broad[0][0]));
}

void Print_broad(char arr_str[ROWS][COLS], int row, int col)
{
	//打印表
	system("cls");
	int i = 0, j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr_str[i][j]);
		}
		printf("\n");
	}
}

void Desposit_Mine(char mine_broad[ROWS][COLS], int row, int col)
{
	//生成随机数
	int x = 0;
	int y = 0;
	int number = MINENUM;//雷的个数

	//#-非雷 *-雷
	//判断是否被占用

	while (number)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine_broad[x][y] == '0')
		{
			mine_broad[x][y] = '1';
			number--;
		}
	}
	
}

void Mine_Clean(char test[ROWS][COLS], char show_broad[ROWS][COLS], char mine_broad[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;//输入的值
	int unmine_num = UN_MINENUM;//非雷的计数器

	while (unmine_num)//查找循环
	{


		printf("请输入您想输入的坐标>");
		scanf_s("%d%d", &x, &y);

		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))//判断输入合不合适
		{
			if (show_broad[x][y] == '*')
			{

				if (mine_broad[x][y] == '1' && unmine_num == UN_MINENUM)//防止第一次被炸死
				{

					Judge_F_mine(mine_broad, x, y, row, col);
					unmine_num--;
					//	Print_broad(mine_broad, ROW, COL);//test1
				}


				if (mine_broad[x][y] == '1')//判断是否被雷炸死了！
				{
					printf("很遗憾，踩到地雷了！\n");
					//Print_broad(mine_broad, ROW, COL);
					break;
				}
				else
				{
					/*char number = Calculate_number(mine_broad, x, y);//正常运行的情况
					show_broad[x][y] = number + '0';*/

					Clean_Mine(show_broad, mine_broad, x, y);
					//printf("\nunmine_num = %d\n", count);
					unmine_num -= Computer_num(test, show_broad, row, col);
					printf("\numine_num = %d\n", unmine_num);
				}
				Print_broad(show_broad, ROW, COL);
			}
			else
			{
				printf("坐标被占用，请重新输入！\n");
			}
		}

		else
		{
			printf("坐标错误，请重新输入！\n");
		}
		//Print_broad(show_broad, ROW, COL);//打印一下

	}

	if (unmine_num == 0)
	{
		printf("恭喜您，勇士，顺利通关！\n");
	}
}

static int Calculate_number(char mine_broad[ROWS][COLS], int x, int y)
{
	return mine_broad[x - 1][y]  + mine_broad[x - 1][y - 1] \
		+ mine_broad[x][y - 1]  + mine_broad[x + 1][y - 1] \
		+ mine_broad[x + 1][y]  + mine_broad[x + 1][y + 1] \
		+ mine_broad[x][y + 1]  + mine_broad[x - 1][y + 1] \
		- 8 * '0' ;//但是都是字符相加的，
	
}

void Judge_F_mine(char mine_broad[ROWS][COLS], int x, int y, int row, int col)
{
	if (mine_broad[x][y] == '1')
	{
		mine_broad[x][y] = '0';
		int a = 0, b = 0;

		while (1)
		{
			a = rand() % row + 1;
			b = rand() % col + 1;

			if (mine_broad[a][b] == '0' && a != x)
			{
				mine_broad[a][b] = '1';
				break;
			}
		}
	}
	return;
}



//void Clean_Mine(char show_broad[ROWS][COLS], char mine_broad[ROWS][COLS], int x, int y, int* p)    //扩展函数
//{
//
//	int i = -1;
//	int j = -1;
//	for (i = -1; i < 2; i++)      //边界
//	{
//		for (j = -1; j < 2; j++)
//		{
//			if (i != 0 || j != 0)      // 避免排到自己注意此处的逻辑关系
//			{
//				if (x + i >= 1 && x + i <= ROWS && y + j >= 1 && y + j <= COLS)     //x y坐标是否合法
//				{
//					if (show_broad[x + i][y + j] == '*' && mine_broad[x + i][y + j] != '1')
//					{
//
//						int count = Calculate_number(mine_broad, x + i, y + j);//
//						if (count != 0)
//						{
//							show_broad[x + i][y + j] = count + '0';
//							(*p)++;
//						}
//						else
//						{
//							show_broad[x + i][y + j] = '0';
//							(*p)++;
//							Clean_Mine(show_broad, mine_broad, x + i, y + j, p);
//						}
//
//					}
//
//				}
//			}
//		}
//	}
//}

void Clean_Mine(char show_broad[ROWS][COLS], char mine_broad[ROWS][COLS], int x, int y)
{
	
	if (mine_broad[x][y] == '0' && x >= 0 && y >= 0 && show_broad[x][y] == '*')//0
	{
		show_broad[x][y] = Calculate_number(mine_broad, x, y) + '0';//show_broad[x][y]是存储字符型的，而函数的返回值却为整数

	}

	if (mine_broad[x - 1][y] == '0' && x >= 0 && y >= 0 && show_broad[x - 1][y] == '*')//1
	{
		show_broad[x - 1][y] = Calculate_number(mine_broad, x - 1, y) + '0';

		if (Calculate_number(mine_broad, x - 1, y) == 0)
		{
			Clean_Mine(show_broad, mine_broad, x - 1, y);
		}
	}

	if (mine_broad[x - 1][y - 1] == '0' && x >= 0 && y >= 0 && show_broad[x - 1][y - 1] == '*')//2
	{
		show_broad[x - 1][y - 1] = Calculate_number(mine_broad, x - 1, y - 1) + '0';

		if (Calculate_number(mine_broad, x - 1, y - 1) == 0)
		{
			Clean_Mine(show_broad, mine_broad, x - 1, y - 1);
		}
	}

	if (mine_broad[x][y - 1] == '0' && x >= 0 && y >= 0 && show_broad[x][y - 1] == '*')//3
	{
		show_broad[x][y - 1] = Calculate_number(mine_broad, x, y - 1) + '0';

		if (Calculate_number(mine_broad, x, y - 1) == 0)
		{
			Clean_Mine(show_broad, mine_broad, x, y - 1);
		}
	}

	if (mine_broad[x + 1][y - 1] == '0' && x >= 0 && y >= 0 && show_broad[x + 1][y - 1] == '*')//4
	{
		show_broad[x + 1][y - 1] = Calculate_number(mine_broad, x + 1, y - 1) + '0';

		if (Calculate_number(mine_broad, x + 1, y - 1) == 0)
		{
			Clean_Mine(show_broad, mine_broad, x + 1, y - 1);
		}
	}

	if (mine_broad[x + 1][y] == '0' && x >= 0 && y >= 0 && show_broad[x + 1][y] == '*')//5
	{
		show_broad[x + 1][y] = Calculate_number(mine_broad, x + 1, y) + '0';

		if (Calculate_number(mine_broad, x + 1, y) == 0)
		{
			Clean_Mine(show_broad, mine_broad, x + 1, y);
		}
	}

	if (mine_broad[x + 1][y + 1] == '0' && x >= 0 && y >= 0 && show_broad[x + 1][y + 1] == '*')//6
	{
		show_broad[x + 1][y + 1] = Calculate_number(mine_broad, x + 1, y + 1) + '0';
	
		if (Calculate_number(mine_broad, x + 1, y + 1) == 0)
		{
			Clean_Mine(show_broad, mine_broad, x + 1, y + 1);
		}
	}

	if (mine_broad[x][y + 1] == '0' && x >= 0 && y >= 0 && show_broad[x][y + 1] == '*')//7
	{
		show_broad[x][y + 1] = Calculate_number(mine_broad, x, y + 1) + '0';
	
		if (Calculate_number(mine_broad, x, y + 1) == 0)
		{
			Clean_Mine(show_broad, mine_broad, x, y + 1);
		}
	}

	if (mine_broad[x - 1][y + 1] == '0' && x >= 0 && y >= 0 && show_broad[x - 1][y + 1] == '*')//8
	{
		show_broad[x - 1][y + 1] = Calculate_number(mine_broad, x - 1, y + 1) + '0';

		if (Calculate_number(mine_broad, x - 1, y + 1) == 0)
		{
			Clean_Mine(show_broad, mine_broad, x - 1, y + 1);
		}
	}
}

int Computer_num(char test[ROWS][COLS], char show_broad[ROWS][COLS], int row, int col)
{
	int count = 0;
	int i = 1, j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show_broad[i][j] != '*')
			{
				if (test[i][j] != 'a')
				{
					count++;
					test[i][j] = 'a';//只有代表雷
				}
			
			}
		}
	}
	return count;
}

//int Computer_num( const char show_broad[ROWS][COLS], int row, int col)
//{
//	int count = 0;
//	int i = 0, j = 0;
//	for (i = 1; i < row; i++)
//	{
//		for (j = 1; j < col; j++)
//		{
//			if (show_broad[i][j] != '*')
//				count++;
//		}
//	}
//	return count;
//}
