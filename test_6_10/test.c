#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 


#if 0
//qosrt����ʱ���õĿ��������
int int_cmp(const void * p1, const void * p2)
{
	return (*(int *)p1 - *(int *)p2);
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };

	int i = 0;
	//arr 10 4  ���ú���
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);//ֻ������    

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

//�жϺ���
int Int_cmp(const void *elem1, const void *elem2)
{
	return *((char *)elem1) - *((char *)elem2);
}

//��������
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
//ð������
void My_bsort(void *base, int len, int size, int(*Int_cmp)(const void *elem1, const void *elem2) )//���ú���ָ�����
{
	//10  9  8  7  6  5  4  3  2  1
	int i = 0, j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if ( (*Int_cmp)((char*)base + j * size, (char*)base + (j + 1)*size) > 0 )
				//��鴫�ݵĲ�����char * ÿ��ֻ�ܼ�һ���ֽڣ� �����β���ȴ��(int*)ǿת�����ã������ǿ��Ե�
			{
				Swap((char*)base + j * size, (char*)base + (j + 1)*size, size);
			}
		}
	}
}
//��ӡ����
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




