#include<iostream>
#include<string>
#include<cstdlib>
#include"Student.h"

using namespace std;

int main()
{
	//Student student;
	////���ʵ��õ�Ȩ����û����
	//student.Show();
	//cout << student.get_s() << endl;
	//student.set_s("������");
	//student.Show();
	//cout << student.get_s() << endl;
	
	//Student student;//����һ������
	//Student student1 = 15;
	//student.Show();//��ʾ��һ��
////	student.set_s("����","��ڴ�������ܿ�ɭ");
//	cout << endl;
//	student.Show();
//	
	Student student1("����", "��ڴ�������ܿ�ɭ");
//	student.Show();
//	cout << endl;
//	Student student2 = 100;//��Ϊ���캯�������ҽ���һ�������ĺ������Ϳ���������ֵ�����ܲ���ʲô���͵ģ�
//	student2.Show();
//
//
//	cout << "--------------" << endl;
//	student.Show();
//	student1.Show();
//	student2.Show();
//	//ÿһ������ֻ��һ�����캯������һ��������кܶ๹�캯��
//	cout << "--------------" << endl;
//	Student *stud = &student1;
//	stud->Show();
//	//Student *stud = &student1; ��ָ��ʹ�÷���һ����studָ��ָ�����student1���洢student1�ĵ�ַ
//	cout << "--------------" << endl;
//	//�����ȡ��̬�����ڴ�ķ�����������ָ��
	Student *stud1 = new Student("������", "IT����ţ��");
	stud1->Show();
    delete(stud1);

	system("pause");
	return 0;
}