#include "LandOwnerV4.h"
#include<iostream>

using namespace std;


LandOwnerV4::LandOwnerV4()//���������
{
	cout << "Ĭ�Ϲ��캯��ʵ�֣�" << endl;
	cout << "�������ʼ�������Ա��" << endl;
}

void LandOwnerV4::TouchCards()
{
	cout << _name << "����" << _score << "����" << endl;
}

void LandOwnerV4::showscore()
{
	cout << _name << "��ǰ�Ļ���Ϊ: " << _score << endl;
}

//score��װ-��score���ֲ���Ϊ�㡣
void LandOwnerV4::Setscore(int score)
{
	if (score >= 0)
		_score = score;
	else
		_score = 0;
}
void LandOwnerV4::Setname(string name)
{
	_name = name;
}
string LandOwnerV4::Getname()
{
	return _name;
}


LandOwnerV4::~LandOwnerV4()
{
}
