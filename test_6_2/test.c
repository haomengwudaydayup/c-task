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
	scanf_s("%d", &i);//����K��Ĭ�϶�ȡʧ��

	//while ((c = getchar()) != '\n' && c != EOF); //���´ζ�ȡǰ��ջ�����
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
	//���ֻ��˵�Ƕ�ȡ�ض����ַ�����������a-e֮����ַ����ᱻ��ȡ
	char s[100] = { 0 };
	scanf("%[a-z-A-Z-0-9]", s);
	printf("s = %s\n", s);

	getch();
	return 0;
}
#elif 0

int main()
{
	//���ֻ��˵�Ƕ�ȡ�ض����ַ�����������a-e֮����ַ����ᱻ��ȡ
	char s[30] = { 0 };
	char s1[30] = { 0 };
//	int a = 0;
	scanf("%[^0-9]", s);//����������޷���ȡ��ȡ��

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
	FILE* fp = fopen("C:\\Users\\�����\\Desktop\\scanf.txt", "r");
	
	if (fp == NULL)
	{
		printf("��ȡʧ�ܣ�\n");
	}
	else
		printf("��ȡ�ɹ���\n");



	getch();
	return 0;
}

#elif 1
//ʵ��һ��My_stecmp
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
	char str1[20] = "abcdef";//�����ַ����������������rodata��
	char *s = "ABCD";
	//strcmp(str1, s);
	My_strcmp(str1, s);
	//*(s + 1) = 'h';//���Ǵ����д���������޸��ַ�������
	printf("str1 = %s\n", str1);
	getch();
	return 0;
}
#endif // 0

