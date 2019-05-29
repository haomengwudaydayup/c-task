#include<stdio.h>
#include<stdlib.h>


#if 0
//程序思路就是让用一个变量初始化为0来存放你反转后的值
//利用循环(i = 0; i < 32; i++)每次让n>>右移i位, 移动i位后和1按位与&, 然后让变量和它按位或|
//在依次<<左移1位，直到32最高权位，但是这里注意：左移31次就到达了最高权位
unsigned int Bit_reverse(int n)
{
	//n = 7
	//00000000010000000000000000000111
	//11100000000000000000000000000000
	//00000000000000000000000000000001
	unsigned b = 0;
	int i = 0;
	for (i = 0; i <= 31; i++)
	{
		//0110
		b = b | ((n >> i) & 1);
		if (i < 31)
			b = b << 1;
	}
	return b;
}

int main()
{
	int a = 0;
	unsigned b = 0;
	printf("请输入>");
	scanf_s("%d", &a);

	b = Bit_reverse(a);
	printf("%u\n", b);
	system("pause");
	return 0;
}

#elif 1

int main()
{
	//不使用（a + b） / 2这种方式，求两个数的平均值。
	int a = 10;
	int b = 20;
	//0110 6
	//0010 2  == 4
	//0100
	//0101 ^
	//0010 &
	int c = (a & b) + ((a ^ b) >> 1);//tips
	printf("c = %d\n", c);
	system("pause");
	return 0;
}
#endif // 0

