#include<stdio.h>
#include<stdlib.h>


#if 0
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

int fib(int n)
{
	if (n <= 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	// 1 1 2 3 5 8 13 21 34 55
	int i = 1, j = 1;
	int num = 0;
	int value = 0;
	printf("������������ĵڼ�λ��쳲���������>");
	scanf_s("%d", &num);
	printf("���ǵݹ����ʵ��:\n");
	value = fib(num);
	printf("value = %d\n", value);
//----------------------------------------
	printf("�������Ƿǵݹ�ʵ�֣�\n");
	
	if (num <= 2)//�ж�num<2�����
		printf("value = %d\n", i);
	else 
	{
		int a = 1, b = 1;
		value = 0;
		for (i = 0; i < num - 2; i++)
		{
			value = a + b;
			a = b;
			b = value;
		}
		printf("value = %d\n", value);
	}

	system("pause");
	return 0;
}

#elif 0
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
double Calculate_power(int value, int power)
{
	//powerλΪ���ݽ����Ĵη������������- 0 +
	if (power < 0)
	{
		if (power == -1)
			return 1.0 / value;
		return  1.0 / value * Calculate_power(value, power + 1);
	}
	else if (power == 0)
	{
		return 0.0;
	}
	else
	{
		if (power == 1)
			return value * 1.0;
		return 1.0 * value * Calculate_power(value, power - 1);
	}

}

int main()
{
	int value = 0, power = 0;
	double acc_value = 0.0;
	printf("��������������ֵ�Ͷ��ٴη�value��power>");
	scanf_s("%d%d", &value, &power);
	acc_value = Calculate_power(value, power);
	printf("acc_value = %f\n", acc_value);
	system("pause");
	return 0;
}
#elif 0
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
int sum = 0;

int DigitSum(int n)
{
	int sum = 0;
	if (n != 0)
	{
		//(1729)
		//(172) 9
		//(17) 2 9
		//(1) 7 2 9
		sum = DigitSum(n / 10) + n % 10;
	}
	return sum;
}


int main()
{
	int value = 0;
	int sum = 0;
	printf("������Ǹ�����value>");
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

int my_strlen(char* s)
{
	if (*s == '\0')
		return 0;
	return 1 + my_strlen(s + 1);
}
void reverse_string(char* s)
{
	int lengh = my_strlen(s);//����ʹ��strlen()���������ǹ���һ��
	
	if (lengh <= 1)
		return;
	else
	{
		int tmp = s[0];
		s[0] = s[lengh - 1];
		s[lengh - 1] = 0;
		reverse_string(s + 1);
		s[lengh - 1] = tmp;
	}
}

int main()
{
	char *s[20];
	printf("��������������ַ�>");
	scanf_s("%s", s, 20);//scanf()��getchar()�����ո��Ʊ����Tab���жϣ����Բ���gets()�洢
	printf("����֮ǰ��s = %s\n", s);
	reverse_string(s);//���ú���
	printf("����֮��s = %s\n",s);
	system("pause");
	return 0;
}

#elif 0
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
int my_strlen(char* s)
{
	if (*s == 0)
		return 0;
	return 1 + my_strlen(s + 1);
}

int my_strlen1(char* s)
{
	int sum = 0;
	while (*(s++) != 0)
	{
		sum++;
	}
	return sum;
}

int main()
{
	char *s[20];
	int sum1 = 0;
	int sum2 = 0;
	printf("��������������ַ�>");
	scanf_s("%s", s, 20);//scanf()��getchar()�����ո��Ʊ����Tab���жϣ����Բ���gets()�洢
	printf("s = %s\n", s);
	sum1 = my_strlen(s);
	printf("�ݹ����: sum1 = %d\n", sum1);

	sum2 = my_strlen1(s);
	printf("�ǵݹ����: sum2 = %d\n", sum2);
	system("pause");
	return 0;
}

#elif 0
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
int fac(int n)
{
	if (n == 1)
		return 1;
	return n * fac(n - 1);
}

int fac1(int n)
{
	int sum = 1;
	while (n >= 1)
	{
		sum *= n--;

	}
	return sum;
}

int main()
{
	int value = 0;
	printf("�����������������Ľ׳�value>");
	scanf_s("%d", &value);
	printf("�ݹ����: value�Ľ׳�Ϊ%d\n", fac(value));
	
	printf("�ǵݹ����: value�Ľ׳�Ϊ%d\n", fac1(value));
	system("pause");
	return 0;
}

#elif 1
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void Print(int n)
{
	if (n > 9)
	{
		Print (n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int value = 0;
	printf("�����������ӡ��ֵvalue>");
	scanf_s("%d", &value);
	Print(value);
	system("pause");
	return 0;
}
#endif // 0
