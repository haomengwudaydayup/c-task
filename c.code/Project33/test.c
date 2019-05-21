#include<stdio.h>
#include<stdlib.h>

void fun(int n)
{
	int temp = 0;
	int i = 0;
	for (i = n; i; i /= 10)
	{
		temp = i % 10;
		printf("%d ", temp);
	}

}

int reverse(int n)
{
	if (n >= 0)
	{
		reverse(n / 10);
		printf("%d ", n % 10);
	}
	return 0;
}

int main()
{
	int value = 0;
	scanf_s("%d", &value);
//	fun(value);
	reverse(value);
	printf("%d\n", value);
	system("pause");
	return 0;
}