/*
	第四次C语言作业
*/

#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10] = { 10,20,30,40,50,60,70,80,90,100 };
//	int temp = 1, lengh = sizeof(a) / sizeof(int);
//	int i = 0;
//	for (i=0; i < lengh; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	printf("数组a: ");
//	for (i=0; i < lengh; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n数组b: ");
//	for (i=0; i < lengh; i++)
//	{
//		printf("%d ", b[i]);
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
//	double sum = 0.0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1) //
//		{
//			sum += 1.0 / i;
//		}
//		else if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//	}
//
//	printf("结果为：%lf", sum);
//	system("pause");
//	return 0;
//}

int main()
{
	//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((9 == i % 10) || (9 == i / 10))
			count++;
	}
	printf("count = %d\n", count);
	system("pause");
	return 0;
}
