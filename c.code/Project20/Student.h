#pragma once
#include<iostream>
#include<string>

using namespace std;

class Student
{
public:
	Student();//����Ĭ�Ϲ��캯��
	Student(string, string);
	Student(short);
	//��3�����캯�����Ǻ������صĸ��
	//1�����캯���������أ������������麯��
	//2�����캯������д���
	//3������д��д���캯�����������ڴ�������󶼻�ִ�У�Ĭ�ϲ������캯������׼����Ҫд��
	//4�����캯����������������
	//�����ǹ��캯�������أ�Ĭ�Ϲ��죬��������

	~Student();//��������-����

	void Show();//��ʾ����
	void set_s(string, string);//�ı亯������
	string get_s();//���غ�������
	//����

private:
	string _name;//����
	string _dict;//��������
	short _age;//����
};

