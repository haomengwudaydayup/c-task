#include<stdio.h>
#include<stdlib.h>


#if 0
//����˼·��������һ��������ʼ��Ϊ0������㷴ת���ֵ
//����ѭ��(i = 0; i < 32; i++)ÿ����n>>����iλ, �ƶ�iλ���1��λ��&, Ȼ���ñ���������λ��|
//������<<����1λ��ֱ��32���Ȩλ����������ע�⣺����31�ξ͵��������Ȩλ
unsigned int Bit_reverse(int n)
{
	//n = 7
	//00000000010000000000000000000111
	//11100000000000000000000000000000
	//00000000000000000000000000000001
	unsigned b = 0;
	int i = 0;
	for (i = 0; i <= 31; i++)
	{
		//0110
		b = b | ((n >> i) & 1);
		if (i < 31)
			b = b << 1;
	}
	return b;
}

int main()
{
	int a = 0;
	unsigned b = 0;
	printf("������>");
	scanf_s("%d", &a);

	b = Bit_reverse(a);
	printf("%u\n", b);
	system("pause");
	return 0;
}

#elif 1

int main()
{
	//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
	int a = 10;
	int b = 20;
	//0110 6
	//0010 2  == 4
	//0100
	//0101 ^
	//0010 &
	int c = (a & b) + ((a ^ b) >> 1);//tips
	printf("c = %d\n", c);
	system("pause");
	return 0;
}
#endif // 0

