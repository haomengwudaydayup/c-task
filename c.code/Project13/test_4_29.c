/*
	test_4_29 -- C������ϰ
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//int main()
//{
//	//һ��������ֵ������һ�������ַ���
//	int a = 10, b = 20;
//	
//	//1��������ʱ����c
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//
//	//2�����üӼ��˳����н���
//	a = a + b;//30
//	b = a - b;//30 - 20
//	a = a - b;//30 - 10
//
//	//3����������������
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//ʱ���ʱ��1970��1��1�ŵ�����ʱ�������
//	//32λNUIXʱ��������õ�-��������ʱ��2038��01��19��03ʱ14��07��
//	
//	//ʹ�������rand() ,ʹ����ʱҪʹ��srand()//�������
//	//rand()�����λ0-RAND_INX�� 
//	srand((unsigned int) time(NULL));//�������
//	for (int i = 0; i < 5; i++)
//	{
//		//rand()%11  λ0-10
//		//rand()%11+2 λ2-12
//		printf("%d\n", rand()%11+2);
//	}
//	 
//	system("pause");
//	return 0;
//
//}

int main()
{
	//���Լ������
	/*
		���Լ��λ24 16 �����ܱ��������д��ֵ
		���Բ���շת�����������
	*/
	int m = 1, n = 1;
	int k = 0;
	printf("��������Ҫ�����Լ����������m ��n: \n");
	scanf_s("%d%d", &m, &n);//����˭��˭С������
	while (k = m % n)
	{
		//m=24  n=18  k=24%18=16  m=n.n=k ���kΪ���˳���nΪ���Լ��
		m = n;
		n = k;
	}
	printf("���Լ��λ%d\n", n);
	system("pause");
	return 0;
}