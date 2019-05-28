#include<stdio.h>
#include<stdlib.h>

#if 0
//第一道题
void Print_table(int n)
{
	int i = 0, j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d * %2d = %2d", j, i, i*j);
			printf(" ");
		}
		printf("\n");
	}

}

int main()
{
	int num = 0;
	printf("请输入您想打印的乘法口诀表行数和列数num>");
	scanf_s("%d", &num);
	Print_table(num);
	system("pause");
	return 0;
}

#elif 0
//第二道题
void Swap(int* pa, int*pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10, b = 20;
	printf("未交换之前：a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf("交换之后：a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}

#elif 0
//第三道题
void Is_leap_year(int year)
{
	if ((0 == year % 4 && 0 != year % 100) || (0 == year % 400))
		printf("%d是闰年\n", year);
	else
	{
		printf("%d不是闰年\n", year);
	}
	
}

int main()
{
	int year = 0;
	printf("请输入您想判断的年份year>");
	scanf_s("%d", &year);
	Is_leap_year(year);
	system("pause");
	return 0;
}

#elif 0
//第四道题
//初始化数组
void Print(int* a, int lengh)
{
	int i = 0;
	for (i = 0; i < lengh; i++)
	{
		printf("%d ", a[i]);
	}
}
void Init(int* a, int lengh)
{
	int i = 0;
	int value = 0;
	printf("请输入您存放的值\n");
	for (i = 0; i < lengh; i++)
	{
		scanf_s("%d", a+i);
	}
	printf("初始化成功！\n");
	Print(a, lengh);
}
//清空数组
void empty(int* a, int lengh)
{
	//默认0为清空值
	int i = 0;
	for (i = 0; i < lengh; i++)
	{
		a[i] = 0;
	}
	printf("清空完毕!\n");
	Print(a, lengh);
}
//逆序
void reverse(int* a, int lengh)
{
	int* p = a;
	int* p_top = a;
	int* p_end = a + lengh - 1;
	for (p_top, p_end; p_top < p_end; p_top++, p_end--)
	{
		int tmp = 0;
		tmp = *p_top;
		*p_top = *p_end;
		*p_end = tmp;
	}
	Print(p, lengh);
}
void menu()
{
	printf("****** 1、初始化   *******\n");
	printf("****** 2、逆序输出  *******\n");
	printf("****** 3、清空数组  ******\n");
	printf("****** 4、退出     ******\n");
}

int main()
{
	int i = 1;
	int a[10];
	int choice = 0;
	int lengh = sizeof(a) / sizeof(a[0]);
	printf("tip: 一共只有3次输入机会哦，合理分配！\n");
	do
	{
	
		menu();
		printf("请选择>");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			//初始化数组
			Init(a, lengh);
			i++;
			break;
		case 2:
			//逆序输出
			reverse(a, lengh);
			i++;
			break;
		case 3:
			//清空
			empty(a, lengh);
			i++;
			break;
		default:
			//非正确输入处理
			printf("非法输入，请重新输入\n");
			break;
		}
		printf("\n");
		
		if (4 == i)
			choice = 4;

	} while (choice != 4);
	system("pause");
	return 0;
}

#elif 1
//第五道题
void Is_prime(int value)
{
	int i = 0;
	for (i = 2; i < value; i++)//i < sqrt(value)
	{
		if (value%i == 0)
		{
			printf("%不是素数\n",value);
			return;
		}
	}
	printf("%d是素数\n",value);
}
int main()
{
	int value = 0;
	printf("请输入你想判断的值value>");
	scanf_s("%d", &value);
	Is_prime(value);
	system("pause");
	return 0;
}
#endif // 0
