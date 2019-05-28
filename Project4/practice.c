/*
	现在我们学习做递归
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
	int main()
	{
	int i = 0;
	char str[20] = { '0' };
	char *pstr = str;
	char str1[20] = "abxdefgh";
	memset(pstr, '*', 20 * sizeof(*pstr));
	//	str[19] = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	//因此我们可以看出，memset()虽然对于字符数组可以符任意字符，但是他不会在结尾加上结束符\0,
	//对于它的辅助遍历，我们采用循环遍历。如果用%s打印会报错
	printf("%s\n", str1);
	system("pause");
	return 0;
	}

#elif 0
//递归和非递归分别实现求第n个斐波那契数

//递归求法
int fib(int n)
{
	if (n <= 0)//判断错误情况
		return 0;
	else if (n <= 2)//判断1-2的情况
		return 1;
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
//非递归求法
int fib1(int n)
{
	if (n <= 0)//判断错误情况
		return 0;
	else if (n <= 2)//判断1-2的情况
		return 1;
	else
	{
		int i = 1, j = 1, k = 1;
		int sum = 0;
		for (k = 3; k <= n; k++)
		{
			sum = i + j;
			i = j;
			j = sum;
		}
		return sum;
	}
}
int main()
{
	//1 1 2 3 5 8 13 21 34 55
	int value = 0;
	int sum = 0;
	printf("请输入>");
	scanf_s("%d", &value);
	puts("递归求法:");
	sum = fib(value);
	printf("sum = %d\n", sum);
	puts("非递归求法:");
	sum = fib1(value);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}

#elif 0
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，如1729 1+7+2+9
int DigitSum(int n)
{
	if (n)
	{
		//DigitSum(n / 10);
		return n % 10 + DigitSum(n / 10);
	}
	return 0;
}

int main()
{	
	int value = 0;
	int sum = 0;
	printf("请输入一个非负整数>");
	scanf_s("%d", &value);
	sum = DigitSum(value);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}

#elif 0
//4. 编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

int My_strlen(char* s)
{
	if (*s != '\0')
	{
		return 1 + My_strlen(s + 1);
	}
	return 0;
}

void reverse_string(char * str)
{
	int len = mystrlen(str);//获得字符长度，不包括\0
	char tmp;
	if (*str)
	{
		tmp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = 0;
		reverse_string(str + 1);
		str[len - 1] = tmp;
	}
}


int main()
{
	char str[20] = "abcdefg";
	puts(str);
	reverse_string(str);
	puts(str);
	system("pause");
	return 0;
}
#elif 1
//7.递归方式实现打印一个整数的每一位
void Print(int n)
{
	//1729
	if(n > 9)
	{
		Print(n / 10);
	}
	printf("%d ",n % 10);
}

int main()
{
	int value = 0;
	printf("请输入>");
	scanf_s("%d", &value);
	Print(value);
	system("pause");
	return 0;
}

#endif // 0

