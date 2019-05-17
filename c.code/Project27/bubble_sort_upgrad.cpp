#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int* a, int lengh)
{
	int i = 0, j = 0;
	for (i = 0; i < lengh - 1; i++)
	{
		int tip = 1;
		
		for (j = 0; j < lengh - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tip = 0;
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		if (tip == 1)
		{
			break;
		}

	}

}

int main()
{
	int a[10] = { 10,9,8,7,6,5,4,3,2,1 };
	bubble_sort(a, sizeof(a) / sizeof(a[0]));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}