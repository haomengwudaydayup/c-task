#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

enum Option
{
	EXIT,  ADD,  SEARCH,  DEL,  SHOW,  CLEAR, MODIFY, SORT,
};


void menu()
{
	printf("***************************************\n");
	printf("**               MENU                **\n");
	printf("**        1��ADD      2��SEARCH      **\n");
	printf("**        3��DEL      4��SHOW        **\n");
	printf("**        5��CLEAR    6��MODIFY      **\n");
	printf("**        7��SORT                    **\n");
	printf("**		0��EXIT              **\n");
	printf("***************************************\n");
}

void start()
{
	Contact pCon;
	int input = 0;			//ѡ��
	char *Seaname = 0;
	InitContact(&pCon);
	
	//ѭ����
	do
	{
		menu();				//����menu()
		printf("������ѡ��>");
		scanf("%d", &input);
		scanf("%*[^\n]");scanf("%*c");

		switch (input)
		{
		case ADD:		//���
			printf("----------������Ϣ-ing---------\n");
			AddContact(&pCon);
	//		printf("----------------------------------\n");
			break;
			
		case SEARCH:		//����
			printf("----------����-ing---------\n");
			printf("������������ҵ�����>");
			char Searname[20] = { 0 };
			scanf("%s", Searname);
			int  n = SearchContact(&pCon, Searname);
			if (n != -1)
			{
				printf("�ҵ��ˣ������ڵ�%d��λ��\n", n + 1);
				Per_PrintContact(&pCon, n);
			}
			else
				printf("�����ڸ��û���Ϣ\n");
		//	printf("----------------------------------\n");
			break;
		
		case DEL:		//ɾ��
			printf("<*ִ��ɾ������!!*>\n");
			DelContact(&pCon);
			printf("ɾ���ɹ���\n");
		//	printf("----------------------------------\n");
			break;
		
		case SHOW:		//��ʾ
			ShowContact(&pCon);
	//		printf("----------------------------------\n");
			break;
		
		case CLEAR:		//���
			Clearcontact(&pCon);
			printf("��ճɹ���\n");
		//	printf("----------------------------------\n");
			break;

		case MODIFY:
			Modify_Perinfo(&pCon);
	//		printf("----------------------------------\n");
			break;

		case SORT:		//����
			Sort_Contact(&pCon);
		//	printf("----------------------------------\n");
			break;

		case EXIT:
			printf("�˳���\n");
			break;

		default:		//�������봦��
			printf("�������룬����������\n");
			scanf("%d", &input);
			scanf("%*[^\n]"); scanf("%*c");
			break;
		}
		if(input != 0)
		{
			printf("\n�������������\n");
			getch();
			system("cls");
		}
	} while (input);

}

int main()
{
	start();
	system("pause");
	return 0;
}