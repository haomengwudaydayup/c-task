/**********************************************
*
*	�ļ����� Beautiful_gils_development.cpp
*	��Ʒ���� ����Ů���ɼ�
*              �����ˣ� ������
*	���ڣ�   2019-4-7
*   	���ߣ�   ������
*	�汾��   1.0.0
*
***********************************************/

#include<iostream>
#include<iomanip>//���������ʽ(���������)
#include<ctime>
#include<vector>
#include<array>
#include<cstdlib>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
	//1.�����ʼ��Ϣ
	string value_father_name;//���常������
	string value_daughter_name;//����Ů������
	int value_birth_month;//����Ů�������·�
	int value_birth_data;//����Ů����������
	string value_daughter_constell; //����Ů��������
	int value_daughter_money = 500;//�����Ǯ����
	int value_daugther_affinity = 50;//�����Ů�������ܶ�
	int choice, temp1, temp2, temp3, temp4;//������ʱ����
	/*������ά����*/
	string constell_names[12][2] = {
		{"ɽ����","ˮƿ��"},//1��
		{"ˮƿ��","˫����"},//2
		{"˫����","������"},//3
		{"������","��ţ��"},//4
		{"��ţ��","˫����"},//5
		{"˫����","��з��"},//6
		{"��з��","ʨ����"},//7
		{"ʨ����","��Ů��"},//8
		{"��Ů��","�����"},//9
		{"�����","��Ы��"},//10
		{"��Ы��","������"},//11
		{"������","ɽ����"}//12
	};
	/*����������*/
	int constell_datas[]{ 20,19,21,20,21,22,23,23,23,24,23,22 };



	//2.ΪŮ��¼���ʼ��Ϣ
	cout << "�����븸�׵�������" << endl;
	cin >> value_father_name;//¼�븸�׵�����
	cout << "������Ů����������" << endl;
	cin >> value_daughter_name;//¼��Ů��������
	cout << "������Ů��������(MM DD)��" << endl;
	cin >> value_birth_month >> value_birth_data;//¼��Ů���ĳ����·�

	/*���Ů��������*/
	value_daughter_constell = constell_names[value_birth_month - 1][value_birth_data / constell_datas[value_birth_month - 1]];

	cout << "�������������Ϣ��ϵͳ����Ϊ������Ů����Ϣ����" << endl;
	cout << "-----------Ů����Ϣ��-----------\n"
		<< "������" << value_daughter_name << '\n'
		<< "���գ�1659��" << value_birth_month << "��" << value_birth_data << "��\n"
		<< "������" << constell_names[value_birth_month - 1][value_birth_data / constell_datas[value_birth_month - 1]] << endl;
	//  ����Ů���ĳ�ʼ��Ϣ�ó�Ů���տ�ʼ����Ϸ����(���������������������£�����)

	array<int, 5> value_daughter_power;//�������������Ů������Ϸ����-Ů��������
	array<string, 5> value_power_name = { "����","����","����","����","����" };//������Ϣ

	if (value_daughter_constell == "������") {
		value_daughter_power[0] = 80; value_daughter_power[1] = 15; value_daughter_power[2] = 15; value_daughter_power[3] = 25; value_daughter_power[4] = 11;
	}
	else if (value_daughter_constell == "��ţ��") {
		value_daughter_power[0] = 46; value_daughter_power[1] = 30; value_daughter_power[2] = 28; value_daughter_power[3] = 35; value_daughter_power[4] = 20;
	}
	else if (value_daughter_constell == "˫����") {
		value_daughter_power[0] = 50; value_daughter_power[1] = 35; value_daughter_power[2] = 23; value_daughter_power[3] = 26; value_daughter_power[4] = 8;
	}
	else if (value_daughter_constell == "��з��") {
		value_daughter_power[0] = 40; value_daughter_power[1] = 31; value_daughter_power[2] = 33; value_daughter_power[3] = 23; value_daughter_power[4] = 17;
	}
	else if (value_daughter_constell == "ʨ����") {
		value_daughter_power[0] = 85; value_daughter_power[1] = 9; value_daughter_power[2] = 11; value_daughter_power[3] = 28; value_daughter_power[4] = 20;
	}
	else if (value_daughter_constell == "��Ů��") {
		value_daughter_power[0] = 35; value_daughter_power[1] = 28; value_daughter_power[2] = 36; value_daughter_power[3] = 19; value_daughter_power[4] = 18;
	}
	else if (value_daughter_constell == "�����") {
		value_daughter_power[0] = 42; value_daughter_power[1] = 33; value_daughter_power[2] = 25; value_daughter_power[3] = 24; value_daughter_power[4] = 32;
	}
	else if (value_daughter_constell == "��Ы��") {
		value_daughter_power[0] = 50; value_daughter_power[1] = 25; value_daughter_power[2] = 40; value_daughter_power[3] = 20; value_daughter_power[4] = 18;
	}
	else if (value_daughter_constell == "������") {
		value_daughter_power[0] = 57; value_daughter_power[1] = 31; value_daughter_power[2] = 15; value_daughter_power[3] = 26; value_daughter_power[4] = 19;
	}
	else if (value_daughter_constell == "ɽ����") {
		value_daughter_power[0] = 56; value_daughter_power[1] = 21; value_daughter_power[2] = 16; value_daughter_power[3] = 22; value_daughter_power[4] = 25;
	}
	else if (value_daughter_constell == "ˮƽ��") {
		value_daughter_power[0] = 43; value_daughter_power[1] = 43; value_daughter_power[2] = 20; value_daughter_power[3] = 27; value_daughter_power[4] = 23;
	}
	else if (value_daughter_constell == "˫����") {
		value_daughter_power[0] = 41; value_daughter_power[1] = 20; value_daughter_power[2] = 29; value_daughter_power[3] = 25; value_daughter_power[4] = 2;
	}

	//3.��ʼ��Ϸ��ѭ��
	for (int year = 1659; year < 1659 + 2; year++) {
		for (int month = (year == 1659) ? value_birth_month : 1; month < 12;) {
			/*�жϱ����Ƿ���Ů��������*/
			if (month == value_birth_month) {
				cout << "����" << value_birth_data << "��" << value_daughter_name << "������,Ҫ��Ҫ�������أ�" << endl;
				cout << "��������(y)  ��(n)" << endl;
				string value_input;
				cin >> value_input;
				if ("yes" == value_input) {
					cout << "��������50��Ҹ�С������һ�ݾ��������" << endl;
					value_birth_month -= 50;
					cout << "����Ů���ر��ģ���������Ů�������ܶ�����" << endl;//���ܶȾ�������Ů��֮��ѵ��ʱ��������
					value_daugther_affinity += rand() % 51;
				}

			}
			//��ʾ��Ϸ���˵�
			cout << "\n1���鿴״̬\n2�������г�\n3������̸��\n4���浵\n5������" << endl;//��������˵�������ʾ
			cout << "��ѡ��";
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			case 1: {//�鿴״̬
				cout << "----Ů������Ϣ������----\n"
					<< "������" << value_daughter_name << '\n'
					<< "���գ�1659��" << value_birth_month << "��" << value_birth_data << "��\n"
					<< "������" << constell_names[value_birth_month - 1][value_birth_data / constell_datas[value_birth_month - 1]] << endl;
				//��ӡ��������
				cout << left;
				for (int i = 0; i < 5; i++) {
					cout << value_power_name[i] << ": " << setw(3) << value_daughter_power[i];
					//�������ӡ����
					int solidcount = value_daughter_power[i] / 10; //���巽�����
					for (int j = 0; j < 10; j++) {
						if (j < solidcount)
							cout << "A";
						else
							cout << "a";
					}
					cout << endl;
				}
				//������
				int sum = 0;
				for (int i = 0; i < 5; i++) {
					sum += value_daughter_power[i];
				}
				cout << "������ֵ��" << setw(3) << sum << endl;//��ӡ������ֵ
				cout << "��ң�" << setw(3) << value_daughter_money << endl;//��ӡ��Ǯ����
				cout << "����ֵ��" << setw(3) << value_daugther_affinity << endl;//��ӡ����ֵ

				break;
			}
			case 2: {//�����г� - ÿ�°���3���г�
				string month_parts[]{ "��Ѯ","��Ѯ","��Ѯ" };//����ÿ���µĳ̶�
				for (int i = 0; i < 3; i++) {
					cout << "-------" << year << "��" << month << "��" << "--" << month_parts[i] << "--------" << endl;
					cout << "1��ѧϰ����\n2����˽��\n3��ѧϰ��\n4����������\n5����׬Ǯ" << endl;
					cout << "\n��ѡ��";
					cin >> choice;
					//�������ûǮ�Ļ���ǿ�ƴ򹤣�
					if (value_daughter_money <= 0)
					{
						cout << "���Ľ��Ϊ�㣬������ѡ���׬Ǯ��" << endl;
						goto Next;
					}
					srand((int)time(NULL));//�������������
					if (choice == 1) {// 1��ѧϰ���գ� ��+���� +���� -��Ǯ ----��������Ϊ���ֵ��
						value_daughter_power[0] += temp1 = rand() % 21;//����ֵ�仯���ֵ0-10
						value_daughter_power[2] += temp2 = rand() % 11;//����ֵ�仯0-10
						value_daughter_power[4] -= temp4 = rand() % 6;//0-5
						value_daughter_money -= temp3 = rand() % 51;//���ֵ0-50
						string value_power_title[3]{ " ����磬վ���ɣ�����","ѧϰ���޼ɺð���������","��������Ȳ���ᣡ����" };//����
						int choice1 = rand() % 3;//���ֵ0-3
						switch (choice1)//����ѭ�����б��������
						{
						case 0:
							cout << "----" << value_power_title[0] << "----" << endl;
							break;
						case 1:
							cout << "----" << value_power_title[1] << "----" << endl;
							break;
						case 2:
							cout << "----" << value_power_title[2] << "----" << endl;
							break;
						default:
							break;
						}
						cout << "����+" << temp1 << "������+" << temp2 << "������-" << temp4 << ",��Ǯ-" << temp3 << endl;
						cout << endl;

					}
					else if (choice == 5) {// 5����׬Ǯ �����ӽ�ң�
					Next:
						value_daughter_money += temp1 = rand() % 151;//���ӽ��
						string value_power_title[]{ "�ڳ����������ش򹤣����õ����ϰ�Ľ���������","�ڲ���������Ա��Ŭ���ڷܣ�����" };
						int choice1 = rand() % 2;
						if (choice1 == 0)
							cout << value_power_title[0];
						else if (choice1 == 1)
							cout << value_power_title[1];
						cout << endl;
						cout << "���+" << temp1 << endl;//�������

					}
					else if (choice == 2) {//2����˽�� ���������������¡����ʣ�
						value_daughter_power[1] += temp1 = rand() % 16;
						value_daughter_power[3] += temp2 = rand() % 6;
						value_daughter_power[4] += temp3 = rand() % 11;
						value_daughter_money -= temp4 = rand() % 61;
						string value_power_title[]{ "������������һ��һī�У�����","��ʦ���Ľ̵�������Ϥ������������","һ��һīһ���磡����" };
						cout << endl;
						int choice1 = rand() % 3;
						if (choice1 == 0) {
							cout << value_power_title[0] << endl;
						}
						else if (choice1 == 1) {
							cout << value_power_title[1] << endl;
						}
						else if (choice1 == 2) {
							cout << value_power_title[2] << endl;
						}
						cout << "����+" << temp1 << "������+" << temp2 << ",����+" << temp3 << ",���-" << temp4 << endl;
						cout << endl;
					}
					else if (choice == 3) {//3�� ѧϰ��
						value_daughter_power[2] += temp1 = rand() % 11;
						value_daughter_power[3] += temp2 = rand() % 21;
						value_daughter_power[4] += temp3 = rand() % 11;
						value_daughter_money -= temp4 = rand() % 41;
						string value_power_title[]{ "��ڽ̵�����������������","��ʦ���Ľ̵�������Ϥ������������","ѧϰŮ����ò����ڣ�����" };
						cout << endl;
						int choice1 = rand() % 3;
						if (choice1 == 0) {
							cout << value_power_title[0] << endl;
						}
						else if (choice1 == 1) {
							cout << value_power_title[1] << endl;
						}
						else if (choice1 == 2) {
							cout << value_power_title[2] << endl;
						}
						cout << "����+" << temp1 << "������+" << temp2 << ",����+" << temp3 << ",���-" << temp4 << endl;
						cout << endl;
					}
					else if (choice == 4) {//4�� ��������
						value_daughter_power[0] += temp1 = rand() % 16;
						value_daughter_power[4] += temp3 = rand() % 21;
						value_daughter_money -= temp4 = rand() % 51;
						string value_power_title[]{ "�����ʦ�����������磡����","�������£�Ʒ�¼汸������","����Զ�� ��������������������" };
						cout << endl;
						int choice1 = rand() % 3;
						if (choice1 == 0) {
							cout << value_power_title[0] << endl;
						}
						else if (choice1 == 1) {
							cout << value_power_title[1] << endl;
						}
						else if (choice1 == 2) {
							cout << value_power_title[2] << endl;
						}
						cout << "����+" << temp1 << ",����+" << temp3 << ",���-" << temp4 << endl;
						cout << endl;
					}
				}
				month++;
				break;


			}
			case 3: {//�װ�̸��

				month++;
				break;
			}
			case 4://�浵

				month++;
				break;
			case 5://����

				month++;
				break;
			default:
				break;

			}
		}
	}
	//4.������Ϸ�������ж���Ϸ���
	cout << "1961��" << value_birth_month << "��" << value_birth_data << "��" << endl;
	cout << "���Ů��" << value_daughter_name << "���ڳ������" << endl;
	cout << "���Ů���뿪���㣬18���������ʱ��ǰ��С����������Ҫ�뿪��Ļ��������Ǹ�Ů�����౧�����շ��֣�����Ȼ����������ӣ�ֱ���ֿ�����֪��δ������......" << endl;
	cout << "��ϲ��ͨ����Ϸ��\n" << "����������Ů�������Բ�������������·��" << endl;
	cout << "��ͼ�������Ա���" << endl;

	cout << "----ϵͳ����Ů������Ϣ��----\n"
		<< "������" << value_daughter_name << '\n'
		<< "���գ�1659��" << value_birth_month << "��" << value_birth_data << "��\n"
		<< "������" << constell_names[value_birth_month - 1][value_birth_data / constell_datas[value_birth_month - 1]] << endl;
	//��ӡ��������
	cout << left;
	for (int i = 0; i < 5; i++) {
		cout << value_power_name[i] << ": " << setw(3) << value_daughter_power[i];
		//�������ӡ����
		int solidcount = value_daughter_power[i] / 10; //���巽�����
		for (int j = 0; j < 10; j++) {
			if (j < solidcount)
				cout << "A";
			else
				cout << "a";
		}
		cout << endl;
	}
	cout << "ϵͳ����������....." << endl;

	int sum = 0;//�ܲ���
	for (int i = 0; i < 5; i++)
		sum += value_daughter_power[i];
	if (sum >= 800) {
		cout << "��ϲ���������������£�����Ů��" << value_daughter_name << "�������������ǻ�ΪŮ������!" << endl;
	}
	else if (sum >= 700) {
		cout << "��ϲ���������������£�����Ů��" << value_daughter_name << "��������������Ϊ������" << endl;
	}
	else if (sum >= 650) {
		cout << "��ϲ���������������£�����Ů��" << value_daughter_name << "��������������ΪŮ������" << endl;
	}
	else if (sum >= 500) {
		int maxValue = value_daughter_power[0];
		int maxIndex = 0;
		for (int i = 0; i < 5; i++) {
			if (maxValue < value_daughter_power[i]) {
				maxValue = value_daughter_power[i];
				maxIndex = i;
			}//{ "����","����","����","����","����" }
			if ("����" == value_power_name[maxIndex] && value_daughter_power[0] > value_daughter_power[1])
				cout << "������иŬ��������Ů��" << value_daughter_name << "��Ϊ�� �ʼ�ѧԺ�ܲã�" << endl;
			else if ("����" == value_power_name[maxIndex] && value_daughter_power[2] > value_daughter_power[0])
				cout << "������иŬ��������Ů��" << value_daughter_name << "��Ϊ�� ������" << endl;
			else if ("����" == value_power_name[maxIndex] && value_daughter_power[4] > value_daughter_power[2])
				cout << "������иŬ��������Ů��" << value_daughter_name << "��Ϊ�� ������ʿ�ų���" << endl;
			else if ("����" == value_power_name[maxIndex] && value_daughter_power[2] > value_daughter_power[4])
				cout << "������иŬ��������Ů��" << value_daughter_name << "��Ϊ�� �߼���˾��" << endl;
			else if ("����" == value_power_name[maxIndex] && value_daughter_power[4] > value_daughter_power[3])
				cout << "������иŬ��������Ů��" << value_daughter_name << "��Ϊ�� �����ĳ�����" << endl;
		}
	}
	else {
		string value_works_name[]{ "ũ��","ħ��ʦ","��Ů","����","�ư�Ů��" };
		int choice1 = rand() % 5;
		if (choice1 == 0) {
			cout << "����Ů�����ɲģ���Ϊ��һ�����ڵ�" << value_works_name[0] << endl;
		}
		else if (choice1 == 1) {
			cout << "����Ů�����ɲģ���Ϊ��һ������" << value_works_name[1] << endl;
		}
		else if (choice1 == 2) {
			cout << "����Ů�����ɲģ���Ϊ��һ��" << value_works_name[2] << endl;
		}
		else if (choice1 == 3) {
			cout << "����Ů�����ɲģ���Ϊ��һ��" << value_works_name[3] << endl;
		}
		else if (choice1 == 4) {
			cout << "����Ů�����ɲģ���Ϊ��һ��" << value_works_name[4] << endl;
		}
	}
	cout << "лл��������Ϸ�����飡" << endl;
	system("pause");
	return 0;
}