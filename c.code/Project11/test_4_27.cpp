/*
	��ɹ���
	1������
	2������
*/
#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;
//������ģ������
template<typename T1> void sort(T1 arr[],int );
//���Һ���ģ������
template<typename T2> void binary_seek(T2 arr[], int ,int);
int main()
{
	
	int arr_int[10];
	double arr_double[10];
	cout << "������int��ŵ�ֵ" << endl;
	//arr_int������
	for (int i = 0; i < 10; i++)
	{
		cin >> arr_int[i];
	}

	//arr_double������
	cout << "������double��ŵ�ֵ" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr_double[i];
	}
	//arr_int�����
	cout << "�����ŵ�ֵ" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr_int[i] <<'\t';
	}
	cout << endl;
	//arr_double�����
	for (int i = 0; i < 10; i++)
	{
		cout << arr_double[i] << '\t';
	}
	cout << endl;
	
	//arr_int������
	cout << "������ֵ" << endl;
	sort(arr_int, sizeof(arr_int) / sizeof(int));//����int 
	cout << endl;
	
	//arr_double������
	sort(arr_double, sizeof(arr_double) / sizeof(double));//����double
	cout << endl;

	//�����ǲ���
	int value = 1;
	cout << "������������ҵ�ֵvalue_int:" << endl;
	cin >> value;
	binary_seek(arr_int, sizeof(arr_int) / sizeof(int), value);
	cout << endl;

	cout << "������������ҵ�ֵvalue_double:" << endl;
	cin >> value;
	binary_seek(arr_double, sizeof(arr_double) / sizeof(double), value);
	cout << endl;

	system("pause");
	return 0;
	
}
//������ģ�嶨��
template<typename T1>
void sort(T1 arr[], int lengh)//lengh�����鳤��
{
	//����������㷨
	T1 temp;
	int i = 1, j = 1;
	for (i = 0; i < lengh; i++)
	{
		for (j = 0; j < lengh-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ' ';
	}
}
template<typename T2>
void binary_seek(T2 arr[], int lengh, int value)
{
	int left = 0;
	int right = lengh - 1;
	while (left <= right)
	{
		int temp = (right - left) / 2 + left;
		if (arr[temp] > value)
			right = temp - 1;
		else if (arr[temp] < value)
			left = temp + 1;
		else if (arr[temp] = value)
		{
			cout << "�ҵ����±�Ϊ" << temp + 1 << endl;
			break;
		}
	}
	if (left > right)
		cout << "��������û�����ֵ" << endl;
}