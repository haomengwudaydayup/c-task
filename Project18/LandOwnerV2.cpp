#include "LandOwnerV2.h"
#include <iostream>

using namespace std;


LandOwnerV2::LandOwnerV2()//���������
{

}
//ʵ�����Ʒ���
void LandOwnerV2::TouchCards(int cardcount)
{
	cout << name << "����" << cardcount << "����" << endl;
}
//��ʵ�ֻ��ֲ�ѯ
void LandOwnerV2::showscore()
{
	cout << name << "��ǰ�Ļ���Ϊ: " << score << endl;
}

LandOwnerV2::~LandOwnerV2()//����
{
}
