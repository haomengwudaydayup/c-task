#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


#if 0
//unsigned int reverse_bit(unsigned int value); 
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��

unsigned int reverse_bit(unsigned int value)
{
	//00000000000000000000000000000111  - 7
	//00000000000000000000000000000001  - 0
	//00000000000000000000000000000010
	
	int i = 0;
	unsigned int j = 0;
	for (i = 0; i <= 31; i++)
	{
		j = j | ((value >> i) & 1);
		if(i < 31)
			j = j << 1;
	}
	return j;
}

int main()
{
	//0111
	int value = 0;
	unsigned int value1 = 0;
	printf("������>");
	scanf_s("%d", &value);
	value1 = reverse_bit(value);
	printf("value = %d\nvalue1 = %ld\n", value, value1);
	system("pause"); 
	return 0;
}

#elif 0
//2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 

int main()
{
	int a = 4; //0100
	int b = 10;//1010
			   //0000 &
			   //1110 ^
	           //0111 >>1
	int avg = (a & b) + (a ^ b) >> 1;
	//����==��2 ��������==��2
	printf("avg = %d\n", avg);
	system("pause");
	return 0;
}

#elif 0
//3.���ʵ�֣� 
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ����ҳ�������֡���ʹ��λ���㣩
void Print(int *a, int len, int *x, int *y)
{
	//ʵ���������������ͬ����
	int i = 0;
	int value = 0;
	int count = 0;
	//��ò�ͬ��ֵ����ֵ
	for (i = 0; i < len; i++)
	{
		value = value ^ a[i];
	}
	//������ֵ�ļ�ȨλΪ1
	for (i = 0; i < 31; i++)
	{
		//0101
		//1001
		//1100//2
		if ((value >> i) & 1 == 1)
			break;
		count++;
	}

	for (i = 0; i < len; i++)
	{
		if ((a[i] >> count) & 1 == 1)
		{
			(*x) = (*x) ^ a[i];
		}
		else
			(*y) = (*y) ^ a[i];
	}
}
int main()
{
	//������ͬ�������ֵλ0��
	int a[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5 };
	int a1[] = { 1,1,2,2,3,3,4,4,5,9 };
	int x = 0, y = 0;
	int len = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int value = 0;
	for (i = 0; i < len; i++)
	{
		value = value ^ a[i];
	}
	printf("value = %d\n", value);
	printf("\n");
	len = sizeof(a1) / sizeof(a1[0]);
	Print(a1, len, &x, &y);
	printf("x = %d, y = %d\n", x, y);
	system("pause");
	return 0;
}

#elif 0
//δ���
//��һ���ַ����������Ϊ:"student a am i", 
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
int My_strlen(char *s)
{
	int count = 0;
	/*while (*s != '\0')
	{
		count++;
	}*/
	return 14;
}

void str_reverse(char *s)
{
	int len = My_strlen(s) - 1;
	int i = 0;
	for (i, len; i < len; i++, len--)
	{
		char tmp = 0;
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}

}
int main()
{
	char str[20] = "student a am i";
	printf("%s\n", str);
	str_reverse(str);
	printf("��ת��:\n");
	printf("%s\n", str);
	system("pause");
	return 0;
}
#endif // 0

