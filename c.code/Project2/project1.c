/*
	这是第一次使用githua，内心十分激动！
	我希望用每一点滴来帮助所有有兴趣的人。

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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

int main()
{
	//字符数组
	char str[] = "bit";//C语言没有字符串类型，因此只能用字符数组来构建字符串
	char str1[] = { 'b','i','t','\0' };
	char str2[10];//如果定义的话，必须写出大小
	/*
	用 scanf 给字符数组赋值不同于对数值型数组赋值。
	给数值型数组赋值时只能用 for 循环一个一个地赋值，不能整体赋值。
	而给字符数组赋值时可以直接赋值，不需要使用循环。
	此外从键盘输入后，系统会自动在最后添加结束标志符 '\0'。
	但是用 scanf 输入字符串时有一个地方需要注意：如果输入的字符串中带空格，
	比如“i love you” 它会输出: i,因为默认空格为结束符！
	*/
/*
	printf("str = %s\n", str);//输出方面也有所不同
	printf("str1 = %s\n", str1);
	gets(str2);
	//scanf_s("%s", str2);//这里vs有问题，不能这样输入字符串，但方法正确
	printf("str2 = %s\n", str2);//输出也只是写数组的头地址就可以了
	system("pause");
	return 0;
}
*/
//转义字(\)
int main()
{
	// \t \n \v 
	printf("www:\\test.\\.com\n");
//	printf("%d\n",sizeof(c:\test\328\test.c));
	double a[3][6];

	printf("a = %d\n", sizeof(a));
	printf("*a = %d\n", sizeof(*a));
	printf("**a = %d\n", sizeof(**a));
//	printf("***a = %d\n", sizeof(*(**a)));
	system("pause");
	return 0;
}