/*
	��������ѧϰ���ݹ�
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
	//������ǿ��Կ�����memset()��Ȼ�����ַ�������Է������ַ��������������ڽ�β���Ͻ�����\0,
	//�������ĸ������������ǲ���ѭ�������������%s��ӡ�ᱨ��
	printf("%s\n", str1);
	system("pause");
	return 0;
	}

#elif 0
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

//�ݹ���
int fib(int n)
{
	if (n <= 0)//�жϴ������
		return 0;
	else if (n <= 2)//�ж�1-2�����
		return 1;
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
//�ǵݹ���
int fib1(int n)
{
	if (n <= 0)//�жϴ������
		return 0;
	else if (n <= 2)//�ж�1-2�����
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
	printf("������>");
	scanf_s("%d", &value);
	puts("�ݹ���:");
	sum = fib(value);
	printf("sum = %d\n", sum);
	puts("�ǵݹ���:");
	sum = fib1(value);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}

#elif 0
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ���1729 1+7+2+9
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
	printf("������һ���Ǹ�����>");
	scanf_s("%d", &value);
	sum = DigitSum(value);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}

#elif 0
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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
	int len = mystrlen(str);//����ַ����ȣ�������\0
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
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
	printf("������>");
	scanf_s("%d", &value);
	Print(value);
	system("pause");
	return 0;
}

#endif // 0

