#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0

//������ʵ��һ����Ȥ�����⣬���õݹ�ʵ�ִ�ӡ����1234�Ĳ��
//�ݹ�������������Ҫ������Ҫ�����һ���ǽ���������������ÿ�εݹ鶼�῿����������
//����ÿ�εݹ鶼�ᴴ���������Ὺ�ٿռ�

void Print(int n)
{
	//���ǲ��õݹ������
	if (n > 9)//��ֵĲ�Ϊ������ʱ��
	{
		//(1234)
		//(123)4
		//(12)3 4
		//(1) 2 3 4
		Print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 0;
	printf("�����������ֵ�����num>");
	scanf_s("%d", &num);
	Print(num);
	system("pause");
	return 0;
}

#elif 0
//���������õݹ���ʵ��ͳ���ַ����ĸ���ͳ��

int Print(char* p)
{
	if (*p == '\0')
	{
		return 0;
	}
	return 1 + Print(p+1);
}

int main()
{
	char p[20];
	int i = 0;
	puts("����������������ַ���");
	scanf_s("%s", p, 20);
	i = Print(p);
	printf("%d\n", i);
	system("pause");
	return 0;
}

#elif 0

int flb(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return flb(n - 1) + flb(n - 2);
}

int main()
{
	//1 1 2 3 5 8 13 21 34 55 89
	int num = 0;
	int sum = 0;
	printf("�������������ڼ���쳲���������>");
	scanf_s("%d", &num);
	sum = flb(num);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
//�������Ƿ���������ʺϲ��õݹ��������������ʺϲ���ѭ���ķ�����ʵ��

#elif 0
//������Ǿ����⣬��ŵ�����⣡
int i = 1;
void move(int n, char one, char two, char three)
{
	if (n == 1)
	{
		printf("Step%2d \t %c -> %c\n", i++, one, three);
	}
	else
	{
		move(n-1, one, three, two);
		printf("Step%2d \t %c -> %c\n", i++, one, three);
		move(n-1, two, one, three);
	}
}

int main()
{
	char one = 'A', two = 'B', three = 'C';
	int num = 1;
	printf("������Բ�̵ĸ���num>");   
	scanf_s("%d", &num);
	move(num, one, two, three);
	system("pause");
	return 0;
}

#elif 1
//������̨������

int D_jump_floor1(int n)
{
	if (1 == n)
		return 1;
	else if (2 == n)
		return 2;
	return D_jump_floor1(n - 1) + D_jump_floor1(n - 2);

}

int D_jump_floor2(int n)
{
	//����1-3�������
	if (1 == n)
		return 1;
	else if (2 == n)
		return 2;
	else if (3 == n)
		return 4;
	return D_jump_floor2(n - 1) + D_jump_floor2(n - 2) + D_jump_floor2(n - 3);
}

int main()
{
	//����һ�ο�����1-2��̨�ף������һ�¹���
	//1 ��1��2 ��2��3 �� 3......�ɴ˷�������쳲����������У����г���Ȼ���ܽ����
	int num = 0;//̨����
	int sum = 0;
	printf("������̨����num>");
	scanf_s("%d", &num);
//	sum = D_jump_floor1(num);//1-2
	sum = D_jump_floor2(num);//1-3
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
#endif // 0

