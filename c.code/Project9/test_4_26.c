/*
	������е��Ĵ�C����ѧϰ
*/
#include<stdio.h>
#include<stdlib.h>
//��������һ����������
//int main()
//{
//	int i = 1;//���ȴ���һ������
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//Ȼ���ٴ���һ������
//	for (i = 0; i <= 13; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;//�м������λa[9] a[10] a[11] a[12]=i
//		//Խ����ʣ�Ȼ��ı��˱���i��ֵ��ʹ��һֱ��ѭ��
//	}
//	//��ջ�������ڴ��Ǹ���һ����ʽ����ģ��ȶ���ı����ڸߵ�ַ������ı����ڵ͵�ַ
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	
//	//��forѭ���в�Ҫ������������Ӹı�ѭ��������ֵ�����ûᵼ����ѭ��
//	int i = 1;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("hehe\n");
//		i = 5;//���ı��ѭ��������ֵ�����γ���ѭ��
//	}
//	//������whileѭ��Ҫע��break��continue�ȹؼ���
//	i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("hehe");
//		i++;
//	//����i=5ʱ��continue����Ǵ�����ʼ��������ѭ������������䣬����i����++,һֱ����5��һֱ����ѭ������
//	//break Ҳ�ǽ���������ʼ��ֱ�����������������䲻ִ��
//	//���ҪС��ע��
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//for(;;)����ѭ��
//	int x = 1, y = 1;
//	for (x = 0, y = 0; y < 5, x < 2; ++x, y++)//ֻѭ����ӡ2��
//	{
//		//���ű��ʽb = (a = 10),(b = 20),(c = 30);
//		//�����ö��ű��ʽ��Ϊѭ���壬�����ű��ʽ�������һ����ʽ��x<2
//		printf("hehe");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//��n�Ľ׳�
//	int i = 1;
//	int n = 1;
//	int sum = 1;
//	scanf_s("%d", &n);//�������������Ľ׳�
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * n;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i= 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret = ret*i;
//		}
//		sum += ret;//sum = sum + ret;
//	}//�������1�Ľ׳�+2�Ľ׳�+3�Ľ׳�+һֱ�ӵ�n�Ľ׳�
//
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
////	int c = (a+b)/2;
//	int c = (a-b)/2+b;
//	//��ƽ����ʱ�������������󷨲�������ȷ��(��-��)/2+��
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

int main()
{
	//���ֲ��ҷ���Ҳ���۰����
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 17;//k����Ҫ���ֵ
	int left = 0;//���±�
	int right = sizeof(arr)/sizeof(arr[0])-1;//���±�

	while(left<=right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid]<k)
		{
			left = mid+1;
		}
		else if(arr[mid] > k)
		{
			right = mid-1;
		}
		else
		{
			printf("�ҵ���,�±��ǣ�%d\n", mid);
			break;
		}
	}
	if(left>right)
	{
		printf("�Ҳ���\n");
	}
	system("pause");
	return 0;
}