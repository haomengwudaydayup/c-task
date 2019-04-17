#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
//#include"calculate.h";
#include<vector>
using namespace std;

//今天采用函数重载
void sort(int[], int len);
void sort(double [], int len);

void show(int[], int len);
void show(double[], int len);
int main()
{
	int a[5]{ 45,21,3,78,100 };
	double b[5]{ 12,21,4,59,21 };
	cout << "未排序前的:" << "\t";
	show(a,sizeof(a)/sizeof(int));
	sort(a, sizeof(a) / sizeof(int));
	cout << "排序后的:" << "\t";
	show(a, sizeof(a) / sizeof(int));
	cout << endl;

	cout << "未排序前的:" << "\t";
	show(b, sizeof(b) / sizeof(double));
	sort(b, sizeof(b) / sizeof(double));
	cout << "排序后的:" << "\t";
	show(b, sizeof(b) / sizeof(double));

	system("pause");
	return 0;
}
void sort(int a[], int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
}
void show(int a[], int len) {
	for (int i = 0; i < len; i++)
		cout << a[i] << ',';
	cout << endl;
}
void sort(double a[], int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (a[j] < a[j + 1]) {
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
}
void show(double a[], int len) {
	for (int i = 0; i < len; i++)
		cout << a[i] << ',';
	cout << endl;
}
