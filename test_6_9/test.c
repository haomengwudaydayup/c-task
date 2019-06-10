#include<stdio.h>
#include<stdlib.h>

#if 0

int main()
{
	char a = -1;
	//10000000000000000000000000000001
	//11111111111111111111111111111111  补码(-1) 
	//11111111111111111111111111111111 //%u   //补1 有符号补1
	//10000000000000000000000000000001 //%d
	unsigned char b = -1;
	//10000000000000000000000000000001
	//11111111111111111111111111111111
	//00000000000000000000000011111111 //signed 补0  无符号补0  %u == %d

	signed char c = -1;
	printf("Ua = %u\n", a);
	printf("Ub = %u\n", b);
	printf("a=%d,b=%d,c=%d", a, b, c); //牵扯整形提升
	getch();
	return 0;
}

#elif 1

int main()
{

	int n = 9;
	//0 0000000 0 00000000000000000001001
	//(-1)^S * M * s^E
	//M表示有效数字，大于等于1，小于2
	//2^E表示指数位
	float *pFloat = (float *)&n;

	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);//这是float类型的解析

	*pFloat = 9.0;  
	printf("num的值为：%d\n", n); 
	//0 100 0001 0001 0000 0000 0000 0000 0000
	printf("*pFloat的值为：%f\n", *pFloat);

	getch();
	return 0;
}
#endif // 0

