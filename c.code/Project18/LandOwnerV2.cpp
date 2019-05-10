#include "LandOwnerV2.h"
#include <iostream>

using namespace std;


LandOwnerV2::LandOwnerV2()//定义类对象
{

}
//实现摸牌方法
void LandOwnerV2::TouchCards(int cardcount)
{
	cout << name << "摸了" << cardcount << "张牌" << endl;
}
//是实现积分查询
void LandOwnerV2::showscore()
{
	cout << name << "当前的积分为: " << score << endl;
}

LandOwnerV2::~LandOwnerV2()//析构
{
}
