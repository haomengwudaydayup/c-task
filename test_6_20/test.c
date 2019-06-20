#include<stdio.h>
#include<stdlib.h>
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
	
	int count = 0;
	int i = 0, j = 0;
	for (i = 0; i < na; i++)//质量
	{
		int ret = 0;
		for (j = 0; j < nb; j++)//学生
		{
			//3
			//2
			//5 6 7 8 9 Q
			//1 2 3 8 9 S
			if (a[i] >= b[nb - j - 1])
			{
				ret = 1;
				break;
			}
		}
		if(ret == 1)
			count++;
	}
	if ( (na > nb) && (count < nb))
		return count;
	else if ((na > nb) && (count >= nb))
		return nb;

	if ((na < nb) && (count < na))
		return count;
	else if ((na < nb) && (count >= na))
		return na;
}
int main()
{
	int stud[STU] = { 0 };//学生数组
	int qiao[QIAO] = { 0 };//巧克力数组

	int i = 0;
	int input = 0;
	printf("请输入学生的个数\n");
	scanf_s("%d", &input);
	printf("输入学生能够接受的质量标准\n");
	for (i = 0; i < input; i++)
	{
		scanf_s("%d", &stud[i]);
	}

	printf("\n请输入巧克力的个数\n");
	scanf_s("%d", &input);
	printf("输入巧克力的质量\n");
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