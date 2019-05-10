/*
	д���ݽṹ-���Ա�-2-upgrade
*/
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define INCREAMENT 10
typedef int Elemtype;
typedef int Status;

typedef struct {
	Elemtype *data;
	int lengh;
	int listsize;
}Sqlist;

//��ʼ�����Ա�
void Initlist(Sqlist &L)//����
{
	L.data = (Elemtype *)malloc(MAXSIZE * sizeof(Elemtype));
	if (!L.data)
		exit(0);
	L.lengh = 0;
	L.listsize = MAXSIZE;
}
//��ʼ��Ԫ��
void Creatlist(Sqlist &L)
{
	if (!L.data)
		exit(0);
	Elemtype a = 0;
	int i = 0;
	printf("��������ֵ����-1��������洢!\n");
	scanf_s("%d", &a);
	while (a != -1)
	{
		L.data[i++] = a;
		L.lengh++;
		scanf_s("%d", &a);
	}
}

void output_list(Sqlist L)
{
	int i = 0;
	for (i = 0; i < L.lengh; i++)
	{
		printf("%d ", L.data[i]);
	}
	printf("\n���Ա�ĵĳ���Ϊlengh: %d\n", L.lengh);

}

//���Ԫ��
void listinsert(Sqlist &L, int i, int value)
{
	if (!L.data)
		exit(0);
	if (i<1 || i>L.lengh + 1)
		exit(0);
	if (L.lengh >= L.listsize)
	{
		Elemtype *newbase = (Elemtype *)malloc((MAXSIZE + INCREAMENT) * sizeof(Elemtype));
		if (!newbase)
			exit(0);
		L.data = newbase;
		free(newbase);
		L.listsize += INCREAMENT;
	}
	Elemtype *q = &L.data[i - 1];
	for (Elemtype *p = &L.data[L.lengh - 1]; p >= q; p--)
		*(p + 1) = *p;
	*q = value;
	L.lengh++;
}

//ɾ��Ԫ��
void listdelete(Sqlist &L, int i)
{
	if (!L.data)
		exit(0);
	if (i<1 || i>L.lengh)
		exit(0);
	Elemtype *q = &L.data[i - 1];//���ҵ���ɾ����λ���±�
	printf("��%d��λ�ñ�ɾ����ֵΪ%d\n", i, *q);
	q++;
	for (Elemtype *p = &L.data[L.lengh - 1]; q < p; q++)
		*(q - 1) = *q;
	L.lengh--;

}

//ð������
void bubble_sort(Sqlist &L)
{
	for (int i = 0; i < L.lengh - 1; i++)
	{
		for (int j = 0; j < L.lengh - i - 1; j++)
		{
			if (L.data[j] > L.data[j + 1])
			{
				Elemtype temp = 0;
				temp = L.data[j + 1];
				L.data[j + 1] = L.data[j];
				L.data[j] = temp;
			}
		}
	}

}

//���ֲ���
void binary_seek(Sqlist L, int value)
{
	int left = 0;
	int right = L.lengh - 1;
	while (left <= right)
	{
		int temp = (right - left) / 2 + left;
		if (L.data[temp] < value)
			left = temp + 1;
		else if (L.data[temp] > value)
			right = temp - 1;
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d,��%d��λ��\n", temp, temp + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("û���ҵ���,��������û�����ֵ��\n");
	}
}

void Mergelist(Sqlist L, Sqlist L1, Sqlist &L2)
{
	//Initlist(L2);
	Elemtype *pa = L.data, *pa_list = &L.data[L.lengh - 1];
	Elemtype *pb = L1.data, *pb_list = &L1.data[L1.lengh - 1];
	
	
	L2.lengh = L2.listsize = L.lengh + L1.lengh;
	Elemtype *pc = L2.data = (Elemtype *)malloc(L2.lengh * sizeof(Elemtype));//ע��Щ
	
	if (!L2.data)
		exit(0);

	while (pa <= pa_list && pb <= pb_list)
	{
		if (*pa <= *pb)
		{
			*(pc++) = *(pa++);
		}
		else
		{
			*(pc++) = *(pb++);
		}
	}

	while (pa <= pa_list)
		*(pc++) = *(pa++);
	while (pb <= pb_list)
		*(pc++) = *(pb++);
}

void meun()
{
	printf("*********** 1����ʼ�����Ա�       ************\n");
	printf("*********** 2���������Ա�         ************\n");
	printf("*********** 3����ӡ���Ա�ͱ��� ************\n");
	printf("*********** 4�����Ԫ��           ************\n");
	printf("*********** 5��ɾ��Ԫ��           ************\n");
	printf("*********** 6������bubble_sort��************\n");
	printf("*********** 7�����ң�binary_seek��************\n");
	printf("*********** 8���˳�               ************\n");
}
int main()
{
	Sqlist L;
	Sqlist L1;
	Sqlist L2;

	Initlist(L);//��ʼ�����Ա�
	Initlist(L1);
	
	printf("L1���Ա���:\n");
	Creatlist(L);//�������Ա�
	printf("L1���Ա���:\n");
	Creatlist(L1);

	output_list(L);//������Ա�
	output_list(L1);
	Mergelist(L, L1, L2);
	output_list(L2);

	free(L.data);
	free(L1.data);
	free(L2.data);

	////���Ԫ��
	//Elemtype value = 0;
	//int i = 0;
	//printf("��������������λ�úͲ����ֵ>");
	//scanf_s("%d %d", &i, &value);
	//listinsert(L, i, value);
	//output_list(L);//������Ա�
	//
	////ɾ��Ԫ��
	//printf("����������ɾ����λ��>");
	//scanf_s("%d", &i);
	//listdelete(L, i);
	//output_list(L);//������Ա�
	//
	////ð������
	//bubble_sort(L);
	//output_list(L);//������Ա�
	//
	////���ֲ���
	//printf("������������ҵ�ֵvalue>");
	//scanf_s("%d", &value);
	//binary_seek(L, value);

	//int input = 0;
	//int i = 0;
	//Elemtype value = 0;

	//do
	//{
	//	//ѭ����
	//	meun();//�˵�

	//	printf("\n��ѡ��>");
	//	scanf_s("%d", &input);

	//	switch (input)
	//	{
	//	case 1:
	//		//1���������Ա�
	//		Sqlist L;
	//		Initlist(L);
	//		printf("��ʼ���ɹ���\n");
	//		break;
	//	case 2:
	//		//�������Ա�
	//		Creatlist(L);
	//		break;
	//	case 3:
	//		//��ӡ���Ա�ͱ� 
	//		output_list(L);//������Ա�
	//		break;
	//	case 4:
	//		//���Ԫ��
	//		printf("��������������λ�úͲ����ֵ>");
	//		scanf_s("%d %d", &i, &value);
	//		listinsert(L, i, value);
	//		break;
	//	case 5:
	//		//ɾ��Ԫ��
	//		printf("����������ɾ����λ��>");
	//		scanf_s("%d", &i);
	//		listdelete(L, i);
	//		break;
	//	case 6:
	//		//����(bubble_sort)
	//		bubble_sort(L);
	//		break;
	//	case 7:
	//		//����(binary_seek)
	//		printf("������������ҵ�ֵvalue>");
	//		scanf_s("%d", &value);
	//		binary_seek(L, value);
	//		break;
	//	case 8:
	//		//�˳�
	//		free(L.data);
	//		break;
	//	default:
	//		printf("�Ƿ����룡��������ѡ��>");
	//		scanf_s("%d", &input);
	//		break;
	//	}
	//	printf("\n");

	//} while (8 != input);


	system("pause");
	return 0;
}