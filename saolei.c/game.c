#include"game.h"

//ʵ���ļ�




void Init_broad(char arr_str[ROWS][COLS], int row, int col, char set)
{	
	int i = 0, j = 0;
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr_str[i][j] = set;//#�Ŵ������
		}
	}
	//memset(mine_broad, set, row*col * sizeof(mine_broad[0][0]));
}

void Print_broad(char arr_str[ROWS][COLS], int row, int col)
{
	//��ӡ��
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
	//���������
	int x = 0;
	int y = 0;
	int number = MINENUM;//�׵ĸ���

	//#-���� *-��
	//�ж��Ƿ�ռ��

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
	int x = 0, y = 0;//�����ֵ
	int unmine_num = UN_MINENUM;//���׵ļ�����

	while (unmine_num)//����ѭ��
	{
		
		printf("�������������������>");
		scanf_s("%d%d", &x, &y);

		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))//�ж�����ϲ�����
		{
			if (show_broad[x][y] == '*')
			{

				if (mine_broad[x][y] == '1' && unmine_num == UN_MINENUM)//��ֹ��һ�α�ը��
				{
					Judge_F_mine(mine_broad, x, y, row, col);
					unmine_num--;
				}


				if (mine_broad[x][y] == '1')//�ж��Ƿ���ը���ˣ�
				{
					printf("���ź����ȵ������ˣ�\n");
					//Print_broad(mine_broad, ROW, COL);
					break;
				}
				else
				{
					/*char number = Calculate_number(mine_broad, x, y);//�������е����
					show_broad[x][y] = number + '0';*/
					
					Clean_Mine(show_broad, mine_broad, x, y);
					unmine_num -= Computer_num(test, show_broad, row, col);
				
				}
				Print_broad(show_broad, ROW, COL);
			}
			else
			{
				printf("���걻ռ�ã����������룡\n");
			}
		}

		else
		{
			printf("����������������룡\n");
		}
		//Print_broad(show_broad, ROW, COL);//��ӡһ��
	}

	if (unmine_num == 0)
	{
		printf("��ϲ������ʿ��˳��ͨ�أ�\n");
	}
}

static int Calculate_number(char mine_broad[ROWS][COLS], int x, int y)
{
	return mine_broad[x - 1][y]  + mine_broad[x - 1][y - 1] \
		+ mine_broad[x][y - 1]  + mine_broad[x + 1][y - 1] \
		+ mine_broad[x + 1][y]  + mine_broad[x + 1][y + 1] \
		+ mine_broad[x][y + 1]  + mine_broad[x - 1][y + 1] \
		- 8 * '0' ;//���Ƕ����ַ���ӵģ�
	
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


void Clean_Mine(char show_broad[ROWS][COLS], char mine_broad[ROWS][COLS], int x, int y)
{
	
	if (mine_broad[x][y] == '0' && x >= 0 && y >= 0 && show_broad[x][y] == '*')//0
	{
		show_broad[x][y] = Calculate_number(mine_broad, x, y) + '0';//show_broad[x][y]�Ǵ洢�ַ��͵ģ��������ķ���ֵȴΪ����

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
					test[i][j] = 'a';//ֻ�д�����
				}
			
			}
		}
	}
	return count;
}
