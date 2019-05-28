#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;

typedef struct Node {
	Elemtype data;
	struct Node *next;
}LNode,*LinkList;

//��������
void Create_NList(LinkList &L)
{
	//���������������ڵ�
	L = (LinkList)malloc(sizeof(LNode));
	L->data = 0;
	L->next = NULL;
	LinkList head = L;
	int number = 0;
	printf("Input the node numbers> ");
	scanf_s("%d", &number);
	for (int i = 0; i < number; i++)
	{
		LinkList p = (LinkList)malloc(sizeof(LNode));
		scanf_s("%d", &p->data);
		p->next = head->next;
		head->next = p;
		head = p;
		L->data++;
	}

}

//��ӡ�ڵ��������
void Input_Node(LinkList L)
{
	//���������ȷ��
	LinkList head = L->next;
	while (head != NULL)
	{
		printf("%d  ", head->data);
		head = head->next;
	}
	printf("\n����ĳ���Ϊ%d\n", L->data);
}
//���Ԫ��
void List_insert(LinkList &L, int i, Elemtype &e)
{
	//����Ҫ�жϲ���λ���Ƿ���ȷ,ͬʱ�ҵ��ô��ڵ�
	LinkList head = L;
	int j = 0;//������
	while (head && j < i - 1)
	{
		head = head->next;
		j++;
	}
	if (!head || j > i - 1)
		exit(0);//����λ�ò�����
	LinkList p = (LinkList)malloc(sizeof(LNode));
	p->data = e;
	p->next = head->next;
	head->next = p;
	L->data++;//����1
}
//ɾ��Ԫ��
void List_delete(LinkList &L, int i)
{
	//����Ҫ�жϲ���λ���Ƿ���ȷ,ͬʱ�ҵ��ô��ڵ�
	LinkList head = L;
	int j = 0;
	while (head->next && j < i - 1)
	{
		head = head->next;
		j++;
	}
	if (!head || j > i - 1)
		exit(0);
	LinkList p = head->next;
	head->next = p->next;
	L->data--;
	printf("ɾ����ֵΪ%d\n", p->data);
	free(p);
	p = NULL;

}
//�˵�
void meun()
{
	printf("*********** 1���������Ա�         ************\n");
	printf("*********** 2����ӡ����ͱ���   ************\n");
	printf("*********** 3�����Ԫ��           ************\n");
	printf("*********** 4��ɾ��Ԫ��           ************\n");
	printf("*********** 5���ϲ�ΪL2           ************\n");
	printf("*********** 6��ɾ��               ************\n");
}

//����Ԫ��
void Get_node(LinkList L, int i)
{
	LinkList head = L;
	int j = 0;
	while (head && j < i)
	{
		head = head->next;
		j++;
	}
	if (!head || j > i)
		exit(0);
	printf("��%d��Ԫ�ص�ֵΪ%d", i, head->data);
}

void hebing_Node(LinkList L, LinkList L1, LinkList &L2)
{
	L2 = L1;
	LinkList pa = L->next;
	LinkList pb = L1->next;
	LinkList pc = L2;
	while (pa && pb)
	{
		if (pa->data <= pb->data)
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
		
		/*pc->next = pa ? pa : pb;*/
		while (pa != NULL)
			pc->next = pa;
		while (pb != NULL)
			pc->next = pb;

	}
	
	L2->data = L->data + L1->data;
	/*free(L1);
	L1 = NULL;*/
}


int main()
{
	LinkList L;
	LinkList L1;
	LinkList L2;
	int i = 0;
	Elemtype e = 0;
	Create_NList(L);
	Input_Node(L);
	Create_NList(L1);
	Input_Node(L1);
	hebing_Node(L, L1, L2);
	printf("%d", L2->data);
	Input_Node(L2);

	/*printf("������L��������λ�ú�ֵ> ");
	scanf_s("%d%d", &i, &e);
	List_insert(L, i, e);
	Input_Node(L);

	printf("������L1��������λ�ú�ֵ> ");
	scanf_s("%d%d", &i, &e);
	List_insert(L1, i, e);
	Input_Node(L1);

	printf("����������ɾ����λ��> ");
	scanf_s("%d", &i);
	List_delete(L, i);
	Input_Node(L);

	printf("������������ҵ�λ��>");
	scanf_s("%d", &i);
	Get_node(L, i);*/


	//LinkList L = NULL;
	//LinkList L1 = NULL;
	//LinkList L2 = NULL;
	//int input = 0;//ѡ��
	//int i = 0;//�±�
	//int choice = 0;//ѡ��
	//Elemtype e = 0;//����ֵ

	//do
	//{
	//	//ѭ����
	//	meun();//�˵�

	//	printf("\n��ѡ��>");
	//	scanf_s("%d", &input);

	//	switch (input)
	//	{
	//	case 1:
	//		//��������

	//		printf("��ѡ�񴴽�1��L��2��L1\n");
	//		scanf_s("%d", &choice);
	//		if (1 == choice)
	//			Create_NList(L);
	//		else
	//			Create_NList(L1);
	//		break;
	//	case 2:
	//		//��ӡ����ͳ���
	//		printf("��ѡ���ӡ����ͱ�1��L��2��L1\n");
	//		scanf_s("%d", &choice);
	//		if (1 == choice)
	//			Input_Node(L);
	//		else
	//			Input_Node(L1);
	//		break;
	//	case 3:
	//		//���Ԫ��
	//		printf("��ѡ�����Ԫ��1��L��2��L1\n");
	//		scanf_s("%d", &choice);
	//		if (1 == choice)
	//		{
	//			printf("��������������λ�ú�ֵ> ");
	//			scanf_s("%d%d", &i, &e);
	//			List_insert(L, i, e);
	//		}
	//		else
	//		{

	//			printf("��������������λ�ú�ֵ> ");
	//			scanf_s("%d%d", &i, &e);
	//			List_insert(L1, i, e);
	//		}
	//		break;
	//	case 4:
	//		//ɾ��Ԫ��
	//		printf("��ѡ��ɾ��Ԫ��1��L��2��L1\n");
	//		scanf_s("%d", &choice);
	//		if (1 == choice)
	//		{
	//			printf("����������ɾ����λ��> ");
	//			scanf_s("%d", &i);
	//			List_delete(L, i);
	//		}
	//		else
	//		{

	//			printf("����������ɾ����λ��> ");
	//			scanf_s("%d", &i);
	//			List_delete(L, i);
	//		}
	//		break;
	//	case 5:
	//		//�ϲ�
	//		hebing_Node(L, L1, L2);
	//		Input_Node(L2);
	//		break;
	//	case 6:
	//		//�˳�
	//		break;
	//	default:
	//		printf("�Ƿ����룡��������ѡ��>");
	//		scanf_s("%d", &input);
	//		break;
	//	}
	//	printf("\n");

	//} while (6 != input);




	
	system("pause");
	return 0;
}