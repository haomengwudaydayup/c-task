#include<stdio.h>
#include<stdlib.h>


#if 0
int test(int a, int b)
{
	return a > b ? a : b;
}

int show(int a, int(*p)(int, int))
{
	int max = (*p)(10, 20);
	return a > max ? a : max;
}

int main()
{
	printf("%d\n", show(100, test));

	getch();
	return 0;
}

#elif 1

struct A
{
	int a;//4
	char str_b;//1
	char c;//1

}B;

int main()
{

	printf("%d\n", sizeof(B));
	printf("&a = %p\n", &(B.a));
	printf("&str_b = %p\n", &(B.str_b));
	printf("&c = %p\n", &(B.c));
	//��ַ��������ţ����ǽṹ���ռ�õ��ڴ�Ϊ12���ֽڴ�С
	//�����ǲ��ǽṹ�廹��ֱ�Ӷ����������������ڴ���룡

	getch();
	return 0;
}

#elif 1

int main()
{
	int m = 10;
	int c = 0;
	//���Ǵ���2������λ��Linuxû�б���λ
	int n = 10;
	printf("&m: %X\n&c: %X\n&n: %X\n", &m, &c, &n);
	getch();
	return 0;
}
#endif // 0

