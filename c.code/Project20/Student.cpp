#include "Student.h"
#include<iostream>
#include<string>

using namespace std;

Student::Student()
{
	_name = "����";
	_dict = "��ͨ��ͥ";
	_age = 30;
	cout << "ʵ����Ĭ�Ϲ���0���޲Σ�����" << endl;
}//Ĭ�Ϲ��캯���ĳ�ʼ��

 //��������
Student::Student(string name, string dict) : _name(name), _dict(dict)//��ʼ�������б�����Ҳ���Ա�ʾ
{
	/*_name = name;
	_dict = dict;*/
	cout << "ʵ���˲�������1Student::Student(string name, string dict)" << endl;
}

Student::Student(short age) : _age(age)
{
	
	cout << "ʵ���˲�������2Student::Student(short age)" << endl;
}

void Student::Show()
{
	cout << _dict << ' ' << _name << _age << " ���ˣ�" << endl;
}

//�ı�����
void Student::set_s(string name, string dict)
{
	_name = name;
	_dict = dict;
}
//��������
string Student::get_s()
{
	return _name;
}

Student::~Student()
{
	//�����������͹��캯���������������ʱ���Զ���������������
	cout << _name << "�������ˣ�" << endl;
}
