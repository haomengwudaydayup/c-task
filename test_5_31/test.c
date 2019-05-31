#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
int main()
{
	//有符号数必须大于等于>=0
	int n = 9;
	float* pfloat = (float*)&n;//强转
	printf("n = %d\n", n);
	printf("*pfloat的值为：%f\n", *pfloat);

	*pfloat = 9.0;//强转后赋值

	printf("num的值为：%d\n", n);
	printf("*pfloat的值为：%f\n", *pfloat);

	system("pause");
	return 0;
}

#elif 0

int main()
{
	char str1[] = "hello";
	char str2[] = "hello";
	char *str3 = "hello";
	char *str4 = "hello";
	if (str1 == str2)
	{
		printf("str1 and str2 are same\n");
	}
	else
	{
		printf("str1 and str2 are not same\n");
	}

	if (str3 == str4)
	{
		printf("str3 and str4 are same\n");
	}
	else
	{
		printf("str3 and str4 are not same\n");
	}

	system("pause");
	return 0;
}


#elif 0
//文件操作形式
int main()
{
	//\为转义字符，小心被转义了
	char str1 = 0;
	char str2 = 0;
	FILE *fp = fopen("C:\\Users\\梦武好\\Desktop\\Linux.txt", "a+");//打开文件并将地址返回给结构体指针fa接收
//	fclose(fp);//关闭对文件，释放相当资源，也防止后序中的对文件进行非法改变
	if (fopen("C:\\Users\\梦武好\\Desktop\\Linux.txt", "r") == NULL)
	{
		printf("打开文件失败！\n");
		getch();
		exit(1);
	}
	else
	{
		printf("打开成功!\n");
	}

	puts("之前\n");
	while ((str1 = fgetc(fp)) != EOF)
	{
		putchar(str1);
	}

	printf("Input the string!\n");

	while ((str2 = getchar()) != EOF)
	{
		fputc(str2, fp);
	}

	/*int i = 0;
	for (i = 0; i < 5; i++)
	{
		str2 = getchar();
		fputc(str2, fp);
	}*/

	puts("之后\n");

	while ((str1 = fgetc(fp)) != EOF)
	{
		putchar(str1);
	}

	if (ferror(fp)) {
		puts("读取出错");
	}
	else {
		puts("读取成功");
	}
	
	fclose(fp);
	
	return 0;
}

#elif 1

int main()
{
	char str[300];
	FILE *fp = fopen("C:\\Users\\梦武好\\Desktop\\数位遍历.txt", "r");

	if (fp == NULL)
	{
		printf("打开失败\n");
		getch();
		exit(1);
	}
	else
	{
		printf("打开成功\n");
	}

	while (fgets(str, sizeof(str) / sizeof(str[0]), fp) != NULL)
	{
		printf("%s\n", str);
	}



	system("pause");
	return 0;
}
#endif // 0

