#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


int main()
{
	int i = 0;
	int n = 0;
	int j = 0;
	int sum = 0;
	int ret = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		//	ret = 1;
		
		if (ret == 1)
		{
			printf("%d\n", i);
		}
		assert(ret == 1);//ret²»µÈÓÚ1
		
		for (j = 1; j <= i; j++)
		{
			ret = ret * j;
		}
		sum = sum + ret;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}





