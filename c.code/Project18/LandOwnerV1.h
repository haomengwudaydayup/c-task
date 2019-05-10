#pragma once
#include<string>
#include <iostream>
using namespace std;

class LandOwnerV1
{
private:
	string name = "地主";//地主姓名
	long score = 10;//积分
	short cards[20];//手牌
	//以上是成员变量
public:
	//int sof;
	LandOwnerV1() {}
	~LandOwnerV1() {}
	inline void TouchCard(int cradcount)
	{
		cout << name << "摸了" << cradcount << "张牌" << endl;
	}
	inline void showscore()
	{
		cout << name << "当前的积分为: " << score << endl;

	}


};

