#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	char str1[25] = { 0 };
	char str2[25] = { 0 };
	int i = 0;
	long long num1 = 0, num2 = 0;
	gets(str1);
	gets(str2);

	for (i = 0; i < strlen(str1); i++)
	{
		num1 = num1 * 10 + (str1[i] - 48);
	}
	for (i = 0; i < strlen(str2); i++)
	{
		num2 = num2 * 10 + (str2[i] - 48);
	}

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);

	getch();
	return 0;
}