/*
    ���ǵ�һ��ʹ��githua������ʮ�ּ�����
	��ϣ����ÿһ�����������������Ȥ���ˡ�

*/

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int overall = 10;//����һ��ȫ�ֱ���������������/������Ϊ��������

int main()
{
	int *prt = NULL;
	printf("hello world!\n");//�����������Ҫͷ�ļ�stdlo.h
	
	
//	system("cls");//����

	//������ͳ���������͵��ֽ���1byte=8bit
	printf("char: %d\n", sizeof(char));
	printf("short: %d\n", sizeof(short));
	printf("int: %d\n", sizeof(int));
	printf("long: %d\n", sizeof(long));
	printf("long int :%d\n", sizeof(long int));
	printf("float: %d\n", sizeof(float));
	printf("double: %d\n", sizeof(double));
	printf("ָ�룺 %d\n", sizeof(prt));//�������͵�ָ����ֽڶ���һ����4���ֽ�
	//Sleep(10000);//˯�ߺ���������ͷ�ļ�Windows.h
	system("pasue");//��ͣ
	return 0;
}
/*
	int i;//�ȶ���������������û�г�ʼ��
	int j = 0;//����j�������ҽ����ʼ��Ϊ0

	//c�����У������Ķ��������ǰ�棬��Ȼ��������������⣬����c++��python*/