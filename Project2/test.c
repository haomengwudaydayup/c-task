#include<stdio.h>
#include<stdlib.h>


#if 0
//写一个函数返回参数二进制中 1 的个数  比如： 15 0000 1111 4 个 1 
//递归方法（这道题不适合采用递归）
int count_one_bits(unsigned int value)
{
	static int count = 0;
	if (value)
	{
		//15  1111
		if (value % 2 == 1)
		{
			count++;
		}
		count_one_bits(value / 2);
	}
	return count;
}
//最优越的方法
int count_one_bits_1(unsigned int value)
{
	int count = 0;
	while (value)
	{
		value = value & value - 1;
		count++;
	}
	return count;
}
int main()
{
	int value = 0;
	int sum = 0;
	printf("请输入您想求得数得二进制1的个数>");
	scanf_s("%d", &value);
//	sum = count_one_bits(value);
	sum = count_one_bits_1(value);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}

#elif 0
//2.获取一个数二进制序列中所有的偶数位和奇数位，
void Print_bits(unsigned int value)
{
	int i = 0;
	unsigned int value1 = value, value2 = value;
	int key1[16] = { 0 };
	int key2[16] = { 0 };
	for (i = 15; i >= 0; i--)
	{
		if (value1 & 1 == 1)
		{
			key1[i] = 1;
			value1 = value1 >> 2;
		}
		else if (value1 & 1 == 0)
		{
			key1[i] = 0;
			value1 = value1 >> 2;
		}
	}
	value2 = value2 >> 1;
	for (i = 15; i >= 0; i--)
	{
		if (value2 & 1 == 1)
		{
			key2[i] = 1;
			value2 = value2 >> 2;
		}
		else if (value2 & 1 == 0)
		{
			key1[i] = 0;
			value2 = value2 >> 2;
		}
	}
	printf("奇数如下:\n");
	for (i = 0; i < 16; i++)
	{
		printf("%d", key1[i]);
	}
	printf("\n偶数如下:\n");
	for (i = 0; i < 16; i++)
	{
		printf("%d", key2[i]);
	}
	printf("\n");
}

int main()
{
	int value = 0;
	printf("请输入您想获取一个数二进制序列数>");
	scanf_s("%d", &value);
	Print_bits(value);
	system("pause");
	return 0;
}

#elif 0 
//3. 输出一个整数的每一位。 

void Print(int value)
{
	if (value > 9)
	{
		Print(value / 10);
	}
	printf("%d ", value % 10);
}

int main()
{
	int value = 0;
	printf("请输入您想输出的数>");
	scanf_s("%d", &value);
	Print(value);
	system("pause");
	return 0;
}

#elif 1
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 

int Compare_bit(unsigned int value1, unsigned int value2)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((value1 & 1) != (value2 & 1))
		{
			count++;
		}
		value1 = value1 >> 1;
		value2 = value2 >> 1;
	}
	return count;
}

int main()
{
	int value1 = 0, value2 = 0;
	int sum = 0;
	printf("请输入您想两个数value1,valu2>");
	scanf_s("%d%d", &value1, &value2);
	sum = Compare_bit(value1, value2);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
#endif // 0
