#include<stdio.h>
#include<stdlib.h>

#if 0
//��һ����
void Print_table(int n)
{
	int i = 0, j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d * %2d = %2d", j, i, i*j);
			printf(" ");
		}
		printf("\n");
	}

}

int main()
{
	int num = 0;
	printf("�����������ӡ�ĳ˷��ھ�������������num>");
	scanf_s("%d", &num);
	Print_table(num);
	system("pause");
	return 0;
}

#elif 0
//�ڶ�����
void Swap(int* pa, int*pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10, b = 20;
	printf("δ����֮ǰ��a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf("����֮��a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}

#elif 0
//��������
void Is_leap_year(int year)
{
	if ((0 == year % 4 && 0 != year % 100) || (0 == year % 400))
		printf("%d������\n", year);
	else
	{
		printf("%d��������\n", year);
	}
	
}

int main()
{
	int year = 0;
	printf("�����������жϵ����year>");
	scanf_s("%d", &year);
	Is_leap_year(year);
	system("pause");
	return 0;
}

#elif 0
//���ĵ���
//��ʼ������
void Print(int* a, int lengh)
{
	int i = 0;
	for (i = 0; i < lengh; i++)
	{
		printf("%d ", a[i]);
	}
}
void Init(int* a, int lengh)
{
	int i = 0;
	int value = 0;
	printf("����������ŵ�ֵ\n");
	for (i = 0; i < lengh; i++)
	{
		scanf_s("%d", a+i);
	}
	printf("��ʼ���ɹ���\n");
	Print(a, lengh);
}
//�������
void empty(int* a, int lengh)
{
	//Ĭ��0Ϊ���ֵ
	int i = 0;
	for (i = 0; i < lengh; i++)
	{
		a[i] = 0;
	}
	printf("������!\n");
	Print(a, lengh);
}
//����
void reverse(int* a, int lengh)
{
	int* p = a;
	int* p_top = a;
	int* p_end = a + lengh - 1;
	for (p_top, p_end; p_top < p_end; p_top++, p_end--)
	{
		int tmp = 0;
		tmp = *p_top;
		*p_top = *p_end;
		*p_end = tmp;
	}
	Print(p, lengh);
}
void menu()
{
	printf("****** 1����ʼ��   *******\n");
	printf("****** 2���������  *******\n");
	printf("****** 3���������  ******\n");
	printf("****** 4���˳�     ******\n");
}

int main()
{
	int i = 1;
	int a[10];
	int choice = 0;
	int lengh = sizeof(a) / sizeof(a[0]);
	printf("tip: һ��ֻ��3���������Ŷ��������䣡\n");
	do
	{
	
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			//��ʼ������
			Init(a, lengh);
			i++;
			break;
		case 2:
			//�������
			reverse(a, lengh);
			i++;
			break;
		case 3:
			//���
			empty(a, lengh);
			i++;
			break;
		default:
			//����ȷ���봦��
			printf("�Ƿ����룬����������\n");
			break;
		}
		printf("\n");
		
		if (4 == i)
			choice = 4;

	} while (choice != 4);
	system("pause");
	return 0;
}

#elif 1
//�������
void Is_prime(int value)
{
	int i = 0;
	for (i = 2; i < value; i++)//i < sqrt(value)
	{
		if (value%i == 0)
		{
			printf("%��������\n",value);
			return;
		}
	}
	printf("%d������\n",value);
}
int main()
{
	int value = 0;
	printf("�����������жϵ�ֵvalue>");
	scanf_s("%d", &value);
	Is_prime(value);
	system("pause");
	return 0;
}
#endif // 0
