#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
const double pi = 3.14; 
void function();

int main() {

	function();//
	system("pause");
	return 0;
}

void function() {
	cout << "������ʲô���͵�����������壬Բ��Բ���壩" << endl;
	cout << "1�������壬2��Բ��3��Բ����" << endl;
	int choice;
	cout << "�����룺" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: {//���������
		double a, b, c;
		cout << "���볤���: a,b,c" << endl;
		cin >> a>> b>> c;
		cout << "����������Ϊ��" << a * b * c << endl;
	    break;
	}
	case 2: {//Բ�����
		double a;
		cout << "����Բ�İ뾶��a" << endl;
		cin >> a;
		cout << "Բ�����Ϊ��" << (4.0 / 3.0)*pi*a*a*a << endl;;
		break; 
	}
	case 3: {//Բ��������
		double a, b;
		cout << "����Բ����İ뾶�͸ߣ�a,b" << endl;
		cin >> a>>b;
		cout << "Բ��������Ϊ��" << (pi*a*a)*b << endl;
		break;
	}
	default:
		break;
	}
}
