#pragma once
#include<string>
#include <iostream>
using namespace std;

class LandOwnerV1
{
private:
	string name = "����";//��������
	long score = 10;//����
	short cards[20];//����
	//�����ǳ�Ա����
public:
	//int sof;
	LandOwnerV1() {}
	~LandOwnerV1() {}
	inline void TouchCard(int cradcount)
	{
		cout << name << "����" << cradcount << "����" << endl;
	}
	inline void showscore()
	{
		cout << name << "��ǰ�Ļ���Ϊ: " << score << endl;

	}


};

