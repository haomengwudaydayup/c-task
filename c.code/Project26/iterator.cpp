#include<cstdlib>
#include<iostream>
#include<string>
#include<cstdio>
#include<vector>

using namespace std;

int main()
{
	string s("abc   def   ghi");
	string::iterator it;//�����ַ������͵ĵ�����
	it = s.begin();
	//for (it; it != s.end(); ++it)
	//{
	//	cout << *it;
	//}
	//cout << endl;
	//�ֶ����ȥ�ľ��ǲ�һ��
	
	//review string
	int i = 1;
	vector<int> arr_int(10);
	vector<int>::iterator it_int;
	for (it_int = arr_int.begin(); it_int != arr_int.end(); ++it_int)
	{
		cin >> *it_int;
		arr_int.push_back(*it_int);
	}
	for (it_int = arr_int.begin(); it_int != arr_int.end(); ++it_int)
	{
		cout << *it << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}