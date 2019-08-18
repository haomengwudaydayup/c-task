#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"


void InitList(pList plsit)
{
	assert(plsit != NULL);
	plsit->data = -1;
	plsit->next = NULL;
}

//得到一个节点
Node *GetNode(int val)
{
	Node *pGet = (Node *)malloc(sizeof(Node));
	assert(pGet != NULL);
	pGet->data = val;
	pGet->next = NULL;
	return pGet;
}

//头插   plist:  头结点的地址
void InsertHead(pList plist, int val)//55
{
	Node *pGet = GetNode(val);
	assert(plist != NULL);
	pGet->next = plist->next;
	plist->next = pGet;
}

//尾插
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

/*释放*/
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

//返回倒数第K个节点
Node *LastKNode(pList plist, int k)
{
	if (k < 0)
	{
		return NULL;
	}
	Node *p = plist;
	Node *q = plist;

	//1、让一个指针先走K-1步
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
	//两个指针同时走
	while ((q->next) != NULL)
	{
		p = p->next;
		q = q->next;
	}
	return p;
}

//任意位置的插入
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
	/*拼接*/
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
			printf("找到拉，是在第%d个节点\n", count);
			return;
		}
		p = p->next;
		count++;
	}
	printf("节点里面没有这个值！\n");
}
