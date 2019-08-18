#define _CRT_SECURE_NO_WARNINGS 1
#include<vld.h>
#include"LIST.h"
#if 1

int main()
{
	Node head;
	InitList(&head);		//初始化
	
	//InsertTail(&head, 13);
	//InsertTail(&head, 12);
	//InsertTail(&head, 11);
	//InsertTail(&head, 10);
	//InsertTail(&head, 9);

	/*插入方式的设计！*/
	printf("现在进行插入数据的操作，采用尾插法， 按-1停止");
	int value = 0;
	printf("\n请输入>");

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
	
	/*测试插入*/
	int position = 0;
	printf("请输入您想插入的位置和值position, value>");
	scanf("%d %d", &position, &value);
	Insert_any(&head, position, value);
	Show(&head);
	printf("\n");

	/*测试删除*/
	printf("请输入您想删除的位置position>");
	scanf("%d", &position);
	Delete_any(&head, position);
	Show(&head);
	printf("\n");

	/*测试查找*/
	printf("请输入您想查找的值value>");
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

typedef struct lnode//线性链表创建
{
	elemtype data;
	struct lnode *next;
} lnode, *linklist;

void createlist(linklist *L, int n)//构造出一个线性链表 
{
	linklist p;//构造出线性表类型的p 

	*L = (linklist)malloc(sizeof(lnode));
	(*L)->data = -1;
	(*L)->next = NULL;
	printf("请输入线性表的值\n");

	for (int i = 1; i <= n; i++)//采用头插法进行连接链表节点 
	{
		p = (linklist)malloc(sizeof(lnode));//这是构造节点 
		scanf("%d", &p->data);
		p->next = (*L)->next;
		(*L)->next = p;
	}

	printf("输出链表的值\n");   //这是输出链表元素，但是只能在这个函数里面运行。 

	for (; p != NULL; p = p->next)
		printf("%d\n", p->data);
}

status listdelete(linklist *L, int i)//线性链表的删除 
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
	printf("删除的值为：%d\n", e);
	free(q);


	linklist a;

	a = *L;

	printf("输出链表的值：\n");
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

	printf("输出链表的值：\n");
	for (; a != NULL; a = a->next)
		printf("%d\n", a->data);

	return 1;
}

main()
{

	linklist L;		//创建一个结构体指针
	int n;
	printf("请输入你想做的链表的长度为:\n");
	scanf("%d", &n);
	createlist(&L, n);

	int m;
	printf("你想删除元素的位置:\n");
	scanf("%d", &m);
	listdelete(&L, m);

	int a, b;
	printf("你想插入元素的位置和值:\n");
	scanf("%d%d", &a, &b);
	listinsert(&L, a, b);

}

#endif // 0

