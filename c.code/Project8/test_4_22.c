/*
	���Ĵ�C������ҵ
*/

#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10] = { 10,20,30,40,50,60,70,80,90,100 };
//	int temp = 1, lengh = sizeof(a) / sizeof(int);
//	int i = 0;
//	for (i=0; i < lengh; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	printf("����a: ");
//	for (i=0; i < lengh; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n����b: ");
//	for (i=0; i < lengh; i++)
//	{
//		printf("%d ", b[i]);
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
//	double sum = 0.0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1) //
//		{
//			sum += 1.0 / i;
//		}
//		else if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//	}
//
//	printf("���Ϊ��%lf", sum);
//	system("pause");
//	return 0;
//}

int main()
{
	//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((9 == i % 10) || (9 == i / 10))
			count++;
	}
	printf("count = %d\n", count);
	system("pause");
	return 0;
}
