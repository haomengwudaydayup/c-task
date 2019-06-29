#define _CRT_SECURE_NO_WARNINGS 1
#include"concate.h"

enum Option
{
	EXIT, add, search, del, show, clear, sort
};


void menu()
{
	printf("*****1. add*******2. searh*****\n");
	printf("*****3. del*******4. show******\n");
	printf("*****5. clear*****6. sort******\n");
	printf("***********0. exit*************\n");

}

void start()
{
	Contact *pCon = NULL;
	int input = 0;			//选项
	char *Seaname = 0;
	InitContact(pCon);
	//循环体
	do
	{

		menu();				//调用menu()
		printf("请输入选项>");
		scanf("%d", &input);

		switch (input)
		{
		case add:
			AddContact(pCon);
			break;

		case search:
			printf("请输入您想查找的姓名>");
			scanf("%s", Seaname);
			SearchContact(pCon, Seaname);
			break;

		default:
			break;
		}

	} while (input);

}

int main()
{

	start();
	system("pause");
	return 0;
}