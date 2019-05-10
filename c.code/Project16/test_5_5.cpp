/*
	写数据结构-线性表-2-upgrade
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

//初始化线性表
void Initlist(Sqlist &L)//引用
{
	L.data = (Elemtype *)malloc(MAXSIZE * sizeof(Elemtype));
	if (!L.data)
		exit(0);
	L.lengh = 0;
	L.listsize = MAXSIZE;
}
//初始化元素
void Creatlist(Sqlist &L)
{
	if (!L.data)
		exit(0);
	Elemtype a = 0;
	int i = 0;
	printf("如果输入的值不是-1，则继续存储!\n");
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
	printf("\n线性表的的长度为lengh: %d\n", L.lengh);

}

//添加元素
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

//删除元素
void listdelete(Sqlist &L, int i)
{
	if (!L.data)
		exit(0);
	if (i<1 || i>L.lengh)
		exit(0);
	Elemtype *q = &L.data[i - 1];//先找到被删除的位置下标
	printf("第%d号位置被删除的值为%d\n", i, *q);
	q++;
	for (Elemtype *p = &L.data[L.lengh - 1]; q < p; q++)
		*(q - 1) = *q;
	L.lengh--;

}

//冒泡排序
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

//二分查找
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
			printf("找到了，下标为%d,第%d号位置\n", temp, temp + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("没有找到！,数组里面没有这个值！\n");
	}
}

void Mergelist(Sqlist L, Sqlist L1, Sqlist &L2)
{
	//Initlist(L2);
	Elemtype *pa = L.data, *pa_list = &L.data[L.lengh - 1];
	Elemtype *pb = L1.data, *pb_list = &L1.data[L1.lengh - 1];
	
	
	L2.lengh = L2.listsize = L.lengh + L1.lengh;
	Elemtype *pc = L2.data = (Elemtype *)malloc(L2.lengh * sizeof(Elemtype));//注意些
	
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
	printf("*********** 1、初始化线性表       ************\n");
	printf("*********** 2、创建线性表         ************\n");
	printf("*********** 3、打印线性表和表长度 ************\n");
	printf("*********** 4、添加元素           ************\n");
	printf("*********** 5、删除元素           ************\n");
	printf("*********** 6、排序（bubble_sort）************\n");
	printf("*********** 7、查找（binary_seek）************\n");
	printf("*********** 8、退出               ************\n");
}
int main()
{
	Sqlist L;
	Sqlist L1;
	Sqlist L2;

	Initlist(L);//初始化线性表
	Initlist(L1);
	
	printf("L1线性表创建:\n");
	Creatlist(L);//创建线性表
	printf("L1线性表创建:\n");
	Creatlist(L1);

	output_list(L);//输出线性表
	output_list(L1);
	Mergelist(L, L1, L2);
	output_list(L2);

	free(L.data);
	free(L1.data);
	free(L2.data);

	////添加元素
	//Elemtype value = 0;
	//int i = 0;
	//printf("请输入您想插入的位置和插入的值>");
	//scanf_s("%d %d", &i, &value);
	//listinsert(L, i, value);
	//output_list(L);//输出线性表
	//
	////删除元素
	//printf("请输入您想删除的位置>");
	//scanf_s("%d", &i);
	//listdelete(L, i);
	//output_list(L);//输出线性表
	//
	////冒泡排序
	//bubble_sort(L);
	//output_list(L);//输出线性表
	//
	////二分查找
	//printf("请输入您想查找的值value>");
	//scanf_s("%d", &value);
	//binary_seek(L, value);

	//int input = 0;
	//int i = 0;
	//Elemtype value = 0;

	//do
	//{
	//	//循环体
	//	meun();//菜单

	//	printf("\n请选择>");
	//	scanf_s("%d", &input);

	//	switch (input)
	//	{
	//	case 1:
	//		//1、创建线性表
	//		Sqlist L;
	//		Initlist(L);
	//		printf("初始化成功！\n");
	//		break;
	//	case 2:
	//		//创建线性表
	//		Creatlist(L);
	//		break;
	//	case 3:
	//		//打印线性表和表长 
	//		output_list(L);//输出线性表
	//		break;
	//	case 4:
	//		//添加元素
	//		printf("请输入您想插入的位置和插入的值>");
	//		scanf_s("%d %d", &i, &value);
	//		listinsert(L, i, value);
	//		break;
	//	case 5:
	//		//删除元素
	//		printf("请输入您想删除的位置>");
	//		scanf_s("%d", &i);
	//		listdelete(L, i);
	//		break;
	//	case 6:
	//		//排序(bubble_sort)
	//		bubble_sort(L);
	//		break;
	//	case 7:
	//		//查找(binary_seek)
	//		printf("请输入您想查找的值value>");
	//		scanf_s("%d", &value);
	//		binary_seek(L, value);
	//		break;
	//	case 8:
	//		//退出
	//		free(L.data);
	//		break;
	//	default:
	//		printf("非法输入！，请重新选择>");
	//		scanf_s("%d", &input);
	//		break;
	//	}
	//	printf("\n");

	//} while (8 != input);


	system("pause");
	return 0;
}