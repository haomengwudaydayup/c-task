#include<stdio.h>
#include<stdlib.h>

//����������Լ�����������
//test1
//��Щ���ǲ�������

int Print_Num(unsigned int n)
{
	//�������õ���������ǲ��ܽ������㸺��������unsigned�Ϳ���
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}

//���������õݹ����ʽ������
//test2
int Print_Num_1(unsigned int n)
{
	//���õݹ�ķ�ʽ���������
	static int count = 0;//���һ����̬ȫ�ֱ���
	if (n)
	{
	//	Print_Num_1(n / 2);//12 6 3 1
		if (n % 2 == 1)
			count++;//1100 -- 0 0 1 1
		Print_Num_1(n / 2);//12 6 3 1
	}
	return count;
}

//test3
int Print_Num_2(int n)
{
	//����32��ѭ�����������
	int count = 0;//������
	int i = 32;
	while (i)
	{
		if (n & 1 == 1)
			count++;
		n = n >> 1;//n>>1������n��λ��
		i--;
	}
	return count;
}

//test4
int Print_Num_3(int n)
{
	//���ǲ���32��ѭ����������������Լ������
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//�����������һ��1,ֱ��û��1Ϊֹ��
		count++;
	}
	return count;
}

int main()
{
	int a = -23;//00000000000000000000000001100
	int sum = 0;
//	sum = Print_Num(a);//test1
//	sum = Print_Num_1(a);//test2
//	sum = Print_Num_2(a);//test3
	sum = Print_Num_3(a);//test4
	printf("%d\n", sum);
	system("pause");
	return 0;
}