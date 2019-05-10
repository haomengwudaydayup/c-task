#include "Student.h"
#include<iostream>
#include<string>

using namespace std;

Student::Student()
{
	_name = "马化腾";
	_dict = "普通家庭";
	_age = 30;
	cout << "实现了默认构造0（无参）函数" << endl;
}//默认构造函数的初始化

 //参数传递
Student::Student(string name, string dict) : _name(name), _dict(dict)//初始化参数列表，这样也可以表示
{
	/*_name = name;
	_dict = dict;*/
	cout << "实现了参数构造1Student::Student(string name, string dict)" << endl;
}

Student::Student(short age) : _age(age)
{
	
	cout << "实现了参数构造2Student::Student(short age)" << endl;
}

void Student::Show()
{
	cout << _dict << ' ' << _name << _age << " 岁了！" << endl;
}

//改变姓名
void Student::set_s(string name, string dict)
{
	_name = name;
	_dict = dict;
}
//返回姓名
string Student::get_s()
{
	return _name;
}

Student::~Student()
{
	//析构函数，和构造函数对立，对象结束时，自动调用析构函数。
	cout << _name << "被析构了！" << endl;
}
