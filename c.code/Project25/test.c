#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0

//我们来实现一个有趣的问题，采用递归实现打印整数1234的拆分
//递归这里有两个重要因素我要提出，一、是结束条件。二、是每次递归都会靠近结束条件
//并且每次递归都会创建函数都会开辟空间

void Print(int n)
{
	//我们采用递归来拆分
	if (n > 9)//拆分的不为个数的时候
	{
		//(1234)
		//(123)4
		//(12)3 4
		//(1) 2 3 4
		Print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 0;
	printf("请输入您想拆分的数字num>");
	scanf_s("%d", &num);
	Print(num);
	system("pause");
	return 0;
}

#elif 0
//我们来采用递归来实现统计字符串的个数统计

int Print(char* p)
{
	if (*p == '\0')
	{
		return 0;
	}
	return 1 + Print(p+1);
}

int main()
{
	char p[20];
	int i = 0;
	puts("请输如您想输入的字符串");
	scanf_s("%s", p, 20);
	i = Print(p);
	printf("%d\n", i);
	system("pause");
	return 0;
}

#elif 0

int flb(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return flb(n - 1) + flb(n - 2);
}

int main()
{
	//1 1 2 3 5 8 13 21 34 55 89
	int num = 0;
	int sum = 0;
	printf("请输入您想计算第几个斐波那契数列>");
	scanf_s("%d", &num);
	sum = flb(num);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
//但是我们发现这个不适合采用递归调用来解决，更适合采用循环的方法来实现

#elif 0
//这道题是经典题，汉诺塔问题！
int i = 1;
void move(int n, char one, char two, char three)
{
	if (n == 1)
	{
		printf("Step%2d \t %c -> %c\n", i++, one, three);
	}
	else
	{
		move(n-1, one, three, two);
		printf("Step%2d \t %c -> %c\n", i++, one, three);
		move(n-1, two, one, three);
	}
}

int main()
{
	char one = 'A', two = 'B', three = 'C';
	int num = 1;
	printf("请输入圆盘的个数num>");   
	scanf_s("%d", &num);
	move(num, one, two, three);
	system("pause");
	return 0;
}

#elif 1
//青蛙跳台阶问题

int D_jump_floor1(int n)
{
	if (1 == n)
		return 1;
	else if (2 == n)
		return 2;
	return D_jump_floor1(n - 1) + D_jump_floor1(n - 2);

}

int D_jump_floor2(int n)
{
	//这是1-3跳的情况
	if (1 == n)
		return 1;
	else if (2 == n)
		return 2;
	else if (3 == n)
		return 4;
	return D_jump_floor2(n - 1) + D_jump_floor2(n - 2) + D_jump_floor2(n - 3);
}

int main()
{
	//青蛙一次可以跳1-2个台阶，因此有一下规律
	//1 ：1，2 ：2，3 ： 3......由此发现这是斐波那契额数列，先列出来然后总结规律
	int num = 0;//台阶数
	int sum = 0;
	printf("请输入台阶数num>");
	scanf_s("%d", &num);
//	sum = D_jump_floor1(num);//1-2
	sum = D_jump_floor2(num);//1-3
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
#endif // 0

