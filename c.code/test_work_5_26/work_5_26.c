#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

#if 0
//unsigned int reverse_bit(unsigned int value); 
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。

unsigned int reverse_bit(unsigned int value)
{
	//00000000000000000000000000000111  - 7
	//00000000000000000000000000000001  - 0
	//00000000000000000000000000000010
	
	int i = 0;
	unsigned int j = 0;
	for (i = 0; i <= 31; i++)
	{
		j = j | ((value >> i) & 1);
		if(i < 31)
			j = j << 1;
	}
	return j;
}

int main()
{
	//0111
	int value = 0;
	unsigned int value1 = 0;
	printf("请输入>");
	scanf_s("%d", &value);
	value1 = reverse_bit(value);
	printf("value = %d\nvalue1 = %ld\n", value, value1);
	system("pause"); 
	return 0;
}

#elif 0
//2.不使用（a+b）/2这种方式，求两个数的平均值。 

int main()
{
	int a = 4; //0100
	int b = 10;//1010
			   //0000 &
			   //1110 ^
	           //0111 >>1
	int avg = (a & b) + (a ^ b) >> 1;
	//左移==乘2 ，，右移==除2
	printf("avg = %d\n", avg);
	system("pause");
	return 0;
}

#elif 0
//3.编程实现： 
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。请找出这个数字。（使用位运算）
void Print(int *a, int len, int *x, int *y)
{
	//实现如果存在两个不同的数
	int i = 0;
	int value = 0;
	int count = 0;
	//求得不同的值异或的值
	for (i = 0; i < len; i++)
	{
		value = value ^ a[i];
	}
	//求异或的值的几权位为1
	for (i = 0; i < 31; i++)
	{
		//0101
		//1001
		//1100//2
		if ((value >> i) & 1 == 1)
			break;
		count++;
	}

	for (i = 0; i < len; i++)
	{
		if ((a[i] >> count) & 1 == 1)
		{
			(*x) = (*x) ^ a[i];
		}
		else
			(*y) = (*y) ^ a[i];
	}
}
int main()
{
	//两个相同的数异或值位0！
	int a[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5 };
	int a1[] = { 1,1,2,2,3,3,4,4,5,9 };
	int x = 0, y = 0;
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int value = 0;
	for (i = 0; i < len; i++)
	{
		value = value ^ a[i];
	}
	printf("value = %d\n", value);
	printf("\n");
	len = sizeof(a1) / sizeof(a1[0]);
	Print(a1, len, &x, &y);
	printf("x = %d, y = %d\n", x, y);
	system("pause");
	return 0;
}

#elif 1
//未完成
//有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。


void Apart_reverse(char *s, int left, int right)
{
	
	for (left, right; left < right; left++, right--)
	{
		char tmp = 0;
		tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
	}

}


void str_reverse(char *s)
{
	//student am a i
	int left = 0;
	int right = 0;
	int i = 0;
	for (i; s[i]; i++)
	{
		if (s[i] != ' ')
		{
			right = i;
		}
		
		else if (left < right)
		{
			Apart_reverse(s, left, right);
	
		}
	
		if (s[i] == ' ')
		{
			left = i + 1;
		}
	}
	Apart_reverse(s, 0, i - 1);
}

int main()
{
	char str[30] = "student a am i";
	printf("%s\n", str);
	str_reverse(str);
	printf("反转后:\n");
	printf("%s\n", str);
	system("pause");
	return 0;
}
#endif // 0

