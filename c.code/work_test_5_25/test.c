#include<stdio.h>
#include<stdlib.h>


#if 0
int main()
{

	int n = 7;
	int i = 0;
	//偶数位打印
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	//奇数位打印
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");

	system("pause");
	return 0;
}
#elif 0
//这道题采用^和&来计算数组中两个不同的值。不采用嵌套循环！
int main()
{
	int arr[] = { 1,3,2,5,5,3,2,7,1,11988 };
	int i = 0;
	int x = 0, y = 0;
	int count = 1;
	int value = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)
	{
		value = value ^ arr[i];
	}
	printf("%d\n", value);

	for (i = 0; i < 32; i++)
	{
		if ((value >> i) & 1 == 1)
		{
			count = i;
			break;
		}
	}

	for (i = 0; i < len; i++)
	{
		if ((arr[i] >> count) & 1 == 1)
		{
			x = x ^ arr[i];
		}
		else
		{
			y = y ^ arr[i];
		}
	}
	printf("x = %d,y = %d\n", x, y);

	system("pause");
	return 0;
}  

#elif 0

#define p_int int*
typedef int *pint;

int main()
{
	//数组指针，指针数组
	int a = 10;
	int b = 20;
//	p_int pa = &a;//宏的定义是查找替换就相当于int * pa = &a;
	p_int pa, pb;
	pa = &a;
	pb = &b;//pb是int型，相当于是int *pa,pb; pa是int*,pb是int型
	*pa = 20;

	pint pc, pd;//pc和pd都是int*类型
	pc = &a;
	pd = &b;
	*pc = 20;
	*pd = 10;

	//其次就是void *类型的指针，这类的指针不可以解引用*
	system("pause");
	return 0;
}

#elif 1

int main()
{
	//int *pa = &a, 对指针解引用(*),就是解引用int 大小的
	int a = 0x11223344;//1010
	char *pstr = (char*)&a;
	printf("%d\n", a);
	*pstr = 0x99;
	printf("%d\n", a);
	system("pause");
	return 0;
}
#endif // 0

