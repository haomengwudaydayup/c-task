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
	LandOwnerV2();  //构造函数的声明
	~LandOwnerV2(); //析构函数的声明

	void TouchCards(int);//声明摸牌方法
	void showscore();//声明的显示积分方法
	//类中声明，源文件实现，方便维护
};

