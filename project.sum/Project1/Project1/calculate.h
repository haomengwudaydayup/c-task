#ifndef FUNCPTR_H_INCLUDED
#define FUNCPTR_H_INCLUDED
#include<iostream>
#include<cstdio>

using namespace std;

double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);

void print_value(double (*)(double, double), double,double);

void print_value(double(*key_1)(double, double), double num1, double num2)
{
	double value = (*key_1)(num1, num2);//keyָ������ָ�������Ӧ���㷨����
	cout << "��������" << value;
	cout << endl;
}

double addition(double num1, double num2)
{
	return num1 + num2;
}

double subtraction(double num1, double num2)
{
	return num1 - num2;
}


double multiplication(double num1, double num2)
{
	return num1 * num2;
}


double division(double num1, double num2)
{
	if (num2 == 0)
		cout << "����" << endl;
	return num1 / num2;
}
#endif // !FUNCPTR_H_INCLUDED



