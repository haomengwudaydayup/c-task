#include<stdio.h>
#include<stdlib.h>

#if 0

int main()
{
	char a = -1;
	//10000000000000000000000000000001
	//11111111111111111111111111111111  ����(-1) 
	//11111111111111111111111111111111 //%u   //��1 �з��Ų�1
	//10000000000000000000000000000001 //%d
	unsigned char b = -1;
	//10000000000000000000000000000001
	//11111111111111111111111111111111
	//00000000000000000000000011111111 //signed ��0  �޷��Ų�0  %u == %d

	signed char c = -1;
	printf("Ua = %u\n", a);
	printf("Ub = %u\n", b);
	printf("a=%d,b=%d,c=%d", a, b, c); //ǣ����������
	getch();
	return 0;
}

#elif 1

int main()
{

	int n = 9;
	//0 0000000 0 00000000000000000001001
	//(-1)^S * M * s^E
	//M��ʾ��Ч���֣����ڵ���1��С��2
	//2^E��ʾָ��λ
	float *pFloat = (float *)&n;

	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);//����float���͵Ľ���

	*pFloat = 9.0;  
	printf("num��ֵΪ��%d\n", n); 
	//0 100 0001 0001 0000 0000 0000 0000 0000
	printf("*pFloat��ֵΪ��%f\n", *pFloat);

	getch();
	return 0;
}
#endif // 0

