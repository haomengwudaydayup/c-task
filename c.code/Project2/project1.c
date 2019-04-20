#include<stdio.h>
#include<stdlib.h>
int main()
{
	//打印100-200的所有素数
	int i,j,k;
	printf("打印100-200的所有素数如下:\n");
	for (i=100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)//判断i是否被j整除
			break;
		}
		if (i == j)
		{
			printf("%d\t", i);
		}
			
	}
	//打印乘法口诀表
	printf("\n\n");
	printf("打印乘法口诀表:\n");
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%2d*%2d = %2d  ", j, i, i*j);
		printf("\n");
	}
	//判断1000年--2000年之间的闰年
	printf("\n1000年--2000年之间的闰年如下:\n");
	for ( k = 1000; k <= 2000; k++)
	{
		if ((0 == k % 4 && 0 != k % 100) || 0 == k % 400)
			printf("%d\t", k);
	}
	printf("\n");
	system("pause");
	return 0;
}