#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
//1.ʵ��һ�����������������ַ����е�k���ַ���
char* Swap_str(char *str, int len, int n)
{
	int i = 0;
	//abcd --> bcda
	//abcd --> cdab
	for (i = 0; i < n; i++)
	{
		str[len] = str[0];
		str = str + 1;
	}
	return str;
}

int main()
{
	char str[20] = { 0 };
	char *str1 = NULL;
	int len = 0;
	printf("�������ַ�����ֵ:");
	scanf("%s", str);
	printf("\n�����������޸ĵĸ���:");
	scanf("%*[^\n]"); scanf("%*c");
	scanf("%d", &len);
	puts(str);
	str1 = Swap_str(&str, strlen(str), len);
	puts(str1);
	system("pause");
	return 0;
}

#elif 1
//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
char* Swap_str(char *str, int len, int n, int *count)
{
	//abcd --> bcda
	//abcd --> cdab
	int i = 0;
	int choice = 0;
	printf("��ѡ��> 1������ 2������:");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		for (i = 0; i < n; i++)//����
		{
			str[len] = str[0];
			str = str + 1;
		}
		*count = 1;
		return str;
	case 2:
		//abcd --> dabc
		//abcd --> cdab
		//abcde --> cdeab
		//abcdefg -- > defgabc
		char *str1 = str + (len - n);

		for (i = 0; i < len - n; i++)//����
		{
			*(str1 + n + i) = *(str + i);
		}
		*count = -1;
		return str1;
		
	default:
		printf("��������!");
		break;
	}
	
}

int Is_move(char *arr1, const char *arr2)
{
	if (arr1 == NULL && arr2 == NULL)
		exit(0);
	if (strlen(arr1) != strlen(arr2))
		exit(0);
	int len = strlen(arr1);
	int i = 0;

	for (i = 0; i < len; i++)
	{
		if (arr1[i] != arr2[i])
			return 0;
	}
	return 1;
}

int main()
{
	printf("ע�⣺������ַ���Ҫ����20������Ȼ�����ջ���\n");
	char str[20] = { 0 };
	char str2[20] = { 0 };
	char *str1 = NULL;
	int len = 0;
	int count = 0;
	printf("�������ַ���1���ַ���2:");
	scanf("%s", str);
	scanf("%s", str2);


	printf("\n�����������޸ĵĸ���:");

	scanf("%*[^\n]"); scanf("%*c");
	scanf("%d", &len);

	str1 = Swap_str(&str, strlen(str), len, &count);

	if (count == 1)
	{
		if (Is_move(str1, str2) == 1)//�ж���λ���Ƿ����
		{
			printf("�ַ���str1���������ַ���str2���\n");
		}
		else
			printf("�ַ���str1���������ַ���str2�����\n");
	}
	else if (count == -1)
	{
		if (Is_move(str1, str2) == 1)
		{
			printf("�ַ���str1���������ַ���str2���\n");
		}
		else
			printf("�ַ���str1���������ַ���str2�����\n");
	}

	system("pause");
	return 0;
}

#endif // 0

