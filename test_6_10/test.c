#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 


#if 0
//qosrt函数时内置的快速排序的
int int_cmp(const void * p1, const void * p2)
{
	return (*(int *)p1 - *(int *)p2);
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };

	int i = 0;
	//arr 10 4  调用函数
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);//只有声明    

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	getch();
	return 0;
}

#elif 1
typedef int TYPE;

//判断函数
int Int_cmp(const void *elem1, const void *elem2)
{
	return *((char *)elem1) - *((char *)elem2);
}

//交换函数
void Swap(const void *elem1, const void *elem2, int size_t)
{
	int i = 0;
	for (i = 0; i < size_t; i++)
	{
		char tmp = *((char*)elem1 + i);
		*((char*)elem1 + i) = *((char*)elem2 + i);
		*((char*)elem2 + i) = tmp;
	}

}
//冒泡排序
void My_bsort(void *base, int len, int size, int(*Int_cmp)(const void *elem1, const void *elem2) )//采用函数指针接收
{
	//10  9  8  7  6  5  4  3  2  1
	int i = 0, j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if ( (*Int_cmp)((char*)base + j * size, (char*)base + (j + 1)*size) > 0 )
				//这块传递的参数是char * 每次只能加一个字节， 但是形参中却用(int*)强转解引用，所以是可以的
			{
				Swap((char*)base + j * size, (char*)base + (j + 1)*size, size);
			}
		}
	}
}
//打印函数
void Print(void *a, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%c ", ((char *)a)[i]);
	}
}
int main()
{
	char a[] = { 'd','a','c','z','d' };
	int len = sizeof(a) / sizeof(a[0]);
	Print(a, len);
	My_bsort(a, len, sizeof(char), Int_cmp);
	printf("\n");
	Print(a, len);
	printf("\n");
	getch();
	return 0;
}
#endif // 0




