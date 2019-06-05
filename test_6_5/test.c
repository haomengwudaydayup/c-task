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
	printf("Line: %d\n", __LINE__);//这个指定当前的行数
	printf("File: %s\n", __FILE__);
	printf("Time: %s\n", __TIME__);//具体时间

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

#error 请使用:LINUX平台编译

#endif // WIN32




int main()
{

	getch();
	return 0;
}
#endif // 0

