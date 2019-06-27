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
	printf("**        1、ADD      2、SEARCH      **\n");
	printf("**        3、DEL      4、SHOW        **\n");
	printf("**        5、CLEAR    6、MODIFY      **\n");
	printf("**        7、SORT                    **\n");
	printf("**		0、EXIT              **\n");
	printf("***************************************\n");
}

void start()
{
	Contact pCon;
	int input = 0;			//选项
	char *Seaname = 0;
	InitContact(&pCon);
	
	//循环体
	do
	{
		menu();				//调用menu()
		printf("请输入选项>");
		scanf("%d", &input);
		scanf("%*[^\n]");scanf("%*c");

		switch (input)
		{
		case ADD:		//添加
			printf("----------存入信息-ing---------\n");
			AddContact(&pCon);
	//		printf("----------------------------------\n");
			break;
			
		case SEARCH:		//查找
			printf("----------查找-ing---------\n");
			printf("请输入您想查找的姓名>");
			char Searname[20] = { 0 };
			scanf("%s", Searname);
			int  n = SearchContact(&pCon, Searname);
			if (n != -1)
			{
				printf("找到了，他是在第%d号位置\n", n + 1);
				Per_PrintContact(&pCon, n);
			}
			else
				printf("不存在该用户信息\n");
		//	printf("----------------------------------\n");
			break;
		
		case DEL:		//删除
			printf("<*执行删除操作!!*>\n");
			DelContact(&pCon);
			printf("删除成功！\n");
		//	printf("----------------------------------\n");
			break;
		
		case SHOW:		//表示
			ShowContact(&pCon);
	//		printf("----------------------------------\n");
			break;
		
		case CLEAR:		//清空
			Clearcontact(&pCon);
			printf("清空成功！\n");
		//	printf("----------------------------------\n");
			break;

		case MODIFY:
			Modify_Perinfo(&pCon);
	//		printf("----------------------------------\n");
			break;

		case SORT:		//排序
			Sort_Contact(&pCon);
		//	printf("----------------------------------\n");
			break;

		case EXIT:
			printf("退出！\n");
			break;

		default:		//错误输入处理
			printf("错误输入，请重新输入\n");
			scanf("%d", &input);
			scanf("%*[^\n]"); scanf("%*c");
			break;
		}
		if(input != 0)
		{
			printf("\n按任意键继续！\n");
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