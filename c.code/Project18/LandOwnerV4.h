#pragma once
#include<string>
#include<iostream>

using namespace std;

class LandOwnerV4
{
	//Ĭ��Ϊ˽�����ԣ�����˽�������ڿ�ͷ���»��ߣ��淶���
	string _name;
	//int score;
	int _score;//˽������
	int _crads[20];//˽������

public:

	LandOwnerV4();//���캯��
	~LandOwnerV4();//��������

	void TouchCards();//�������Ʒ���
	void showscore();//��������ʾ���ַ���

	//ʹ��һ����������װ�Ա��⴫�ݲ���score<0
	void Setscore(int);//�������װ�����ڲ�ʵ���ˣ����Ǻ���⣬������������������
	//�������Ǻ�����c++���Է�װ���Ǻ�����װ������������ࣨ.h .hpp�������ʵ�֣�.cpp)ʵ�ֶ�����
	//����������ʵ�ֵĻ�����������Ҫ̫�ߣ������ʵ����ʵ�ֵĻ���Ҫ�����н���������
	//��������ʵ�������ļ����������ɷ���ģ����߹������ж����Ա�����ͳ�Ա����
	//:: ������������������
    
	void Setname(string);//
	string Getname(void);//
};

