/*
	这是第一次使用githua，内心十分激动！
	我希望用每一点滴来帮助所有有兴趣的人。

*/

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

extern int g_val;//声明外部符号

//int overall = 10;//定义一个全局变量，他的作用域/生存期为整个程序
/*
int main()
{
	int *prt = NULL;
	char str;//测试字符变量
	printf("hello world!\n");//输出函数，需要头文件stdlo.h


//	system("cls");//清屏

	//接下来统计数据类型的字节数1byte=8bit
	printf("char: %d\n", sizeof(char));//1个字节=8个比特，2^8-1=255(max)
	printf("short: %d\n", sizeof(short));//2^16-1
	printf("int: %d\n", sizeof(int));//2^32-1
	printf("long: %d\n", sizeof(long));//2^32-1
	printf("long int :%d\n", sizeof(long int));//2^64-1
	printf("float: %d\n", sizeof(float));//2^32-1
	printf("double: %d\n", sizeof(double));//2^64-1
	printf("指针： %d\n", sizeof(prt));//所有类型的指针的字节都是一样的4个字节,2^32-1

//	Sleep(10000);//睡眠函数，调用头文件Windows.h
	system("pause");
	return 0;
}

int main()
{
	int i = 0;//先定义两个变量，并没有初始化
	int j = 0;//定义j变量并且将其初始化为0
	//c语言中，变量的定义必须在前面，当然其他编程语言例外，例如c++，python
	//变量(全局变量（整个工程） 局部变量） 常量（枚举常量）
	45;//常量
	{
	}//{}为一个代码块
	printf("全局变量g_val:%d\n", g_val);//可以外部定义全局结构体变量，然后再用extren调用
	system("pause");
	return 0;
}
*/
//常量
int main()
{
	99;//字面常量
	3.14;//字面常量
	'a';//字面常量
	const int i = 56;//const修饰的常变量，是不能修改的变量-常变量
	//define定义的标准常量
	//枚举常量
	enum  Sex
	{
		MALE,//默认为0  MALE为枚举常量
		FEMALE,//1
		SECRET,//2
	}s;//s为枚举变量，其值只能为枚举列表中定义的常量
	s = MALE;//等价于s = 0
	s = 2;//等价于s = SECRET

	for (int s = MALE; s <= SECRET; s++)
		printf("枚举元素:%d\n", s);
	

	system("pause");
	return 0;
}