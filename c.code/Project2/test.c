#include<stdio.h>
#include<stdlib.h>


#if 0
//дһ���������ز����������� 1 �ĸ���  ���磺 15 0000 1111 4 �� 1 
//�ݹ鷽��������ⲻ�ʺϲ��õݹ飩
int count_one_bits(unsigned int value)
{
	static int count = 0;
	if (value)
	{
		//15  1111
		if (value % 2 == 1)
		{
			count++;
		}
		count_one_bits(value / 2);
	}
	return count;
}
//����Խ�ķ���
int count_one_bits_1(unsigned int value)
{
	int count = 0;
	while (value)
	{
		value = value & value - 1;
		count++;
	}
	return count;
}
int main()
{
	int value = 0;
	int sum = 0;
	printf("����������������ö�����1�ĸ���>");
	scanf_s("%d", &value);
//	sum = count_one_bits(value);
	sum = count_one_bits_1(value);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}

#elif 0
//2.��ȡһ�������������������е�ż��λ������λ��
void Print_bits(unsigned int value)
{
	int i = 0;
	unsigned int value1 = value, value2 = value;
	int key1[16] = { 0 };
	int key2[16] = { 0 };
	for (i = 15; i >= 0; i--)
	{
		if (value1 & 1 == 1)
		{
			key1[i] = 1;
			value1 = value1 >> 2;
		}
		else if (value1 & 1 == 0)
		{
			key1[i] = 0;
			value1 = value1 >> 2;
		}
	}
	value2 = value2 >> 1;
	for (i = 15; i >= 0; i--)
	{
		if (value2 & 1 == 1)
		{
			key2[i] = 1;
			value2 = value2 >> 2;
		}
		else if (value2 & 1 == 0)
		{
			key1[i] = 0;
			value2 = value2 >> 2;
		}
	}
	printf("��������:\n");
	for (i = 0; i < 16; i++)
	{
		printf("%d", key1[i]);
	}
	printf("\nż������:\n");
	for (i = 0; i < 16; i++)
	{
		printf("%d", key2[i]);
	}
	printf("\n");
}

int main()
{
	int value = 0;
	printf("�����������ȡһ����������������>");
	scanf_s("%d", &value);
	Print_bits(value);
	system("pause");
	return 0;
}

#elif 0 
//3. ���һ��������ÿһλ�� 

void Print(int value)
{
	if (value > 9)
	{
		Print(value / 10);
	}
	printf("%d ", value % 10);
}

int main()
{
	int value = 0;
	printf("�����������������>");
	scanf_s("%d", &value);
	Print(value);
	system("pause");
	return 0;
}

#elif 1
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 

int Compare_bit(unsigned int value1, unsigned int value2)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((value1 & 1) != (value2 & 1))
		{
			count++;
		}
		value1 = value1 >> 1;
		value2 = value2 >> 1;
	}
	return count;
}

int main()
{
	int value1 = 0, value2 = 0;
	int sum = 0;
	printf("����������������value1,valu2>");
	scanf_s("%d%d", &value1, &value2);
	sum = Compare_bit(value1, value2);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}
#endif // 0
