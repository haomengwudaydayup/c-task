#include<stdio.h>
#include<stdlib.h>
#include<math.h>
////1.��ӡ����
//int  main()
//{
//	int i = 1, j = 1, k = 1;//��ʼ��3���������п���ѭ��
//	for (i = 1; i <= 13; i++)
//	{
//		if (i <= 7)
//		{
//			for (j = i; j <= 6; j++)
//			{
//				printf(" ");
//			}
//			for (k = 1; k <= 2 * i - 1; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		else
//		{//i=8
//			for (j = 1; j <= i - 7; j++)
//			{
//				printf(" ");
//			}
//			
//			for (k = 1; k <= 13 - 2 * (i - 7); k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

////2.���0��999֮������С�ˮ�ɻ������������
//int main()
//{
//	//ˮ�ɻ�������Ϊ3λ��
//	//3λ��ÿλ����3�η���ӵ��ڸ���  ���磺153 = 1^3 + 5^3 + 3^3
//	printf("��100��999֮���ˮ�ɻ���Ϊ:");
//	int i = 1, j = 1, k = 1, m = 1;
//	for (i = 100; i <= 999; i++)
//	{
//		j = i / 100;
//		k = (i / 10) % 10;
//		m = i % 10;
//		if(i == j*j*j + k*k*k + m*m*m)
//			printf("%d ", i);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//3. ��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
int main()
{
	int i = 1;
	int j = 1;
	int a = 1;
	int sum = 0;
	printf("�������������ֵa ��\n");
	scanf_s("%d", &a);
	j = a;
	for (i = 0; i < 5; i++)
	{
		if(i>=1)
			j = j + a * pow(10,i);
		
		sum += j;
	}
	printf("\nsum = %d\n", sum);
	system("pause");
	return 0;
}