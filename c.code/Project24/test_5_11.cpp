#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#if 0
//递归打印1 2 3 4.
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}

int main()
{
	int n = 1024;
	print(n);
	system("pause");
	return 0;
}

#elif 0

int main()
{
	char at;
	int choice = 0;
	int ret = 0;
	srand((unsigned int)time(NULL));//设置种子
	ret = rand() % 11 + 1;
	printf("请输入您存放的值choice>");
	
	//循环体
	while (1)
	{
		//%f只有小数点一位，第二位小数点后面的没有
		scanf_s("%d", &choice);//%d仅接受数字，其他字符不接受。
		while(getchar() != '\n');//接受一个字符，任意字符
		//这条语句可以不后面所有乱的字符吃点，直到\n就不吃啦
		//这句循环可以有效解决输入带来的死循环
		if (choice < ret)
			printf("猜小了!\n");
		else if (choice > ret)
			printf("猜大了！\n");
		else
		{
			printf("猜对了！\n");
			break;
		}

	}
	system("pause");
	return 0;
}

#elif 0
//下面我们使用函数处理一些问题
void Swap(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}//这个函数不能完成交换，因为x,y变量不是a,b变量
//我们可以采取的传递地址和传递原址，但是使用引用接受
void Swap1(int& x, int& y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
void Swap2(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d\n", a, b);
	//Swap(a, b);
	//Swap1(a, b);
	Swap2(&a, &b);
	printf("a = %d,b = %d\n", a, b);
	system("pause");
	return 0;
}
#elif 1
//函数返回结果可以做参数，函数中可以嵌套函数，也可以递归
int main()
{
	printf("%d", printf("%d", printf("%d", printf("%d", 456))));
	//printf()函数的返回值为表达数的个数
	system("pause");
	return 0;
}
#endif