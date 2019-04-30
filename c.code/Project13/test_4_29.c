/*
	test_4_29 -- C语言练习
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//int main()
//{
//	//一、求两个值交换，一共有三种方法
//	int a = 10, b = 20;
//	
//	//1、创建临时变量c
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//
//	//2、采用加减乘除进行交换
//	a = a + b;//30
//	b = a - b;//30 - 20
//	a = a - b;//30 - 10
//
//	//3、采用异或进行运算
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//时间戳时从1970年1月1号到现在时间的秒数
//	//32位NUIX时间戳可以用到-格林威治时间2038年01月19日03时14分07秒
//	
//	//使用随机数rand() ,使用它时要使用srand()//设置起点
//	//rand()随机数位0-RAND_INX， 
//	srand((unsigned int) time(NULL));//设立起点
//	for (int i = 0; i < 5; i++)
//	{
//		//rand()%11  位0-10
//		//rand()%11+2 位2-12
//		printf("%d\n", rand()%11+2);
//	}
//	 
//	system("pause");
//	return 0;
//
//}

int main()
{
	//最大公约数的求法
	/*
		最大公约数位24 16 他俩能被整除数中大的值
		可以采用辗转相除法来运算
	*/
	int m = 1, n = 1;
	int k = 0;
	printf("请输入您要求最大公约数的两个数m ，n: \n");
	scanf_s("%d%d", &m, &n);//不管谁大谁小都可以
	while (k = m % n)
	{
		//m=24  n=18  k=24%18=16  m=n.n=k 最后k为零退出，n为最大公约数
		m = n;
		n = k;
	}
	printf("最大公约数位%d\n", n);
	system("pause");
	return 0;
}