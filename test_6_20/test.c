#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define STU 10
#define QIAO 10

void bubble_sort(int *p, int len)
{
	if (p == NULL && len >= 0)
		return;

	int i = 0, j = 0;
	for (i = 0; i < len - 1; i++)
	{
		int ret = 0;
		for (j = 0; j < len - 1 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
				ret = 1;
			}
		}
		if (ret == 0)
			return;
	}
}

int int_len(int *p)
{
	int count = 0;
	while (*p++ != 0)
	{
		count++;
	}
	return count;
}

int funcation(int *a, int *b, int na, int nb)
{
	assert((*a != 0) && (*b != 0));
	int count = 0;
	int i = 0, j = 0;

	//����Ǩ�Ʋ���forѭ�����ȶ�������
	//2 2 2 
	//1 1 4
	/*Markdown:
		1���ɿ������������ڵ���ѧ���ı�׼�� �ɿ���+1��ѧ��+1�� count������+1
		2���ɿ���������С��ѧ���ı�׼�� �ɿ���+1��ѧ������
		3����ֹ�����ǵ���0��Ԥ���趨���㣩
	*/
/*-------------------------------------*/
	while ((*a != 0) && (*b != 0))
	{
		if (*a >= *b)
		{
			count++;
			a++;
			b++;
		}
		else
		{
			a++;
		}
	}
/*-------------------------------------*/
	if ( (na >= nb) && (count < nb))
		return count;
	else if ((na >= nb) && (count >= nb))
		return nb;

	if ((na <= nb) && (count < na))
		return count;
	else if ((na <= nb) && (count >= na))
		return na;
}
int main()
{
	int stud[STU] = { 0 };//ѧ������
	int qiao[QIAO] = { 0 };//�ɿ�������

	int i = 0;
	int input = 0;
	printf("������ѧ���ĸ���\n");
	scanf_s("%d", &input);
	printf("����ѧ���ܹ����ܵ�������׼\n");
	for (i = 0; i < input; i++)
	{
		scanf_s("%d", &stud[i]);
	}

	printf("\n�������ɿ����ĸ���\n");
	scanf_s("%d", &input);
	printf("�����ɿ���������\n");
	for (i = 0; i < input; i++)
	{
		scanf_s("%d", &qiao[i]);
	}
	//1 2 4 9 10  Q 
	//1 3 5 7 9   S
	
	
	bubble_sort(stud, int_len(stud));
	bubble_sort(qiao, int_len(qiao));

	int num = funcation(qiao, stud, int_len(stud), int_len(qiao));
	printf("num = %d\n", num);

	system("pause");
	return 0;
}