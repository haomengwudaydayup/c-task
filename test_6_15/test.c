#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
int main()
{
	int a[4] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a + 1));//4
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4
	printf("%d\n", sizeof(*&a));//16
	printf("%d\n", sizeof(&a + 1));//4
	printf("%d\n", sizeof(&a[0]));//4
	printf("%d\n", sizeof(&a[0] + 1));//4

	system("pause");
	return 0;
}
#elif 0

int main()
{
	//char arr[] = { 'a','b','c','d','e' };

	
	
//	char arr[] = { 'a','b','c','d','e', '\0'};
//	//strlen传递的参数char *//printf("%d\n", sizeof(arr));//5
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4类型的
//	printf("%d\n", strlen(arr));//n
//	printf("%d\n", strlen(arr + 0));//n
////	printf("%d\n", strlen(arr[1]));//错误
////	printf("%d\n", strlen(&arr));//char (*p)[4] 类型位char[4]类型的， 不是char*类型的, 因此错误
////	printf("%d\n", strlen(&arr + 1));//错误
//	printf("%d\n", strlen(&arr[0] + 1));//n-1

	system("pause");
	return 0;
}

#elif 0

int main()
{
	//char str[] = "abcdef";//这是数组

	//printf("%d\n", sizeof(str));//7
	//printf("%d\n", sizeof(str + 0));//4
	//printf("%d\n", sizeof(*str));//1
	//printf("%d\n", sizeof(str[1]));//1
	//printf("%d\n", sizeof(&str));//4
	//printf("%d\n", sizeof(&str + 1));//4
	//printf("%d\n", sizeof(&str[0] + 1));//4

	char str[] = "abcdef";//这是数组

	printf("%d\n", strlen(str));//6
	printf("%d\n", strlen(str + 0));//6
//	printf("%d\n", strlen(str[1]));//错误
//	printf("%d\n", strlen(&str));//错误
//	printf("%d\n", strlen(&str + 1));//错误
	printf("%d\n", strlen(&str[0] + 1));//5

	system("pause");
	return 0;
}

#elif 0

int main()
{
	//char *p = "abcdefg";//c++代码不能

	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p + 1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p + 1));//4
	//printf("%d\n", sizeof(&p[0] + 1));//4

	char *p = "abcdefg";
	printf("%d\n", strlen(p));//7
	printf("%d\n", strlen(p + 1));//6
//	printf("%d\n", strlen(*p));//错误
//	printf("%d\n", strlen(p[0]));//错误
//	printf("%d\n", strlen(&p));//错误
//	printf("%d\n", strlen(&p + 1));//错误
	printf("%d\n", strlen(&p[0] + 1));//6
	system("pause");
	return 0;
}


#elif 0

int main()
{
	int a[3][4] = { 0 };
	//int (*p)[4] p+1 =int[4]
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4
	printf("%d\n", sizeof(a[1]));//16
	printf("%d\n", sizeof(*(a + 1)));//16
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16


	if ((sizeof(a + 1)) == (sizeof(a[1])))
		printf("YES\n");
	else
		printf("NONO\n");
	if ((int*)(a + 1) == a[1])
		printf("Yes\n");
	
	if ((&a[0] + 1) == (a + 1))
		printf("Yes!\n");
	else
		printf("No\n");

	if (a[0] == *a)
		printf("Yes!\n");
	else
		printf("No!\n");
	system("pause");
	return 0;
}
#elif 0

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int *ptr = (int*)(&a + 1);
	printf("%d, %d\n", *(a + 1), *(ptr - 1));//2 5

	system("pause");
	return 0;
}

#elif 0

struct Test
{
	int num;//4
	char *pname;//4
	short sDate;//2
	char cha[2];//2
	short sBa[4];//8 -- short 2个字节
}*p;
//20
int main()
{
	int a[4][3] = { 0 };
	typedef int(*P)[3];
	P aa = a;
	int *p[3];
	//0x 00 00 00 00//起始
	printf("%p\n", p + 0x1);//00 00 00 14 相加20
	printf("%p\n", p);
	printf("%p\n", (P)p + 1);//00 00 00 04 相加4
	//(unsigned long)p 是一个常量，常量+1 打印他们使用十六进制打印。 因此会加1
	
	system("pause");
	return 0;
}

#elif 0

int main()
{
	int a[4] = { 1,2,3,4 };
	int *prt1 = (int*)(&a + 1);
	int *prt2 = (int*)((int)a + 1);
	printf("%x %x\n", prt1[-1], *prt2);//4 2000000
	system("pause");
	return 0;
}

#elif 0

int main()
{
	int a[5][5] = { 0 };
	int(*p)[4] = NULL;

	p = (int (*)[4])a;//强转一下

	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

	system("pause");
	return 0;
}

#elif 0

int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int *prt1 = (int*)(&aa + 1);
	int *prt2 = (int*)(*(aa + 1));
	printf("%d %d\n", *(prt1 - 1), *(prt2 - 1));//10 5
	system("pause");
	return 0;
}

#elif 0
int main()
{
	char *a[] = { "work","at","alibaba" };//指针数组
	char **pa = a;//
	pa++;
	printf("%s\n", *pa);

	system("pause");
	return 0;

}

#elif 1
int main()
{
	char *c[] = { "ENTER","NEW","POINT","FIRST" };
	char **cp[] = { c + 3,c + 2,c + 1,c };
	char ***cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	system("pause");
	return 0;
}
#endif // 0

