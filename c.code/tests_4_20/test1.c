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
<<<<<<< HEAD
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 1;
//	if (a == 20)
//		if (b == 20)
//			c = 30;
//		else
//			c = 40;
//	//！！！if - else 是一条语句
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//
//	//&& 逻辑与 ，|| 逻辑或
//	int b = (int)3.14;//强制类型转换
//	printf("b = %d\n", b);
//
//	//3/4 和 3.0/4 and 3/4.0 and 3.0/4.0
//	//要想得到小数后，至少有一个为double类型
//	printf("a = %d\n", 7 / 3);//7/3是float类型
//	printf("a = %f\n", 7.0 / 3);//7.0/3是double类型
//	printf("a = %f\n", 7 / 3.0);//7/3。0是double类型
//	printf("a = %f\n", 7.0 / 3.0);//7.0/3.0是double类型
//
//	//%却相反  只能为为整数并且被除数不能为零 a%b a,b只能为整数
//
//	
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int ret = (++i)+(++i)+(++i);
//	//这样的表示是错误的，题目错误！！！
//	printf("ret = %d\n", ret);//ret=12
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a++;//先使用后加加 c = a  : a = a+1
//	int d = ++b;//先加加后使用 a = a+1 ; d = b
//	//++a 和 a++ 都会把a加1
//	printf("c = %d\n", c);
//	printf("d = %d\n", d);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	system("pause");
//	return 0;
//}
=======
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
>>>>>>> 8452c07a51e1477213dae4f8b171c4e4635a6376
