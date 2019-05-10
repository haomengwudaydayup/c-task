#include "LandOwnerV4.h"
#include<iostream>

using namespace std;


LandOwnerV4::LandOwnerV4()//定义类对象
{
	cout << "默认构造函数实现！" << endl;
	cout << "在这里初始化对象成员！" << endl;
}

void LandOwnerV4::TouchCards()
{
	cout << _name << "得了" << _score << "积分" << endl;
}

void LandOwnerV4::showscore()
{
	cout << _name << "当前的积分为: " << _score << endl;
}

//score封装-让score积分不能为零。
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
