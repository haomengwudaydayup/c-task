/*
	第五次C语言课后作业
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


////第1题
////游戏菜单
//void meun()
//{
//	printf("******************************\n");
//	printf("*********** 1、play **********\n");
//	printf("*********** 0、exit **********\n");
//	printf("******************************\n");
//}
//
////游戏核心玩法
//void game()
//{
//	//生成随机数
//	int ret = 1;
//	int input = 1;
//	
//	srand((unsigned int)time(NULL));//设置起点
//	ret = rand() % 10 + 1;//生成1到10的随机数
//
//	printf("游戏开始\n");
//	printf("请输入您的值> ");
//	scanf_s("%d", &input);
//
//	//游戏体系
//	while (1)
//	{
//		if (input < ret)
//		{
//			printf("猜小了\n");
//			printf("请重新猜\n");
//			scanf_s("%d", &input);
//		}
//		else if (input > ret)
//		{
//			printf("猜大了\n");
//			printf("请重新猜\n");
//			scanf_s("%d", &input);
//		}
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//完成猜数字游戏
//
//	int input;//用户输入的数字
//
//	//游戏按1开始，并且能够继续玩，按0退出程序
//	do
//	{
//		//打印一个菜单
//		meun();
//		
//		//游戏体系
//		printf("请选择> ");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//游戏玩法核心
//			game();//game()来构建游戏内容
//			break;
//		
//		case 0:
//			//退出游戏
//			printf("退出游戏\n");
//			break;
//		
//		default:
//			//选择错误，请重新选择
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);//当input==0时，游戏大循环退出！
//
//	system("pause");
//	return 0;
//}

////第2题
//int binary_sort(int array_int[], int lengh, int value)
//{
//	int left = 0;
//	int right = lengh - 1;
//	while (left <= right)
//	{
//		int temp = (right - left) / 2 + left;
//		if (array_int[temp] < value)
//		{
//			left = temp + 1;
//		}
//		else if(array_int[temp] > value)
//		{
//			right = temp - 1;
//		}
//		else
//		{
//			return temp;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int i = 0;
//	int lengh = 0;
//	int value = 0;
//	int index = 0;
//	int arr_int[10] = { 0 };
//	lengh = sizeof(arr_int) / sizeof(arr_int[0]);
//	printf("请存放10位有序数字\n");
//	//存放
//	for (i = 0; i < lengh; i++)
//	{
//		scanf_s("%d", arr_int + i);
//	}
//	//打印
//	for (i = 0; i < lengh; i++)
//	{
//		printf("%d ", *(arr_int + i));
//	}
//	printf("\n请输入您想查找的值value\n");
//	scanf_s("%d", &value);
//	
//	//调用二分查找函数,并返回值
//	index = binary_sort(arr_int, lengh, value);
//	if (index == -1)
//	{
//		printf("数组里面没有你想要的值\n");
//	}
//	else
//	{
//		printf("下标为%d，第%d位元素\n", index,index+1);
//	}
//	
//		system("pause");
//	return 0;
//}

////第3题
//int main()
//{
//	int i = 0;
//	char ch[20];//密码是hmw123456
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("password: ");
//		scanf_s("%s", ch, 20);
//		if (0 == strcmp(ch, "hmw123456"))
//		{
//			printf("登录成功!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

//第4题
int main()
{
	int c = 0;
	char ch = 'a';
	//getchar返回值为int型, 作为循环结束时为EOF文件结束符
	//getchar(ch)并没有改变字符ch的值,只是返回输入字符的ASCII值
	
	//c = getchar(ch);
	//printf("%d", c);
	//printf("%c", c);
	
	while ((c = getchar(ch)) != EOF)//输入字符串
	{

		if (c >= 'a' && c <= 'z')//就是小写字母
		{
			putchar(c - 32);
			printf("\n");
		}
		else if (c >= 65 && c <= 90)
		{
			printf("%c\n", c+32);
		}
	}
	system("pause");
	return 0;
}