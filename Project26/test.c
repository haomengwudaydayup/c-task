//#include<stdio.h>
//#include<stdlib.h>
//
//
//int main()
//{
//	int  a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int value = 5;
//	scanf_s("%d", &value);
//	int left = -1;
//	int right = 10;
//	while (left <= right)
//	{
//		int temp = (right - left) / 2 + left;
//		if (a[temp] < value)
//		{
//			left = temp;
//		}
//		else if (a[temp] > value)
//		{
//			right = temp;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", temp);
//			break;
//		}
//	}
//	if (left >= right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	system("pause");
//	return 0;
//}