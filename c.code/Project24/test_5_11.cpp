#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#if 0
//�ݹ��ӡ1 2 3 4.
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}

int main()
{
	int n = 1024;
	print(n);
	system("pause");
	return 0;
}

#elif 0

int main()
{
	char at;
	int choice = 0;
	int ret = 0;
	srand((unsigned int)time(NULL));//��������
	ret = rand() % 11 + 1;
	printf("����������ŵ�ֵchoice>");
	
	//ѭ����
	while (1)
	{
		//%fֻ��С����һλ���ڶ�λС��������û��
		scanf_s("%d", &choice);//%d���������֣������ַ������ܡ�
		while(getchar() != '\n');//����һ���ַ��������ַ�
		//���������Բ����������ҵ��ַ��Ե㣬ֱ��\n�Ͳ�����
		//���ѭ��������Ч��������������ѭ��
		if (choice < ret)
			printf("��С��!\n");
		else if (choice > ret)
			printf("�´��ˣ�\n");
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}

	}
	system("pause");
	return 0;
}

#elif 0
//��������ʹ�ú�������һЩ����
void Swap(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}//�������������ɽ�������Ϊx,y��������a,b����
//���ǿ��Բ�ȡ�Ĵ��ݵ�ַ�ʹ���ԭַ������ʹ�����ý���
void Swap1(int& x, int& y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
void Swap2(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d\n", a, b);
	//Swap(a, b);
	//Swap1(a, b);
	Swap2(&a, &b);
	printf("a = %d,b = %d\n", a, b);
	system("pause");
	return 0;
}
#elif 1
//�������ؽ�������������������п���Ƕ�׺�����Ҳ���Եݹ�
int main()
{
	printf("%d", printf("%d", printf("%d", printf("%d", 456))));
	//printf()�����ķ���ֵΪ������ĸ���
	system("pause");
	return 0;
}
#endif