#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

#if 0
int main()
{
	char c = 0;
	int i = 1;
	int j = 1;
	scanf_s("%d", &i);//输入K，默认读取失败

	//while ((c = getchar()) != '\n' && c != EOF); //在下次读取前清空缓冲区
	//scanf_s("%*[^\n]"); scanf_s("%*c");

	scanf_s("%*[^\n]"); scanf_s("%*c");
	scanf_s("%d", &j);
	printf("i = %d, j = %d\n", i, j);

	getch();
	return 0;
}

#elif 0


int main()
{
	char c = 0;
	int a = 0;
	int b = 0;
	char s[20] = { 0 };

	/*scanf("%2d", &a);
	while ((c = getchar()) != '\n' && c != 'EOF');

	scanf("%5d", &b);*/
	scanf("%*[^\n]"); scanf("%*c");

	scanf("%4s", s);


	printf("a = %d, b = %d, c = %s\n", a, b, s);

	getch();
	return 0;
}


#elif 0

int main()
{
	//这个只能说是读取特定的字符串，必须在a-e之间的字符串会被读取
	char s[100] = { 0 };
	scanf("%[a-z-A-Z-0-9]", s);
	printf("s = %s\n", s);

	getch();
	return 0;
}
#elif 0

int main()
{
	//这个只能说是读取特定的字符串，必须在a-e之间的字符串会被读取
	char s[30] = { 0 };
	char s1[30] = { 0 };
//	int a = 0;
	scanf("%[^0-9]", s);//这条语句是无法截取读取的

	scanf("%*[^\n]"); scanf("%*c");

	scanf("%[^\n]", s1);
	//scanf("%d", &a);

	printf("s = %s\n", s);
	printf("s1 = %s\n", s1);
	//printf("a = %d\n", a);
	getch();
	return 0;
}

#elif 0

int main()
{
	char s[30] = { 0 };
	scanf("%6[^0-9\n]", s);

	scanf("%*[^\n]"); scanf("%*c");

	printf("s = %s\n", s);
	getch();
	return 0;
}

#elif 0

int main()
{
	FILE* fp = fopen("C:\\Users\\梦武好\\Desktop\\scanf.txt", "r");
	
	if (fp == NULL)
	{
		printf("读取失败！\n");
	}
	else
		printf("读取成功！\n");



	getch();
	return 0;
}

#elif 1
//实现一个My_stecmp
void My_strcmp(char *dist, const char *sor)
{
	assert(sor != NULL && dist != NULL);
	char *p = dist;
	while (*sor != '\0')
	{
		*(p++) = *(sor++);
	}
	*p = '\0';
}

int main()
{
	char str1[20] = "abcdef";//这是字符串常量，他存放在rodata区
	char *s = "ABCD";
	//strcmp(str1, s);
	My_strcmp(str1, s);
	//*(s + 1) = 'h';//这是错误的写法，不能修改字符串常量
	printf("str1 = %s\n", str1);
	getch();
	return 0;
}
#endif // 0

