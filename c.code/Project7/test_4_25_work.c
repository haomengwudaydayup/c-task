#include<stdio.h>
#include<stdlib.h>
#include<math.h>
////1.打印菱形
//int  main()
//{
//	int i = 1, j = 1, k = 1;//初始化3个变量进行控制循环
//	for (i = 1; i <= 13; i++)
//	{
//		if (i <= 7)
//		{
//			for (j = i; j <= 6; j++)
//			{
//				printf(" ");
//			}
//			for (k = 1; k <= 2 * i - 1; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		else
//		{//i=8
//			for (j = 1; j <= i - 7; j++)
//			{
//				printf(" ");
//			}
//			
//			for (k = 1; k <= 13 - 2 * (i - 7); k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

////2.求出0～999之间的所有“水仙花数”并输出。
//int main()
//{
//	//水仙花数必须为3位数
//	//3位数每位数的3次方相加等于该数  例如：153 = 1^3 + 5^3 + 3^3
//	printf("从100到999之间的水仙花数为:");
//	int i = 1, j = 1, k = 1, m = 1;
//	for (i = 100; i <= 999; i++)
//	{
//		j = i / 100;
//		k = (i / 10) % 10;
//		m = i % 10;
//		if(i == j*j*j + k*k*k + m*m*m)
//			printf("%d ", i);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//3. 求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
int main()
{
	int i = 1;
	int j = 1;
	int a = 1;
	int sum = 0;
	printf("请输入您想求的值a ：\n");
	scanf_s("%d", &a);
	j = a;
	for (i = 0; i < 5; i++)
	{
		if(i>=1)
			j = j + a * pow(10,i);
		
		sum += j;
	}
	printf("\nsum = %d\n", sum);
	system("pause");
	return 0;
}