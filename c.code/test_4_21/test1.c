/*
	�������C���Ե���ƪ
	time��2019-4-21
*/

#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//λ����& ����λ�룩 ��|����λ�򣩣�^����λ��򣩡�
//	//������ԭ��=����=����  ��������ͬ��������Ȼ���һ���ڲ���
//	//��ʾ����Դ������Ľ���������ڴ�洢����ʽ�ǰ�����洢��!!
//	int a = 3;
//	int b = 5;
//	//3 ��Ӧ�Ķ�������011 5��Ӧ����101
//	int c = a & b;//������һ��Ϊ�㣬��Ϊ�㣬001
//	printf("c = %d\n", c);
//	c = a | b;//������һ��Ϊ1����Ϊ1��111
//	printf("c = %d\n", c);
//	c = a ^ b;//��ͬ��Ϊ0����ͬ��Ϊ1
//	printf("c = %d\n", c);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	// << ���ƣ�>> ���� ��
//	//<< ����
//	int a = 2;
//    int b = 1<<a;//������һ��������һ��
//	printf("b = %d\n", b);
//	b = a >> 1;
//	printf("b =%d\n", b);//1010 >> 101Ϊ 1*2^0+1*2^2=5
//	//��������
//	//�ұ߶�������߲�ԭ����λ
//	//�߼�����
//	//�ұ߶�������߲�0
//	
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int array_int[10];
//	int lengh = sizeof(array_int) / sizeof(int);
//	//�������Է���ļ�������ĳ���
//	system("pause");
//	return 0;
//}
int main()
{
	//���������Ĵ���
	//������ֻ�ܱ�1��������������������Ĳ��ܳ�
	int i = 0;
	int count = 0;

	for(i=101; i<=200; i+=2)
	{
		//printf("%d ", i);
		//�ж�i�Ƿ�Ϊ����
		int j = 0;
		//sqrt(i)��i��ƽ��
		for(j=2; j<=sqrt(i); j++)
		{
			if(i%j==0)
				break;
		}
		if(j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	system("pause");
	return 0;
}