/*
	test_4_30.c �������ϰ
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

//void menu(void)
//{
//	//��ӡ��ϷĿ¼
//	printf("*******************************\n");
//	printf("*********** 1��play ***********\n");
//	printf("*********** 0��exit ***********\n");
//	printf("*******************************\n");
//}
//
//void games(void)
//{
//	//��Ϸ�淨����
//	/*
//		1�����������
//		2���û�����һ���������£��¶����˳�ѭ�����´�����ʾ
//	*/
//	
//	//�û������ֵ
//	int choice = 1;
//	int ret = 1;
//	
//	srand((unsigned int)time(NULL));//������㣬������������
//	ret = rand() % 10 + 1;//��������������
//
//	printf("���������ֵ>");
//	
//	
//	//��Ϸѭ����
//	while (1)
//	{
//		scanf_s("%d", &choice);
//		if (choice < ret)
//		{
//			printf("��С��!\n");
//			printf("����������>");
//		}
//		else if (choice > ret)
//		{
//			printf("�´���!\n");
//			printf("����������>");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	
//	}
//}
//
//int main()
//{
//	int input = 1;
//	//���ȹ���һ��ѭ����������һ���˵���1���ǲ����֣�0���˳���Ϸ
//	do
//	{
//		//��ӡһ���˵�
//		menu();
//		printf("��1��ʼ��Ϸ����0������Ϸ>");
//		scanf_s("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			//����Ϸ��������
//			games();
//			break;
//		case 0:
//			//��Ϸ�������˳�
//			printf("��Ϸ�˳���\n");
//			break;
//		default:
//			//����ȷѡ��������ѡ��
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);//input == 0 ���˳�ѭ��
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//дһ���ػ�ϵͳ
//	char ch[20] = { 0 };//����һ���ַ������飬����ַ���
//	printf("������������������Խ���һ���Ӻ�ػ���\n");
//	system("shutdown -s -t 60");
//	scanf_s("%s", ch,sizeof(ch));
//	while (1)
//	{
//		if (strcmp(ch, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("С����^_^�����ѽ����\n");
//			break;
//		}
//		else
//		{
//			printf("������������������Խ���һ���Ӻ�ػ���\n");
//			scanf_s("%s", ch, sizeof(ch));
//		}
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	//��һ���ܼ�������0-99999������ˮ�ɻ�����
	//��IT�У���������Ҫ��ȫ��Ҫ��Զ����
	int i = 0;
	for (i = 0; i < 10000000; i++)//һǧ����һ��ѭ��
	{
		int count = 1;
		int temp = i;
		int sum = 0;
		//1���ȼ���λ��-N
		
		while(temp /= 10)//temp=0ʱ�˳�
		{
			count++;
		}

		temp = i;//temp�ٸ�ֵ
		
		//2������ÿ��λ����N�η���
		while (temp)
		{
			sum += pow(temp % 10, count);
			temp = temp / 10;
		}
		if (i == sum)
		{
			printf("%d ", sum);
		}
	}
	system("pause");
	return 0;
}