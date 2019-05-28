#include<stdio.h>
#include<stdlib.h>

//这个函数可以简单完成这个功能
//test1
//这些都是补码运算

int Print_Num(unsigned int n)
{
	//基本采用的情况，但是不能进行运算负数，加上unsigned就可以
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}

//接下来采用递归的形式来表现
//test2
int Print_Num_1(unsigned int n)
{
	//采用递归的方式所作的情况
	static int count = 0;//添加一个静态全局变量
	if (n)
	{
	//	Print_Num_1(n / 2);//12 6 3 1
		if (n % 2 == 1)
			count++;//1100 -- 0 0 1 1
		Print_Num_1(n / 2);//12 6 3 1
	}
	return count;
}

//test3
int Print_Num_2(int n)
{
	//采用32次循环所做的情况
	int count = 0;//计数器
	int i = 32;
	while (i)
	{
		if (n & 1 == 1)
			count++;
		n = n >> 1;//n>>1不代表n移位了
		i--;
	}
	return count;
}

//test4
int Print_Num_3(int n)
{
	//这是不用32次循环所做的情况，可以计算符数
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//这样都会减掉一个1,直到没有1为止，
		count++;
	}
	return count;
}

int main()
{
	int a = -23;//00000000000000000000000001100
	int sum = 0;
//	sum = Print_Num(a);//test1
//	sum = Print_Num_1(a);//test2
//	sum = Print_Num_2(a);//test3
	sum = Print_Num_3(a);//test4
	printf("%d\n", sum);
	system("pause");
	return 0;
}