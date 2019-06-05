/*
	A、B、C、D、E这5个人合伙夜间捕鱼，凌晨时都已经疲惫不堪,
	于是各自在河边的树丛中找地方睡着了。第二天日上三竿时，A第一个醒来，
	他将鱼平分为5份，把多余的一条扔回河中，然后拿着自己的一份回家去了；
	B第二个醒来，但不知道A已经拿走了一份鱼，于是他将剩下的鱼平分为5份，
	扔掉多余的一条，然后只拿走了自己的一份；接着C、D、E依次醒来，也都按同样的办法分鱼。
	问这5人至少合伙捕到多少条鱼？每个人醒来后所看到的鱼是多少条？

	本题的思路在于发现规律，构造算法，
	规律1：每个人面对的鱼数 --> (n - 1) % 5 == 0
	规律2：下一个人面对的鱼数是 --> n-1 = 4 * (n - 1) / 5,而且还要满足(n - 1) % 5 == 0
*/

#include<stdio.h>
#include<stdlib.h>

int check(int A)
{
	int B, C, D, E;
	if ((A - 1) % 5 == 0)
	{
		B = 4 * (A - 1) / 5;

		if ((B - 1) % 5 == 0)
		{
			C = 4 * (B - 1) / 5;

			if ((C - 1) % 5 == 0)
			{
				D = 4 * (C - 1) / 5;

				if ((D - 1) % 5 == 0)
				{
					E = 4 * (D - 1) / 5;
					
					if ((E - 1) % 5 == 0)
					{
						printf("A = %d\nB = %d\nC = %d\nD = %d\nE = %d\n", A, B, C, D, E);
						return 1;
					}
					else
						return 0;
				}
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;

	}
	else
		return 0;

}

int check_up(int n, int num_A)
{
	if (((num_A - 1) % 5) == 0)
	{
		if (n == 1)
			return 1;//成功退出递归
		return check_up(n-1, (4 * (num_A - 1) / 5));
		
	}
	else
		return 0;
}
int main()
{
	int i = 6;//测试条数
	int n = 5;
	do//
	{
		if(check_up(n, i) == 1)
			printf("sum = %d\n", check_up(n, i));
		i += 5;
	} while (check_up(n, i) != 1);
	getch();
	return 0;
}