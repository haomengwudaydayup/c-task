#include<stdio.h>

int *p = NULL;
//局部变量并不是退出后销毁，它的值还会存留，只是在有新的函数调用中时会替换它
void fundation()
{
	int a = 10;
	int b = 20;
	p = &a;

}
int main()
{
	fundation();
	printf("%d\n", *p);
	getch();
	return 0;
}