#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;

typedef struct Node {
	Elemtype data;
	struct Node *next;
}LNode,*LinkList;

//创建链表
void Create_NList(LinkList &L)
{
	//构造出创造出几个节点
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

//打印节点和链表长度
void Input_Node(LinkList L)
{
	//这个函数正确！
	LinkList head = L->next;
	while (head != NULL)
	{
		printf("%d  ", head->data);
		head = head->next;
	}
	printf("\n链表的长度为%d\n", L->data);
}
//添加元素
void List_insert(LinkList &L, int i, Elemtype &e)
{
	//首先要判断查找位置是否正确,同时找到该处节点
	LinkList head = L;
	int j = 0;//计数器
	while (head && j < i - 1)
	{
		head = head->next;
		j++;
	}
	if (!head || j > i - 1)
		exit(0);//插入位置不合理
	LinkList p = (LinkList)malloc(sizeof(LNode));
	p->data = e;
	p->next = head->next;
	head->next = p;
	L->data++;//表长加1
}
//删除元素
void List_delete(LinkList &L, int i)
{
	//首先要判断查找位置是否正确,同时找到该处节点
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
	printf("删除的值为%d\n", p->data);
	free(p);
	p = NULL;

}
//菜单
void meun()
{
	printf("*********** 1、创建线性表         ************\n");
	printf("*********** 2、打印链表和表长度   ************\n");
	printf("*********** 3、添加元素           ************\n");
	printf("*********** 4、删除元素           ************\n");
	printf("*********** 5、合并为L2           ************\n");
	printf("*********** 6、删除               ************\n");
}

//查找元素
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
	printf("第%d号元素的值为%d", i, head->data);
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

	/*printf("请输入L您想插入的位置和值> ");
	scanf_s("%d%d", &i, &e);
	List_insert(L, i, e);
	Input_Node(L);

	printf("请输入L1您想插入的位置和值> ");
	scanf_s("%d%d", &i, &e);
	List_insert(L1, i, e);
	Input_Node(L1);

	printf("请输入您想删除的位置> ");
	scanf_s("%d", &i);
	List_delete(L, i);
	Input_Node(L);

	printf("请输入您想查找的位置>");
	scanf_s("%d", &i);
	Get_node(L, i);*/


	//LinkList L = NULL;
	//LinkList L1 = NULL;
	//LinkList L2 = NULL;
	//int input = 0;//选择
	//int i = 0;//下标
	//int choice = 0;//选择
	//Elemtype e = 0;//返回值

	//do
	//{
	//	//循环体
	//	meun();//菜单

	//	printf("\n请选择>");
	//	scanf_s("%d", &input);

	//	switch (input)
	//	{
	//	case 1:
	//		//创建链表

	//		printf("请选择创建1：L，2：L1\n");
	//		scanf_s("%d", &choice);
	//		if (1 == choice)
	//			Create_NList(L);
	//		else
	//			Create_NList(L1);
	//		break;
	//	case 2:
	//		//打印链表和长度
	//		printf("请选择打印链表和表长1：L，2：L1\n");
	//		scanf_s("%d", &choice);
	//		if (1 == choice)
	//			Input_Node(L);
	//		else
	//			Input_Node(L1);
	//		break;
	//	case 3:
	//		//添加元素
	//		printf("请选择添加元素1：L，2：L1\n");
	//		scanf_s("%d", &choice);
	//		if (1 == choice)
	//		{
	//			printf("请输入您想插入的位置和值> ");
	//			scanf_s("%d%d", &i, &e);
	//			List_insert(L, i, e);
	//		}
	//		else
	//		{

	//			printf("请输入您想插入的位置和值> ");
	//			scanf_s("%d%d", &i, &e);
	//			List_insert(L1, i, e);
	//		}
	//		break;
	//	case 4:
	//		//删除元素
	//		printf("请选择删除元素1：L，2：L1\n");
	//		scanf_s("%d", &choice);
	//		if (1 == choice)
	//		{
	//			printf("请输入您想删除的位置> ");
	//			scanf_s("%d", &i);
	//			List_delete(L, i);
	//		}
	//		else
	//		{

	//			printf("请输入您想删除的位置> ");
	//			scanf_s("%d", &i);
	//			List_delete(L, i);
	//		}
	//		break;
	//	case 5:
	//		//合并
	//		hebing_Node(L, L1, L2);
	//		Input_Node(L2);
	//		break;
	//	case 6:
	//		//退出
	//		break;
	//	default:
	//		printf("非法输入！，请重新选择>");
	//		scanf_s("%d", &input);
	//		break;
	//	}
	//	printf("\n");

	//} while (6 != input);




	
	system("pause");
	return 0;
}