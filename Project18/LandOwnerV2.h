#pragma once
#include<string>
#include<iostream>

using namespace std;

class LandOwnerV2
{
public:
	string name;
	long score;
	int cards[20];

public:
	LandOwnerV2();  //���캯��������
	~LandOwnerV2(); //��������������

	void TouchCards(int);//�������Ʒ���
	void showscore();//��������ʾ���ַ���
	//����������Դ�ļ�ʵ�֣�����ά��
};

