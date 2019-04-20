/*
	第二次的代码
*/
#include<stdio.h>
#include<stdlib.h>

void test1(void)
{
	//ptintf("a = %d\n", a);//未标识的-未定义
	//printf("b = %d\n", b);//未标识的-未定义
}

//int main()
//{
//	//关于变量的定义，自动(auto)和静止变量(static)
//	//存储说明符auto，register，extern，static说明的四种存储类别
//	
//	/*其中auto和register对应自动存储期。
//	  具有自动存储期的变量在进入声明该变量的程序块是被建立，
//	  它在该程序块活动时存在，
//    退出该程序块时撤销。*/
//	
//	auto int a = 10;//自动整形变量 == int a = 10
//	register int b = 20;//寄存器整行变量
//	
//	//auto和register定义的变量的生存周期为定义，退出程序块时退出
//	//test();
//	
//	//接下来时静态定义变量static
//	/*
//		1、static修饰符修饰局部变量时是改变生命周期，没有影响作用域
//		2、修饰全局变量时改变作用域，（对于全局变量没有作用域之说）
//		3、修饰函数时就只让函数仅在该源文件下使用，其他源文件不能使用
//	*/
//
//	return 0;
//}
//int main()
//{
//	/*
//		关于常量定义的4中方法
//		1、字面常量（5，'a',3.14)
//		2、const修饰符定义的常变量（是变量但是不能改变）
//		3、#define M 10 定义的常量
//		4、enum枚举常量
//	*/
//	//关于#define 有两种 一个是#define M 10
//	//第二个是#define sum(x) x*x 宏
//	
//	//\32 //   2*8^0+3*8^1=26 八进制转换位十进制然后输出ASCII值
//	//\x32 //   十六进制转换位十进制然后输出ASCII值
//	
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	(a > b) ? (a) : (b);//a>b条件正确执行a ,否则执行b
//	int c = (a > b) ? (a) : (b);
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 10;
//	int d = 20;
//
//	d = (a=d-5, b=a+3, c=3+d);//这是正确的，但是d的值为最后一项的c的值 d=c
//	printf("c = %d,d = %d\n", c, d);//都为23
//	
//	system("pause");
//	return 0;
//}
int main()
{
	int a = 10;
	int b = 20;
	int c = 1;
	if (a == 20)
		if (b == 20)
			c = 30;
		else
			c = 40;
	printf("c = %d\n", c);
	system("pause");
	return 0;
}