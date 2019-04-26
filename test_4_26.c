/*
	今天进行第四次C语言学习
*/
#include<stdio.h>
#include<stdlib.h>
//我们先来一道经典例题
//int main()
//{
//	int i = 1;//首先创建一个变量
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//然后再创建一个数组
//	for (i = 0; i <= 13; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;//中间差了两位a[9] a[10] a[11] a[12]=i
//		//越界访问，然后改变了变量i的值，使其一直死循环
//	}
//	//在栈区分配内存是根据一下形式分配的，先定义的变量在高地址，后定义的变量在低地址
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	
//	//在for循环中不要再下面随意添加改变循环变量的值，不让会导致死循环
//	int i = 1;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("hehe\n");
//		i = 5;//这块改变的循环变量的值导致形成死循环
//	}
//	//还有再while循环要注意break，continue等关键字
//	i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("hehe");
//		i++;
//	//由于i=5时，continue语句是从它开始，结束到循环最后的所有语句，导致i不能++,一直等于5，一直满足循环条件
//	//break 也是结束从它开始，直接跳出，它后面的语句不执行
//	//因此要小心注意
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//for(;;)是死循环
//	int x = 1, y = 1;
//	for (x = 0, y = 0; y < 5, x < 2; ++x, y++)//只循环打印2次
//	{
//		//逗号表达式b = (a = 10),(b = 20),(c = 30);
//		//他才用逗号表达式作为循环体，而逗号表达式仅看最后一项表达式即x<2
//		printf("hehe");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//求n的阶乘
//	int i = 1;
//	int n = 1;
//	int sum = 1;
//	scanf_s("%d", &n);//输入您想求数的阶乘
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * n;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i= 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret*i;
//		}
//		sum += ret;//sum = sum + ret;
//	}//这个是求1的阶乘+2的阶乘+3的阶乘+一直加到n的阶乘
//
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
////	int c = (a+b)/2;
//	int c = (a-b)/2+b;
//	//求平均数时，采用这样的求法才是最正确的(高-低)/2+低
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

int main()
{
	//二分查找法，也称折半查找
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 17;//k是想要求的值
	int left = 0;//左下标
	int right = sizeof(arr)/sizeof(arr[0])-1;//右下标

	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid]<k)
		{
			left = mid+1;
		}
		else if(arr[mid] > k)
		{
			right = mid-1;
		}
		else
		{
			printf("找到了,下标是：%d\n", mid);
			break;
		}
	}
	if(left>right)
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}
