/*
	���ǵ�һ��ʹ��githua������ʮ�ּ�����
	��ϣ����ÿһ�����������������Ȥ���ˡ�

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

extern int g_val;//�����ⲿ����

//int overall = 10;//����һ��ȫ�ֱ���������������/������Ϊ��������
/*
int main()
{
	int *prt = NULL;
	char str;//�����ַ�����
	printf("hello world!\n");//�����������Ҫͷ�ļ�stdlo.h


//	system("cls");//����

	//������ͳ���������͵��ֽ���1byte=8bit
	printf("char: %d\n", sizeof(char));//1���ֽ�=8�����أ�2^8-1=255(max)
	printf("short: %d\n", sizeof(short));//2^16-1
	printf("int: %d\n", sizeof(int));//2^32-1
	printf("long: %d\n", sizeof(long));//2^32-1
	printf("long int :%d\n", sizeof(long int));//2^64-1
	printf("float: %d\n", sizeof(float));//2^32-1
	printf("double: %d\n", sizeof(double));//2^64-1
	printf("ָ�룺 %d\n", sizeof(prt));//�������͵�ָ����ֽڶ���һ����4���ֽ�,2^32-1

//	Sleep(10000);//˯�ߺ���������ͷ�ļ�Windows.h
	system("pause");
	return 0;
}

int main()
{
	int i = 0;//�ȶ���������������û�г�ʼ��
	int j = 0;//����j�������ҽ����ʼ��Ϊ0
	//c�����У������Ķ��������ǰ�棬��Ȼ��������������⣬����c++��python
	//����(ȫ�ֱ������������̣� �ֲ������� ������ö�ٳ�����
	45;//����
	{
	}//{}Ϊһ�������
	printf("ȫ�ֱ���g_val:%d\n", g_val);//�����ⲿ����ȫ�ֽṹ�������Ȼ������extren����
	system("pause");
	return 0;
}

//����
int main()
{
	99;//���泣��
	3.14;//���泣��
	'a';//���泣��
	const int i = 56;//const���εĳ��������ǲ����޸ĵı���-������
	//define����ı�׼����
	//ö�ٳ���
	enum  Sex
	{
		MALE,//Ĭ��Ϊ0  MALEΪö�ٳ���
		FEMALE,//1
		SECRET,//2
	}s;//sΪö�ٱ�������ֵֻ��Ϊö���б��ж���ĳ���
	s = MALE;//�ȼ���s = 0
	s = 2;//�ȼ���s = SECRET

	for (int s = MALE; s <= SECRET; s++)
		printf("ö��Ԫ��:%d\n", s);
	

	system("pause");
	return 0;
}

int main()
{
	//�ַ�����
	char str[] = "bit";//C����û���ַ������ͣ����ֻ�����ַ������������ַ���
	char str1[] = { 'b','i','t','\0' };
	char str2[10];//�������Ļ�������д����С
	/*
	�� scanf ���ַ����鸳ֵ��ͬ�ڶ���ֵ�����鸳ֵ��
	����ֵ�����鸳ֵʱֻ���� for ѭ��һ��һ���ظ�ֵ���������帳ֵ��
	�����ַ����鸳ֵʱ����ֱ�Ӹ�ֵ������Ҫʹ��ѭ����
	����Ӽ��������ϵͳ���Զ��������ӽ�����־�� '\0'��
	������ scanf �����ַ���ʱ��һ���ط���Ҫע�⣺���������ַ����д��ո�
	���硰i love you�� �������: i,��ΪĬ�Ͽո�Ϊ��������
	*/
/*
	printf("str = %s\n", str);//�������Ҳ������ͬ
	printf("str1 = %s\n", str1);
	gets(str2);
	//scanf_s("%s", str2);//����vs�����⣬�������������ַ�������������ȷ
	printf("str2 = %s\n", str2);//���Ҳֻ��д�����ͷ��ַ�Ϳ�����
	system("pause");
	return 0;
}
*/
//ת����(\)
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