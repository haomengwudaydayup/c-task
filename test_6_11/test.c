#include<stdio.h>

int *p = NULL;
//�ֲ������������˳������٣�����ֵ���������ֻ�������µĺ���������ʱ���滻��
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