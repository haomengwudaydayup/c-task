#define _CRT_SECURE_NO_WARNINGS 1
#include<vld.h>
#include"LIST.h"
#if 1

int main()
{
	Node head;
	InitList(&head);		//��ʼ��
	
	//InsertTail(&head, 13);
	//InsertTail(&head, 12);
	//InsertTail(&head, 11);
	//InsertTail(&head, 10);
	//InsertTail(&head, 9);

	/*���뷽ʽ����ƣ�*/
	printf("���ڽ��в������ݵĲ���������β�巨�� ��-1ֹͣ");
	int value = 0;
	printf("\n������>");

	while (value != -1)
	{
		scanf("%d", &value);
		if (value == -1)
			break;
		InsertTail(&head, value);
	}

	Show(&head);

	Node *p = LastKNode(&head, 3);
	printf("\n%d\n", p->data);
	
	/*���Բ���*/
	int position = 0;
	printf("��������������λ�ú�ֵposition, value>");
	scanf("%d %d", &position, &value);
	Insert_any(&head, position, value);
	Show(&head);
	printf("\n");

	/*����ɾ��*/
	printf("����������ɾ����λ��position>");
	scanf("%d", &position);
	Delete_any(&head, position);
	Show(&head);
	printf("\n");

	/*���Բ���*/
	printf("������������ҵ�ֵvalue>");
	scanf("%d", &value);
	Seek_value(&head, value);

	Free_memory(&head);


	system("pause");
	return 0;
}





#elif 1
#include<stdio.h>
#include<stdlib.h>

typedef int elemtype;
typedef int status;

typedef struct lnode//����������
{
	elemtype data;
	struct lnode *next;
} lnode, *linklist;

void createlist(linklist *L, int n)//�����һ���������� 
{
	linklist p;//��������Ա����͵�p 

	*L = (linklist)malloc(sizeof(lnode));
	(*L)->data = -1;
	(*L)->next = NULL;
	printf("���������Ա��ֵ\n");

	for (int i = 1; i <= n; i++)//����ͷ�巨������������ڵ� 
	{
		p = (linklist)malloc(sizeof(lnode));//���ǹ���ڵ� 
		scanf("%d", &p->data);
		p->next = (*L)->next;
		(*L)->next = p;
	}

	printf("��������ֵ\n");   //�����������Ԫ�أ�����ֻ������������������С� 

	for (; p != NULL; p = p->next)
		printf("%d\n", p->data);
}

status listdelete(linklist *L, int i)//���������ɾ�� 
{
	linklist *p, q;
	int j = 1;
	p = L;
	elemtype e;

	while ((*p)->next&&j <= i - 1)
	{
		(*p) = (*p)->next;
		++j;
	}

	if (!(*p)->next)
		return 0;

	q = (*p)->next;
	(*p)->next = q->next;
	e = q->data;
	printf("ɾ����ֵΪ��%d\n", e);
	free(q);


	linklist a;

	a = *L;

	printf("��������ֵ��\n");
	for (; a != NULL; a = a->next)
		printf("%d\n", a->data);

	return 1;
}

status listinsert(linklist *L, int i, int e)
{
	linklist p, s;
	p = *L;
	int j = 1;
	while (p&&j < i - 1)
	{
		p = p->next;
		j++;
	}

	if (!p || j > i - 1)
		return 0;

	s = (linklist)malloc(sizeof(lnode));
	s->data = e;
	s->next = p->next;
	p->next = s;


	linklist a;
	a = *L;

	printf("��������ֵ��\n");
	for (; a != NULL; a = a->next)
		printf("%d\n", a->data);

	return 1;
}

main()
{

	linklist L;		//����һ���ṹ��ָ��
	int n;
	printf("������������������ĳ���Ϊ:\n");
	scanf("%d", &n);
	createlist(&L, n);

	int m;
	printf("����ɾ��Ԫ�ص�λ��:\n");
	scanf("%d", &m);
	listdelete(&L, m);

	int a, b;
	printf("�������Ԫ�ص�λ�ú�ֵ:\n");
	scanf("%d%d", &a, &b);
	listinsert(&L, a, b);

}

#endif // 0

