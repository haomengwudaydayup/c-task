#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#if 0
/*
	5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
    A选手说：B第二，我第三； 
    B选手说：我第二，E第四； 
    C选手说：我第一，D第二； 
    D选手说：C最后，我第三； 
    E选手说：我第四，A第一； 
    比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。 
	这道题好懵逼，我可以说这道题是认真的吗？
*/

#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, i = 1;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
						{
							if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
							{
								if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
								{
									if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
									{
										if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
										{//对五个值均不相同的判断
											if (((a != b) && (a != c) && (a != d) && (a != e))
												&& ((b != c) && (b != d) && (b != e))
												&& ((c != d) && (c != e))
												&& ((d != e)))
											{
												printf("a= 第%d名, b= 第%d名,c= 第%d名,d= 第%d名,e= 第%d名\n", a, b, c, d, e);
											}

										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}

#elif 0

#include <stdio.h>    
int main()
{
	int murder;
	for (murder = 'A'; murder <= 'D'; murder++)
	{//运用条件语句来处理，NICE
		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3)
		{
			printf("murder is %c\n", murder);
		}

	}
	system("pause");
	return 0;
}

#elif 1
//3.在屏幕上打印杨辉三角。
//         1
//        1 1
//       1 2 1
//      1 3 3 1
//     1 4 6 4 1
//   1 5 10 10 5 1
// 1 6 15 20 15 6 1

int main()
{
	int a[7][7]; //定义7行7列的杨辉三角
	int i, j;

	for (i = 0; i < 7; i++) //先赋值杨辉三角两边
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}

	for (i = 2; i < 7; i++) // 计算中间的数值 
	{
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	}

	for (i = 0; i < 7; i++) // 输出
	{
		for (j = 0; j < i + 1; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}



#endif // 0
