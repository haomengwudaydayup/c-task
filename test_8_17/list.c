#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"


void InitList(pList plsit)
{
	assert(plsit != NULL);
	plsit->data = -1;
	plsit->next = NULL;
}

//�õ�һ���ڵ�
Node *GetNode(int val)
{
	Node *pGet = (Node *)malloc(sizeof(Node));
	assert(pGet != NULL);
	pGet->data = val;
	pGet->next = NULL;
	return pGet;
}

//ͷ��   plist:  ͷ���ĵ�ַ
void InsertHead(pList plist, int val)//55
{
	Node *pGet = GetNode(val);
	assert(plist != NULL);
	pGet->next = plist->next;
	plist->next = pGet;
}

//β��
void InsertTail(pList plist, int val)//55
{

	Node *pGet = GetNode(val);
	assert(plist != NULL);
	Node *p = plist;
	while ((p->next) != NULL)
	{
		p = p->next;
	}
	p->next = pGet;
}
void Show(pList plist)
{
	Node *Ptemp = plist->next;

	while (Ptemp != NULL)
	{
		printf("%d  ", Ptemp->data);
		Ptemp = Ptemp->next;
	}
}

/*�ͷ�*/
void Free_memory(pList plist)
{
	Node *p = plist->next;
	Node *q = plist->next;
	while (p != NULL)
	{
		p = p->next;
		free(q);
		q = p;
	}
}

//���ص�����K���ڵ�
Node *LastKNode(pList plist, int k)
{
	if (k < 0)
	{
		return NULL;
	}
	Node *p = plist;
	Node *q = plist;

	//1����һ��ָ������K-1��
	for (int i = 0; i < k - 1; i++)
	{
		if (q->next != NULL)
		{
			q = q->next;
		}
		else
		{
			return NULL;
		}
	}
	//����ָ��ͬʱ��
	while ((q->next) != NULL)
	{
		p = p->next;
		q = q->next;
	}
	return p;
}

//����λ�õĲ���
void Insert_any(pList plist, int position, int value)
{
	Node *p = plist->next;
	Node *q = NULL;
	for (int i = 0; i < position - 1; i++)
	{
		p = p->next;
	}
	q = GetNode(value);
	assert(q != NULL);
	/*ƴ��*/
	q->next = p->next;
	p->next = q;

}

void Delete_any(pList plist, int position)
{
	Node *p = plist;
	Node *q = NULL;

	for (int i = 0; i < position - 1; i++)
	{
		p = p->next;
	}
	q = p->next;
	p->next = q->next;
	free(q);
	q = NULL;
}

void Seek_value(pList plist, int value)
{
	Node *p = plist->next;
	int count = 1;
	
	while (p != NULL)
	{
		if (p->data == value)
		{
			printf("�ҵ��������ڵ�%d���ڵ�\n", count);
			return;
		}
		p = p->next;
		count++;
	}
	printf("�ڵ�����û�����ֵ��\n");
}
