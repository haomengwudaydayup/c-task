/*
	������ģ�鿪��
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"


void menu()
{
	printf("***********************\n");
	printf("******* 1��play *******\n");
	printf("******* 0��exit *******\n");
	printf("***********************\n");
}

void game()
{
	int ret = 0;
	char broad[ROW][COL] = { 0 };
	InitBroad(broad, ROW, COL);
	//	Display_Borad(broad, ROW, COL);//��ӡ����
	while (1)
	{
		printf("\n������>\n");
		ComputerMove(broad, ROW, COL);//�����ƶ�
		Display_Borad(broad, ROW, COL);
		ret = Is_win(broad, ROW, COL);
		if (ret != ' ')
			break;
		printf("\n�����>\n");
		PlayerMove(broad, ROW, COL);//����ƶ�
		Display_Borad(broad, ROW, COL);
		ret = Is_win(broad, ROW, COL);
		if (ret != ' ')
			break;
	}

	if (ret == 'X')
		printf("����Ӯ!\n");
	else if (ret == 'Y')
		printf("���Ӯ!\n");
	else if (ret == 'P')
		printf("ƽ�֣�\n");
	//	Display_Borad(broad, ROW, COL);//��ӡ����
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��������

	do
	{
		menu();//�˵�

		printf("������>");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:

			break;

		default:
			printf("�������룡\n");
			break;
		}


	} while (input != 0);

	system("pause");
	return 0;
}