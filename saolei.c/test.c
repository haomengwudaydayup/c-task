#include"game.h"

//�����ļ�



void Tips()
{
	printf("\t    ��Ϸ�淨����\n");
	printf("һ����1��Ϸ��ʼ��0�˳���Ϸ��\n");
	printf("������Ϸ��Ҫ��������ſ���ɨ�ף�\n");
	printf("����ɨ�������׺�ȡ����Ϸʤ������������Ϸ������\n");
	printf("------------------------------------\n\n");
}

void menu()
{
	printf("************************\n");
	printf("******  1��play  *******\n");
	printf("******  0��exit  *******\n");
	printf("************************\n");
}

void game()
{
	
	char mine_broad[ROWS][COLS] = { '0' };//����������
	char show_broad[ROWS][COLS] = { '0' };//��ӡ������
	char test[ROWS][COLS] = { '0' };

	//��ʼ��
	Init_broad(mine_broad, ROWS, COLS, '0');
	Init_broad(show_broad, ROWS, COLS, '*');
	Init_broad(test, ROWS, COLS, 'M');//����ͳ�Ʒ��׸���--Ч�ʱ��
	
	Print_broad(show_broad, ROW, COL);

	//�����
	Desposit_Mine(mine_broad, ROW, COL);
	//Print_broad(mine_broad, ROW, COL);//test1

	//����
	Mine_Clean(test, show_broad, mine_broad, ROW, COL);


	
}

void test()
{
	Tips();
	srand((unsigned int)time(NULL));//��������

	int input = 0;

	do
	{
		menu();//�˵�
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			//��Ϸ��ѭ����
			game();//��Ϸ
			break;
		case 0:
			//�˳�
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}


	} while (input);


}


int main()
{
	test();//game()�����Ǻ������еĺ���
	system("pause");
	return 0;
}