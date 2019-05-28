/*
	test-测试
	今天我们来开始测试！
*/
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#if 0

int main()
{
	int a = 10;
	int *p = &a;
	assert(p != NULL);//断言失败，不应该
	if (p != NULL)
	{
		printf("p指针指向的不为空\n");
		system("pause");
		return;
	}
	system("pause");
	return 0;
}

#elif 1

int main()
{
	char i = 0;
	char j = 0;
	char k = 0;

	/*int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i < 13; i++)
	{
		a[i] = 0;
		printf("\n");
	}*/
	system("pause");
	return 0;
	//每一个变量在分配内存的时候都会有8（12-12/3）个字节//32位平台
}
#endif // 0

