#include<stdio.h>
#include<stdlib.h>


#if 0
int main()
{

	int n = 7;
	int i = 0;
	//ż��λ��ӡ
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	//����λ��ӡ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");

	system("pause");
	return 0;
}
#elif 0
//��������^��&������������������ͬ��ֵ��������Ƕ��ѭ����
int main()
{
	int arr[] = { 1,3,2,5,5,3,2,7,1,11988 };
	int i = 0;
	int x = 0, y = 0;
	int count = 1;
	int value = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)
	{
		value = value ^ arr[i];
	}
	printf("%d\n", value);

	for (i = 0; i < 32; i++)
	{
		if ((value >> i) & 1 == 1)
		{
			count = i;
			break;
		}
	}

	for (i = 0; i < len; i++)
	{
		if ((arr[i] >> count) & 1 == 1)
		{
			x = x ^ arr[i];
		}
		else
		{
			y = y ^ arr[i];
		}
	}
	printf("x = %d,y = %d\n", x, y);

	system("pause");
	return 0;
}  

#elif 0

#define p_int int*
typedef int *pint;

int main()
{
	//����ָ�룬ָ������
	int a = 10;
	int b = 20;
//	p_int pa = &a;//��Ķ����ǲ����滻���൱��int * pa = &a;
	p_int pa, pb;
	pa = &a;
	pb = &b;//pb��int�ͣ��൱����int *pa,pb; pa��int*,pb��int��
	*pa = 20;

	pint pc, pd;//pc��pd����int*����
	pc = &a;
	pd = &b;
	*pc = 20;
	*pd = 10;

	//��ξ���void *���͵�ָ�룬�����ָ�벻���Խ�����*
	system("pause");
	return 0;
}

#elif 1

int main()
{
	//int *pa = &a, ��ָ�������(*),���ǽ�����int ��С��
	int a = 0x11223344;//1010
	char *pstr = (char*)&a;
	printf("%d\n", a);
	*pstr = 0x99;
	printf("%d\n", a);
	system("pause");
	return 0;
}
#endif // 0

