#include<stdio.h>
#include<stdlib.h>

int main()
{
	double f1 = 8.400000;
	int a = 4;
	char str1 = 'A';
	printf("%.0lf, %#.0lf\n", f1, f1);
	printf("%d, %#d\n", a, a);
	printf("%c, %#c\n", str1, str1);
	system("pause");
	return 0;
}