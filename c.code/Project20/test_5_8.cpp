#include<iostream>
#include<string>
#include<cstdlib>
#include"Student.h"

using namespace std;

int main()
{
	//Student student;
	////访问调用的权力都没有了
	//student.Show();
	//cout << student.get_s() << endl;
	//student.set_s("李云龙");
	//student.Show();
	//cout << student.get_s() << endl;
	
	//Student student;//创建一个对象
	//Student student1 = 15;
	//student.Show();//显示第一次
////	student.set_s("马云","后悔创建阿里杰克森");
//	cout << endl;
//	student.Show();
//	
	Student student1("马云", "后悔创建阿里杰克森");
//	student.Show();
//	cout << endl;
//	Student student2 = 100;//因为构造函数中有且仅有一个参数的函数，就可以这样赋值。不管参数什么类型的！
//	student2.Show();
//
//
//	cout << "--------------" << endl;
//	student.Show();
//	student1.Show();
//	student2.Show();
//	//每一个对象只有一个构造函数，但一个类可以有很多构造函数
//	cout << "--------------" << endl;
//	Student *stud = &student1;
//	stud->Show();
//	//Student *stud = &student1; 和指针使用方法一样。stud指针指向对象student1，存储student1的地址
//	cout << "--------------" << endl;
//	//下面采取动态分配内存的方法创建对象指针
	Student *stud1 = new Student("郝梦武", "IT顶尖牛人");
	stud1->Show();
    delete(stud1);

	system("pause");
	return 0;
}