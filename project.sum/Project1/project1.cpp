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
	cout << "你想求什么类型的体积（长方体，圆，圆柱体）" << endl;
	cout << "1、长方体，2、圆，3、圆柱体" << endl;
	int choice;
	cout << "请输入：" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: {//长方体体积
		double a, b, c;
		cout << "输入长宽高: a,b,c" << endl;
		cin >> a>> b>> c;
		cout << "长方体的体积为：" << a * b * c << endl;
	    break;
	}
	case 2: {//圆的体积
		double a;
		cout << "输入圆的半径：a" << endl;
		cin >> a;
		cout << "圆的体积为：" << (4.0 / 3.0)*pi*a*a*a << endl;;
		break; 
	}
	case 3: {//圆柱体的体积
		double a, b;
		cout << "输入圆柱体的半径和高：a,b" << endl;
		cin >> a>>b;
		cout << "圆柱体的体积为：" << (pi*a*a)*b << endl;
		break;
	}
	default:
		break;
	}
}
