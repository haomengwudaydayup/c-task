#include<stdio.h>
#include<stdlib.h>
int main()
{
	//��ӡ100-200����������
	int i,j,k;
	printf("��ӡ100-200��������������:\n");
	for (i=100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)//�ж�i�Ƿ�j����
			break;
		}
		if (i == j)
		{
			printf("%d\t", i);
		}
			
	}
	//��ӡ�˷��ھ���
	printf("\n\n");
	printf("��ӡ�˷��ھ���:\n");
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%2d*%2d = %2d  ", j, i, i*j);
		printf("\n");
	}
	//�ж�1000��--2000��֮�������
	printf("\n1000��--2000��֮�����������:\n");
	for ( k = 1000; k <= 2000; k++)
	{
		if ((0 == k % 4 && 0 != k % 100) || 0 == k % 400)
			printf("%d\t", k);
	}
	printf("\n");
	system("pause");
	return 0;
}