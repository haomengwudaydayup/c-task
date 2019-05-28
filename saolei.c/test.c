#include"game.h"

//测试文件



void Tips()
{
	printf("\t    游戏玩法介绍\n");
	printf("一、按1游戏开始，0退出游戏！\n");
	printf("二、游戏需要输入坐标才可以扫雷！\n");
	printf("三、扫出所有雷后取得游戏胜利，碰到雷游戏结束！\n");
	printf("------------------------------------\n\n");
}

void menu()
{
	printf("************************\n");
	printf("******  1、play  *******\n");
	printf("******  0、exit  *******\n");
	printf("************************\n");
}

void game()
{
	
	char mine_broad[ROWS][COLS] = { '0' };//雷区的数组
	char show_broad[ROWS][COLS] = { '0' };//打印的数组
	char test[ROWS][COLS] = { '0' };

	//初始化
	Init_broad(mine_broad, ROWS, COLS, '0');
	Init_broad(show_broad, ROWS, COLS, '*');
	Init_broad(test, ROWS, COLS, 'M');//用来统计非雷个数--效率变低
	
	Print_broad(show_broad, ROW, COL);

	//存放雷
	Desposit_Mine(mine_broad, ROW, COL);
	//Print_broad(mine_broad, ROW, COL);//test1

	//排雷
	Mine_Clean(test, show_broad, mine_broad, ROW, COL);


	
}

void test()
{
	Tips();
	srand((unsigned int)time(NULL));//设置种子

	int input = 0;

	do
	{
		menu();//菜单
		printf("请选择>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			//游戏大循环体
			game();//游戏
			break;
		case 0:
			//退出
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}


	} while (input);


}


int main()
{
	test();//game()函数是函数运行的函数
	system("pause");
	return 0;
}