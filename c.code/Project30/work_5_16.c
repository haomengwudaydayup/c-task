#include<stdio.h>
#include<stdlib.h>


#if 0
//1.递归和非递归分别实现求第n个斐波那契数。

int fib(int n)
{
	if (n <= 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	// 1 1 2 3 5 8 13 21 34 55
	int i = 1, j = 1;
	int num = 0;
	int value = 0;
	printf("请输入您想求的第几位的斐波那契数列>");
	scanf_s("%d", &num);
	printf("这是递归调用实现:\n");
	value = fib(num);
	printf("value = %d\n", value);
//----------------------------------------
	printf("接下来是非递归实现：\n");
	
	if (num <= 2)//判断num<2的情况
		printf("value = %d\n", i);
	else 
	{
		int a = 1, b = 1;
		value = 0;
		for (i = 0; i < num - 2; i++)
		{
			value = a + b;
			a = b;
			b = value;
		}
		printf("value = %d\n", value);
	}

	system("pause");
	return 0;
}

#elif 0
//2.编写一个函数实现n^k，使用递归实现 
double Calculate_power(int value, int power)
{
	//power位为传递进来的次方，有三种情况- 0 +
	if (power < 0)
	{
		if (power == -1)
			return 1.0 / value;
		return  1.0 / value * Calculate_power(value, power + 1);
	}
	else if (power == 0)
	{
		return 0.0;
	}
	else
	{
		if (power == 1)
			return value * 1.0;
		return 1.0 * value * Calculate_power(value, power - 1);
	}

}

int main()
{
	int value = 0, power = 0;
	double acc_value = 0.0;
	printf("请输入您想计算的值和多少次方value、power>");
	scanf_s("%d%d", &value, &power);
	acc_value = Calculate_power(value, power);
	printf("acc_value = %f\n", acc_value);
	system("pause");
	return 0;
}
#elif 0
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
int sum = 0;

int DigitSum(int n)
{
	int sum = 0;
	if (n != 0)
	{
		//(1729)
		//(172) 9
		//(17) 2 9
		//(1) 7 2 9
		sum = DigitSum(n / 10) + n % 10;
	}
	return sum;
}


int main()
{
	int value = 0;
	int sum = 0;
	printf("请输入非负整数value>");
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

int my_strlen(char* s)
{
	if (*s == '\0')
		return 0;
	return 1 + my_strlen(s + 1);
}
void reverse_string(char* s)
{
	int lengh = my_strlen(s);//不让使用strlen()函数，我们构造一个
	
	if (lengh <= 1)
		return;
	else
	{
		int tmp = s[0];
		s[0] = s[lengh - 1];
		s[lengh - 1] = 0;
		reverse_string(s + 1);
		s[lengh - 1] = tmp;
	}
}

int main()
{
	char *s[20];
	printf("请输入您先输的字符>");
	scanf_s("%s", s, 20);//scanf()和getchar()遇到空格，制表符，Tab会中断，可以采用gets()存储
	printf("调用之前：s = %s\n", s);
	reverse_string(s);//调用函数
	printf("调用之后：s = %s\n",s);
	system("pause");
	return 0;
}

#elif 0
//5.递归和非递归分别实现strlen
int my_strlen(char* s)
{
	if (*s == 0)
		return 0;
	return 1 + my_strlen(s + 1);
}

int my_strlen1(char* s)
{
	int sum = 0;
	while (*(s++) != 0)
	{
		sum++;
	}
	return sum;
}

int main()
{
	char *s[20];
	int sum1 = 0;
	int sum2 = 0;
	printf("请输入您先输的字符>");
	scanf_s("%s", s, 20);//scanf()和getchar()遇到空格，制表符，Tab会中断，可以采用gets()存储
	printf("s = %s\n", s);
	sum1 = my_strlen(s);
	printf("递归调用: sum1 = %d\n", sum1);

	sum2 = my_strlen1(s);
	printf("非递归调用: sum2 = %d\n", sum2);
	system("pause");
	return 0;
}

#elif 0
//递归和非递归分别实现求n的阶乘
int fac(int n)
{
	if (n == 1)
		return 1;
	return n * fac(n - 1);
}

int fac1(int n)
{
	int sum = 1;
	while (n >= 1)
	{
		sum *= n--;

	}
	return sum;
}

int main()
{
	int value = 0;
	printf("请输入您想计算的数的阶乘value>");
	scanf_s("%d", &value);
	printf("递归调用: value的阶乘为%d\n", fac(value));
	
	printf("非递归调用: value的阶乘为%d\n", fac1(value));
	system("pause");
	return 0;
}

#elif 1
//7.递归方式实现打印一个整数的每一位
void Print(int n)
{
	if (n > 9)
	{
		Print (n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int value = 0;
	printf("请输入您想打印的值value>");
	scanf_s("%d", &value);
	Print(value);
	system("pause");
	return 0;
}
#endif // 0
