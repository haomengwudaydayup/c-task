#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#if 0
void test()
{
	printf("Line: %d\n", __LINE__);
	printf("hehe\n");
}
int main()
{
	printf("Data: %s\n", __DATE__);
	//	test();
	printf("Line: %d\n", __LINE__);//���ָ����ǰ������
	printf("File: %s\n", __FILE__);
	printf("Time: %s\n", __TIME__);//����ʱ��

	getch();
	return 0;
}

#elif 0

int main()
{
	#ifndef _DEBUG
		printf("DEBUG\n");
	#else
		printf("RELEASE\n");
	#endif // !_DEBUG

	getch();
	return 0;
}
#elif 1

#ifdef WIN32

#error ��ʹ��:LINUXƽ̨����

#endif // WIN32




int main()
{

	getch();
	return 0;
}
#endif // 0

