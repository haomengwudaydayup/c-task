/*
	今天进行C语言第三篇
	time：2019-4-21
*/

#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//位运算& （按位与） ，|（按位或），^（按位异或）。
//	//正数的原码=反码=补码  负数则不相同，先求反码然后加一等于补码
//	//显示的是源码运算的结果，但是内存存储的形式是按补码存储的!!
//	int a = 3;
//	int b = 5;
//	//3 对应的二进制是011 5对应的是101
//	int c = a & b;//至少有一个为零，则为零，001
//	printf("c = %d\n", c);
//	c = a | b;//至少有一个为1，则为1，111
//	printf("c = %d\n", c);
//	c = a ^ b;//相同的为0，不同的为1
//	printf("c = %d\n", c);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	// << 左移，>> 右移 ，
//	//<< 左移
//	int a = 2;
//    int b = 1<<a;//和右移一样的运算一样
//	printf("b = %d\n", b);
//	b = a >> 1;
//	printf("b =%d\n", b);//1010 >> 101为 1*2^0+1*2^2=5
//	//算术右移
//	//右边丢弃，左边补原符号位
//	//逻辑右移
//	//右边丢弃，左边补0
//	
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int array_int[10];
//	int lengh = sizeof(array_int) / sizeof(int);
//	//这样可以方便的计算数组的长度
//	system("pause");
//	return 0;
//}
int main()
{
	//计算素数的代码
	//素数是只能被1和它本身除的数，其他的不能除
	int i = 0;
	int count = 0;

	for(i=101; i<=200; i+=2)
	{
		//printf("%d ", i);
		//判断i是否为素数
		int j = 0;
		//sqrt(i)对i开平发
		for(j=2; j<=sqrt(i); j++)
		{
			if(i%j==0)
				break;
		}
		if(j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	system("pause");
	return 0;
}