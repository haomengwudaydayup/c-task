/*
	�ڶ��εĴ���
*/
#include<stdio.h>
#include<stdlib.h>

void test1(void)
{
	//ptintf("a = %d\n", a);//δ��ʶ��-δ����
	//printf("b = %d\n", b);//δ��ʶ��-δ����
}

//int main()
//{
//	//���ڱ����Ķ��壬�Զ�(auto)�;�ֹ����(static)
//	//�洢˵����auto��register��extern��static˵�������ִ洢���
//	
//	/*����auto��register��Ӧ�Զ��洢�ڡ�
//	  �����Զ��洢�ڵı����ڽ��������ñ����ĳ�����Ǳ�������
//	  ���ڸó����ʱ���ڣ�
//    �˳��ó����ʱ������*/
//	
//	auto int a = 10;//�Զ����α��� == int a = 10
//	register int b = 20;//�Ĵ������б���
//	
//	//auto��register����ı�������������Ϊ���壬�˳������ʱ�˳�
//	//test();
//	
//	//������ʱ��̬�������static
//	/*
//		1��static���η����ξֲ�����ʱ�Ǹı��������ڣ�û��Ӱ��������
//		2������ȫ�ֱ���ʱ�ı������򣬣�����ȫ�ֱ���û��������֮˵��
//		3�����κ���ʱ��ֻ�ú������ڸ�Դ�ļ���ʹ�ã�����Դ�ļ�����ʹ��
//	*/
//
//	return 0;
//}
//int main()
//{
//	/*
//		���ڳ��������4�з���
//		1�����泣����5��'a',3.14)
//		2��const���η�����ĳ��������Ǳ������ǲ��ܸı䣩
//		3��#define M 10 ����ĳ���
//		4��enumö�ٳ���
//	*/
//	//����#define ������ һ����#define M 10
//	//�ڶ�����#define sum(x) x*x ��
//	
//	//\32 //   2*8^0+3*8^1=26 �˽���ת��λʮ����Ȼ�����ASCIIֵ
//	//\x32 //   ʮ������ת��λʮ����Ȼ�����ASCIIֵ
//	
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	(a > b) ? (a) : (b);//a>b������ȷִ��a ,����ִ��b
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
//	d = (a=d-5, b=a+3, c=3+d);//������ȷ�ģ�����d��ֵΪ���һ���c��ֵ d=c
//	printf("c = %d,d = %d\n", c, d);//��Ϊ23
//	
//	system("pause");
//	return 0;
//}
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
//	//������if - else ��һ�����
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//
//	//&& �߼��� ��|| �߼���
//	int b = (int)3.14;//ǿ������ת��
//	printf("b = %d\n", b);
//
//	//3/4 �� 3.0/4 and 3/4.0 and 3.0/4.0
//	//Ҫ��õ�С����������һ��Ϊdouble����
//	printf("a = %d\n", 7 / 3);//7/3��float����
//	printf("a = %f\n", 7.0 / 3);//7.0/3��double����
//	printf("a = %f\n", 7 / 3.0);//7/3��0��double����
//	printf("a = %f\n", 7.0 / 3.0);//7.0/3.0��double����
//
//	//%ȴ�෴  ֻ��ΪΪ�������ұ���������Ϊ�� a%b a,bֻ��Ϊ����
//
//	
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int ret = (++i)+(++i)+(++i);
//	//�����ı�ʾ�Ǵ���ģ���Ŀ���󣡣���
//	printf("ret = %d\n", ret);//ret=12
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a++;//��ʹ�ú�Ӽ� c = a  : a = a+1
//	int d = ++b;//�ȼӼӺ�ʹ�� a = a+1 ; d = b
//	//++a �� a++ �����a��1
//	printf("c = %d\n", c);
//	printf("d = %d\n", d);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	system("pause");
//	return 0;
//}