#ifndef FUNCPTR_H_INCLUDED
#define FUNCPTR_H_INCLUDED


#pragma once
#include<iostream>
#include<string>
#include<cstdio>
#include<ctime>

using namespace std;

/**全局变量*/
string valueName[]{"体力","智力","魅力","道德","气质"};

/**添加函数定义*/
void value_daugther_increase_quality(int *, int);

/**修改函数定义*/
void value_daugther_modify(int *, int);
void value_daugther_reduce(int *, int);
/**添加函数实现*/
void value_daugther_increase_quality(int * value, int len) {
	if (len > 5) {
		cout << "数组长度只能为5以内!" << endl;
		return;
	}
	for (int i = 0; i < len; i++) {
		cout << valueName[i] << ":";
		cin >> value[i];
	}
}
void value_daugther_modify(int value[], int len) {
	if (len > 5) {
		cout << "数组长度只能为5以内!" << endl;
		return;
	}
	srand((int)time(NULL));
//	cout << endl;
	for (int i = 0; i < 5; i++) {
		value[i] += rand() % 11;
		cout << valueName[i] << ":" << value[i] << endl;
	}
}

void value_daugther_reduce(int value[], int len) {
	if (len > 5) {
		cout << "数组长度只能为5以内!" << endl;
		return;
	}
	srand((int)time(NULL));
	//cout << endl;
	for (int i = 0; i < 5; i++) {
		value[i] -= rand() % 16;
		cout << valueName[i] << ":" << value[i] << endl;
	}
}
#endif // !FUNCPTR_H_INCLUDED