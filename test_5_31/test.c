#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
int main()
{
	//�з�����������ڵ���>=0
	int n = 9;
	float* pfloat = (float*)&n;//ǿת
	printf("n = %d\n", n);
	printf("*pfloat��ֵΪ��%f\n", *pfloat);

	*pfloat = 9.0;//ǿת��ֵ

	printf("num��ֵΪ��%d\n", n);
	printf("*pfloat��ֵΪ��%f\n", *pfloat);

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
//�ļ�������ʽ
int main()
{
	//\Ϊת���ַ���С�ı�ת����
	char str1 = 0;
	char str2 = 0;
	FILE *fp = fopen("C:\\Users\\�����\\Desktop\\Linux.txt", "a+");//���ļ�������ַ���ظ��ṹ��ָ��fa����
//	fclose(fp);//�رն��ļ����ͷ��൱��Դ��Ҳ��ֹ�����еĶ��ļ����зǷ��ı�
	if (fopen("C:\\Users\\�����\\Desktop\\Linux.txt", "r") == NULL)
	{
		printf("���ļ�ʧ�ܣ�\n");
		getch();
		exit(1);
	}
	else
	{
		printf("�򿪳ɹ�!\n");
	}

	puts("֮ǰ\n");
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

	puts("֮��\n");

	while ((str1 = fgetc(fp)) != EOF)
	{
		putchar(str1);
	}

	if (ferror(fp)) {
		puts("��ȡ����");
	}
	else {
		puts("��ȡ�ɹ�");
	}
	
	fclose(fp);
	
	return 0;
}

#elif 1

int main()
{
	char str[300];
	FILE *fp = fopen("C:\\Users\\�����\\Desktop\\��λ����.txt", "r");

	if (fp == NULL)
	{
		printf("��ʧ��\n");
		getch();
		exit(1);
	}
	else
	{
		printf("�򿪳ɹ�\n");
	}

	while (fgets(str, sizeof(str) / sizeof(str[0]), fp) != NULL)
	{
		printf("%s\n", str);
	}



	system("pause");
	return 0;
}
#endif // 0

