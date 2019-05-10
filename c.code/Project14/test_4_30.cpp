/*
	test_4_30.c 第五次练习
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

//void menu(void)
//{
//	//打印游戏目录
//	printf("*******************************\n");
//	printf("*********** 1、play ***********\n");
//	printf("*********** 0、exit ***********\n");
//	printf("*******************************\n");
//}
//
//void games(void)
//{
//	//游戏玩法核心
//	/*
//		1、设置随机数
//		2、用户输入一个数，来猜，猜对了退出循环，猜错了提示
//	*/
//	
//	//用户输入的值
//	int choice = 1;
//	int ret = 1;
//	
//	srand((unsigned int)time(NULL));//设置起点，让随机数的随机
//	ret = rand() % 10 + 1;//生成了这个随机数
//
//	printf("请输入你的值>");
//	
//	
//	//游戏循环体
//	while (1)
//	{
//		scanf_s("%d", &choice);
//		if (choice < ret)
//		{
//			printf("猜小了!\n");
//			printf("请重新输入>");
//		}
//		else if (choice > ret)
//		{
//			printf("猜大了!\n");
//			printf("请重新输入>");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	
//	}
//}
//
//int main()
//{
//	int input = 1;
//	//首先构建一个循环，里面有一个菜单，1、是猜数字，0、退出游戏
//	do
//	{
//		//打印一个菜单
//		menu();
//		printf("按1开始游戏，按0结束游戏>");
//		scanf_s("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			//玩游戏，猜数字
//			games();
//			break;
//		case 0:
//			//游戏结束，退出
//			printf("游戏退出！\n");
//			break;
//		default:
//			//非正确选择，请重新选择
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);//input == 0 ，退出循环
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//写一个关机系统
//	char ch[20] = { 0 };//定义一个字符串数组，存放字符串
//	printf("请输入我是猪，否则电脑将在一分钟后关机！\n");
//	system("shutdown -s -t 60");
//	scanf_s("%s", ch,sizeof(ch));
//	while (1)
//	{
//		if (strcmp(ch, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("小猪猪^_^，你好呀！！\n");
//			break;
//		}
//		else
//		{
//			printf("请输入我是猪，否则电脑将在一分钟后关机！\n");
//			scanf_s("%s", ch, sizeof(ch));
//		}
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	//做一个能计算所有0-99999的所有水仙花数，
	//在IT中，考虑事情要齐全，要长远考虑
	int i = 0;
	for (i = 0; i < 10000000; i++)//一千万零一次循环
	{
		int count = 1;
		int temp = i;
		int sum = 0;
		//1、先计算位数-N
		
		while(temp /= 10)//temp=0时退出
		{
			count++;
		}

		temp = i;//temp再赋值
		
		//2、计算每个位数的N次方和
		while (temp)
		{
			sum += pow(temp % 10, count);
			temp = temp / 10;
		}
		if (i == sum)
		{
			printf("%d ", sum);
		}
	}
	system("pause");
	return 0;
}