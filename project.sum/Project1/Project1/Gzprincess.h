#ifndef FUNCPTR_H_INCLUDED
#define FUNCPTR_H_INCLUDED


#pragma once
#include<iostream>
#include<string>
#include<cstdio>
#include<ctime>

using namespace std;

/**ȫ�ֱ���*/
string valueName[]{"����","����","����","����","����"};

/**��Ӻ�������*/
void value_daugther_increase_quality(int *, int);

/**�޸ĺ�������*/
void value_daugther_modify(int *, int);
void value_daugther_reduce(int *, int);
/**��Ӻ���ʵ��*/
void value_daugther_increase_quality(int * value, int len) {
	if (len > 5) {
		cout << "���鳤��ֻ��Ϊ5����!" << endl;
		return;
	}
	for (int i = 0; i < len; i++) {
		cout << valueName[i] << ":";
		cin >> value[i];
	}
}
void value_daugther_modify(int value[], int len) {
	if (len > 5) {
		cout << "���鳤��ֻ��Ϊ5����!" << endl;
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
		cout << "���鳤��ֻ��Ϊ5����!" << endl;
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