/*
	���ݽṹ-����
*/
#include<stdio.h>
#include<stdlib.h>

typedef int Elemtype;
typedef int Status;

typedef struct LNode {
	Elemtype data;
	struct LNode *next;
}LNode, * LinkList;

void Create_NList(LinkList &L)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	L->data = 0;
	LinkList head = L;
	int count = 0;//������
	printf("Input the node number: ");
	scanf_s("%d", &count);
	for (int i = count; i > 0; i--)
	{
		LinkList p = (LinkList)malloc(sizeof(LNode));//�����ڵ�
		scanf_s("%d", &p->data);
		head->next = p;
		head = p;//β�巨-���½ڵ�嵽������ı�β��
		L->data++;//��ͷ�ڵ�data��ű�
	}
	head->next = NULL;
	
	//{
	//	p->next = head->next;
	//	head->next = p->next;//ͷ�巨
	//}
	//return 1;
}

void Input_Node(LinkList &L)
{
	LinkList head = L->next;
	while (head->next != NULL)
	{
		printf("%d  ", head->data);
		head = head->next;
	}
	printf("%d", head->data);
	
	printf("\n������Ϊ%d\n", L->data);
}

void Get_Node(LinkList L, int i)
{
	LinkList p = L->next;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}//�ҵ����ҵ�λ��

	if (!p || j > i)
		exit(0);

	printf("��%d��Ԫ�ص�ֵΪ%d\n", i,p->data);
}

void Listinsert_N(LinkList &L, int i, Elemtype &e)
{
	LinkList head = L;
	int j = 0;
	while (head && j < i - 1)//�ҵ���ӵ�ǰһ���ڵ�
	{
		head = head->next;
		j++;
	}
	if (!head || j > i - 1)
		exit(0);
	LinkList p = (LinkList)malloc(sizeof(LNode));//������ӽڵ�
	p->data = e;//�洢ֵ
	p->next = head->next;
	head->next = p;
	L->data++;
}

void Listdelete_N(LinkList &L, int i)
{
	int j = 0;
	LinkList head = L;
	while (head && j < i - 1)
	{
		head = head->next;
		j++;//�ҵ�i��λ��
	}
	while (!head || j > i - 1)
		exit(0);
	LinkList p = head->next;
	head->next = p->next;
	L->data--;
	free(p);
}
int main()
{
	LinkList L;
	int i = 0;
	int e = 0;
	Create_NList(L);
	Input_Node(L);

	printf("������������ҵ�λ��i>>");
	scanf_s("%d", &i);
	Get_Node(L, i);
	//Input_Node(L);

	printf("������������ӵ�λ�ú���ӵ�ֵ>");
	scanf_s("%d%d", &i, &e);
	Listinsert_N(L, i, e);
	Input_Node(L);
	
	printf("����������ɾ����λ��>");
	scanf_s("%d", &i);
	Listdelete_N(L, i);
	Input_Node(L);


	free(L);
	system("pause");
	return 0;
}