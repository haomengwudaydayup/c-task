#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#if 1
//1.调整数组使奇数全部都位于偶数前面。

void Bubble_sort(int *a, int len)
{
	int i = 0, j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			int tmp = 0;
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

void Apart(int *a, int *b, int len)
{
	int i = 0, j = 0;
	Bubble_sort(a, len);//排序
	
	for (i = 0; i < len; i++)
	{
		if ((a[i] % 2) == 1)
		{
			b[j] = a[i];
			j = j + 1;
		}
	}

	for (i = 0; i < len; i++)
	{
		if ((a[i] % 2) == 0)
		{
			b[j] = a[i];
			j = j + 1;
		}
	}


}

int main()
{
	int i = 0;
	int a[10] = { 1,2,7,45,85,65,12,65,11,10 };
	int b[10] = { 0 };
	Apart(a, b, sizeof(a) / sizeof(a[0]));
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("拆分后的\n");
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", b[i]);
	}
	//{ 1,3,5,7,9,2,4,6,8,10 }
	getch();
	return 0;
}

#elif 1

int check_num(int(*a)[3], int row, int col, int key)
{
	int i = 0, j = col - 1;
	
	while ((i <= row) && (j <= col))
	{
		if (a[i][j] == key)
			return a[i][j];
		if (a[i][j] < key)
		{
			i++;
		}
		else if (a[i][j] > key)
		{
			j--;
		}
	}
	return 0;
}

int main()
{
	int a[3][3] = { 0 };
	int value = 0;
	int i = 0, j = 0;
	printf("请输入您想输入符合标题的二维数组\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("请输入你想检查的值:\n");
	scanf("%d", &value);
	if (check_num(a, 3, 3, value))
		printf("找到了: %d\n", check_num(a, 3, 3, value));
	else
		printf("没找到\n");

	getch();
	return 0;
}
#endif // 0

