/*
	�����C���Կκ���ҵ
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


////��1��
////��Ϸ�˵�
//void meun()
//{
//	printf("******************************\n");
//	printf("*********** 1��play **********\n");
//	printf("*********** 0��exit **********\n");
//	printf("******************************\n");
//}
//
////��Ϸ�����淨
//void game()
//{
//	//���������
//	int ret = 1;
//	int input = 1;
//	
//	srand((unsigned int)time(NULL));//�������
//	ret = rand() % 10 + 1;//����1��10�������
//
//	printf("��Ϸ��ʼ\n");
//	printf("����������ֵ> ");
//	scanf_s("%d", &input);
//
//	//��Ϸ��ϵ
//	while (1)
//	{
//		if (input < ret)
//		{
//			printf("��С��\n");
//			printf("�����²�\n");
//			scanf_s("%d", &input);
//		}
//		else if (input > ret)
//		{
//			printf("�´���\n");
//			printf("�����²�\n");
//			scanf_s("%d", &input);
//		}
//		else
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//��ɲ�������Ϸ
//
//	int input;//�û����������
//
//	//��Ϸ��1��ʼ�������ܹ������棬��0�˳�����
//	do
//	{
//		//��ӡһ���˵�
//		meun();
//		
//		//��Ϸ��ϵ
//		printf("��ѡ��> ");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//��Ϸ�淨����
//			game();//game()��������Ϸ����
//			break;
//		
//		case 0:
//			//�˳���Ϸ
//			printf("�˳���Ϸ\n");
//			break;
//		
//		default:
//			//ѡ�����������ѡ��
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);//��input==0ʱ����Ϸ��ѭ���˳���
//
//	system("pause");
//	return 0;
//}

////��2��
//int binary_sort(int array_int[], int lengh, int value)
//{
//	int left = 0;
//	int right = lengh - 1;
//	while (left <= right)
//	{
//		int temp = (right - left) / 2 + left;
//		if (array_int[temp] < value)
//		{
//			left = temp + 1;
//		}
//		else if(array_int[temp] > value)
//		{
//			right = temp - 1;
//		}
//		else
//		{
//			return temp;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int i = 0;
//	int lengh = 0;
//	int value = 0;
//	int index = 0;
//	int arr_int[10] = { 0 };
//	lengh = sizeof(arr_int) / sizeof(arr_int[0]);
//	printf("����10λ��������\n");
//	//���
//	for (i = 0; i < lengh; i++)
//	{
//		scanf_s("%d", arr_int + i);
//	}
//	//��ӡ
//	for (i = 0; i < lengh; i++)
//	{
//		printf("%d ", *(arr_int + i));
//	}
//	printf("\n������������ҵ�ֵvalue\n");
//	scanf_s("%d", &value);
//	
//	//���ö��ֲ��Һ���,������ֵ
//	index = binary_sort(arr_int, lengh, value);
//	if (index == -1)
//	{
//		printf("��������û������Ҫ��ֵ\n");
//	}
//	else
//	{
//		printf("�±�Ϊ%d����%dλԪ��\n", index,index+1);
//	}
//	
//		system("pause");
//	return 0;
//}

////��3��
//int main()
//{
//	int i = 0;
//	char ch[20];//������hmw123456
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("password: ");
//		scanf_s("%s", ch, 20);
//		if (0 == strcmp(ch, "hmw123456"))
//		{
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

//��4��
int main()
{
	int c = 0;
	char ch = 'a';
	//getchar����ֵΪint��, ��Ϊѭ������ʱΪEOF�ļ�������
	//getchar(ch)��û�иı��ַ�ch��ֵ,ֻ�Ƿ��������ַ���ASCIIֵ
	
	//c = getchar(ch);
	//printf("%d", c);
	//printf("%c", c);
	
	while ((c = getchar(ch)) != EOF)//�����ַ���
	{

		if (c >= 'a' && c <= 'z')//����Сд��ĸ
		{
			putchar(c - 32);
			printf("\n");
		}
		else if (c >= 65 && c <= 90)
		{
			printf("%c\n", c+32);
		}
	}
	system("pause");
	return 0;
}