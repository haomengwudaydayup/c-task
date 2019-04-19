/*
    这是第一次使用githua，内心十分激动！
	我希望用每一点滴来帮助所有有兴趣的人。

*/

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int overall = 10;//定义一个全局变量，他的作用域/生存期为整个程序

int main()
{
	int *prt = NULL;
	printf("hello world!\n");//输出函数，需要头文件stdlo.h
	
	
//	system("cls");//清屏

	//接下来统计数据类型的字节数1byte=8bit
	printf("char: %d\n", sizeof(char));
	printf("short: %d\n", sizeof(short));
	printf("int: %d\n", sizeof(int));
	printf("long: %d\n", sizeof(long));
	printf("long int :%d\n", sizeof(long int));
	printf("float: %d\n", sizeof(float));
	printf("double: %d\n", sizeof(double));
	printf("指针： %d\n", sizeof(prt));//所有类型的指针的字节都是一样的4个字节
	//Sleep(10000);//睡眠函数，调用头文件Windows.h
	system("pasue");//暂停
	return 0;
}
/*
	int i;//先定义两个变量，并没有初始化
	int j = 0;//定义j变量并且将其初始化为0

	//c语言中，变量的定义必须在前面，当然其他编程语言例外，例如c++，python*/