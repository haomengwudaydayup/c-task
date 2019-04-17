/**********************************************
*
*	文件名： Beautiful_gils_development.cpp
*	作品名： 美少女养成记
*   创建人： 郝梦武
*	日期：   2019-4-7
*   作者：   郝梦武
*	版本：   1.0.0
*
***********************************************/

#include<iostream>
#include<iomanip>//控制输出格式(输入输出流)
#include<ctime>
#include<vector>
#include<array>
#include<cstdlib>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
	//1.定义初始信息
	string value_father_name;//定义父亲名字
	string value_daughter_name;//定义女儿名字
	int value_birth_month;//定义女儿出生月份
	int value_birth_data;//定义女儿出生日期
	string value_daughter_constell; //定义女儿的星座
	int value_daughter_money = 500;//定义金钱总量
	int value_daugther_affinity = 50;//定义和女儿的亲密度
	int choice, temp1, temp2, temp3, temp4;//定义临时变量
	/*星座二维数组*/
	string constell_names[12][2] = {
		{"山羊座","水瓶座"},//1月
		{"水瓶座","双鱼座"},//2
		{"双鱼座","白羊座"},//3
		{"白羊座","金牛座"},//4
		{"金牛座","双子座"},//5
		{"双子座","巨蟹座"},//6
		{"巨蟹座","狮子座"},//7
		{"狮子座","处女座"},//8
		{"处女座","天秤座"},//9
		{"天秤座","天蝎座"},//10
		{"天蝎座","射手座"},//11
		{"射手座","山羊座"}//12
	};
	/*跨星座日期*/
	int constell_datas[]{ 20,19,21,20,21,22,23,23,23,24,23,22 };



	//2.为女儿录入初始信息
	cout << "请输入父亲的姓名：" << endl;
	cin >> value_father_name;//录入父亲的名字
	cout << "请输入女儿的姓名：" << endl;
	cin >> value_daughter_name;//录入女儿的名字
	cout << "请输入女儿的生日(MM DD)：" << endl;
	cin >> value_birth_month >> value_birth_data;//录入女儿的出生月份

	/*存放女儿的星座*/
	value_daughter_constell = constell_names[value_birth_month - 1][value_birth_data / constell_datas[value_birth_month - 1]];

	cout << "根据您输入的信息，系统正在为您生成女儿信息表：" << endl;
	cout << "-----------女儿信息表-----------\n"
		<< "姓名：" << value_daughter_name << '\n'
		<< "生日：1659年" << value_birth_month << "月" << value_birth_data << "日\n"
		<< "星座：" << constell_names[value_birth_month - 1][value_birth_data / constell_datas[value_birth_month - 1]] << endl;
	//  根据女儿的初始信息得出女儿刚开始的游戏参数(体力，智力，魅力，道德，气质)

	array<int, 5> value_daughter_power;//采用数组来存放女儿的游戏参数-女儿的能力
	array<string, 5> value_power_name = { "体力","智力","魅力","道德","气质" };//能力信息

	if (value_daughter_constell == "白羊座") {
		value_daughter_power[0] = 80; value_daughter_power[1] = 15; value_daughter_power[2] = 15; value_daughter_power[3] = 25; value_daughter_power[4] = 11;
	}
	else if (value_daughter_constell == "金牛座") {
		value_daughter_power[0] = 46; value_daughter_power[1] = 30; value_daughter_power[2] = 28; value_daughter_power[3] = 35; value_daughter_power[4] = 20;
	}
	else if (value_daughter_constell == "双子座") {
		value_daughter_power[0] = 50; value_daughter_power[1] = 35; value_daughter_power[2] = 23; value_daughter_power[3] = 26; value_daughter_power[4] = 8;
	}
	else if (value_daughter_constell == "巨蟹座") {
		value_daughter_power[0] = 40; value_daughter_power[1] = 31; value_daughter_power[2] = 33; value_daughter_power[3] = 23; value_daughter_power[4] = 17;
	}
	else if (value_daughter_constell == "狮子座") {
		value_daughter_power[0] = 85; value_daughter_power[1] = 9; value_daughter_power[2] = 11; value_daughter_power[3] = 28; value_daughter_power[4] = 20;
	}
	else if (value_daughter_constell == "处女座") {
		value_daughter_power[0] = 35; value_daughter_power[1] = 28; value_daughter_power[2] = 36; value_daughter_power[3] = 19; value_daughter_power[4] = 18;
	}
	else if (value_daughter_constell == "天秤座") {
		value_daughter_power[0] = 42; value_daughter_power[1] = 33; value_daughter_power[2] = 25; value_daughter_power[3] = 24; value_daughter_power[4] = 32;
	}
	else if (value_daughter_constell == "天蝎座") {
		value_daughter_power[0] = 50; value_daughter_power[1] = 25; value_daughter_power[2] = 40; value_daughter_power[3] = 20; value_daughter_power[4] = 18;
	}
	else if (value_daughter_constell == "射手座") {
		value_daughter_power[0] = 57; value_daughter_power[1] = 31; value_daughter_power[2] = 15; value_daughter_power[3] = 26; value_daughter_power[4] = 19;
	}
	else if (value_daughter_constell == "山羊座") {
		value_daughter_power[0] = 56; value_daughter_power[1] = 21; value_daughter_power[2] = 16; value_daughter_power[3] = 22; value_daughter_power[4] = 25;
	}
	else if (value_daughter_constell == "水平座") {
		value_daughter_power[0] = 43; value_daughter_power[1] = 43; value_daughter_power[2] = 20; value_daughter_power[3] = 27; value_daughter_power[4] = 23;
	}
	else if (value_daughter_constell == "双鱼座") {
		value_daughter_power[0] = 41; value_daughter_power[1] = 20; value_daughter_power[2] = 29; value_daughter_power[3] = 25; value_daughter_power[4] = 2;
	}

    //3.开始游戏大循环
	for (int year = 1659; year < 1659 + 2; year++) {
		for (int month = (year == 1659) ? value_birth_month : 1; month < 12;) {
			/*判断本月是否是女儿的生日*/
			if (month == value_birth_month) {
				cout << "本月" << value_birth_data << "是" << value_daughter_name << "的生日,要不要送礼物呢？" << endl;
				cout << "请输入是(y)  否(n)" << endl;
				string value_input;
				cin >> value_input;
				if ("yes" == value_input) {
					cout << "您花费了50金币给小美买了一份精美的礼物！" << endl;
					value_birth_month -= 50;
					cout << "您的女儿特别开心，您和您的女儿的亲密度增加" << endl;//亲密度决定您和女儿之间训话时属性添加
					value_daugther_affinity += rand() % 51;
				}
				
			}
			//显示游戏主菜单
			cout << "\n1、查看状态\n2、安排行程\n3、亲自谈话\n4、存档\n5、读档" << endl;//这块是主菜单内容显示
			cout <<"请选择：";
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			case 1: {//查看状态
				cout << "----女儿的信息表如下----\n"
					<< "姓名：" << value_daughter_name << '\n'
					<< "生日：1659年" << value_birth_month << "月" << value_birth_data << "日\n"
					<< "星座：" << constell_names[value_birth_month - 1][value_birth_data / constell_datas[value_birth_month - 1]] << endl;
				//打印核心属性
				cout << left;
				for (int i = 0; i < 5; i++) {
					cout << value_power_name[i] << ": " << setw(3) << value_daughter_power[i];
					//接下类打印方框
					int solidcount = value_daughter_power[i] / 10; //定义方框变量
					for (int j = 0; j < 10; j++) {
						if (j < solidcount)
							cout << "A";
						else
							cout << "a";
					}
					cout << endl;
				}
				//总属性
				int sum = 0;
				for (int i = 0; i < 5; i++) {
					sum += value_daughter_power[i];
				}
				cout << "总属性值："<< setw(3) << sum << endl;//打印总属性值
				cout << "金币：" << setw(3) << value_daughter_money << endl;//打印金钱总量
				cout << "亲密值：" << setw(3) << value_daugther_affinity << endl;//打印亲密值
			
				break;
			}
			case 2: {//安排行程 - 每月安排3次行程
				string month_parts[]{ "上旬","中旬","下旬" };//定义每个月的程度
				for (int i = 0; i < 3; i++) {
					cout << "-------" <<year<<"年"<< month << "月" << "--" << month_parts[i] << "--------" << endl;
					cout << "1、学习武艺\n2、上私塾\n3、学习礼法\n4、出城修行\n5、打工赚钱" << endl;
					cout << "\n请选择：";
					cin >> choice;
					//如果这里没钱的话，强制打工！
					if (value_daughter_money <= 0)
					{
						cout << "您的金币为零，建议您选择打工赚钱！" << endl;
						goto Next;
					}
					srand((int)time(NULL));//设置随机数种子
					if (choice == 1) {// 1、学习武艺， （+体力 +魅力 -金钱 ----添加属性为随机值）
						value_daughter_power[0] += temp1 = rand() % 21;//能力值变化随机值0-10
						value_daughter_power[2] += temp2 = rand() % 11;//能力值变化0-10
						value_daughter_power[4] -= temp4 = rand() % 6;//0-5
						value_daughter_money -= temp3 = rand() % 51;//随机值0-50
						string value_power_title[3]{ " 行如风，站如松！！！","学习张无忌好榜样！！！","气沉丹田，稳步如坚！！！" };//标语
						int choice1 = rand() % 3;//随机值0-3
						switch (choice1)//采用循环进行标语输出！
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
						cout << "体力+" << temp1 << "，魅力+" << temp2 << "，道德-" << temp4 << ",金钱-" << temp3 << endl;
						cout << endl;

					}
					else if (choice == 5) {// 5、打工赚钱 （添加金币）
				Next:
					value_daughter_money += temp1 = rand() % 151;//添加金币
					string value_power_title[]{ "在超市辛辛苦苦地打工，还得到了老板的奖励！！！","在餐厅当服务员，努力勤奋！！！" };
					int choice1 = rand() % 2;
					if (choice1 == 0)
						cout << value_power_title[0];
					else if (choice1 == 1)
						cout << value_power_title[1];
					cout << endl;
					cout << "金币+" << temp1 << endl;//金币属性

					}
					else if (choice == 2) {//2、上私塾 （添加智力、道德、气质）
					value_daughter_power[1] += temp1 = rand() % 16;
					value_daughter_power[3] += temp2 = rand() % 6;
					value_daughter_power[4] += temp3 = rand() % 11;
					value_daughter_money -= temp4 = rand() % 61;
					string value_power_title[]{ "书书朗朗声，一笔一墨行！！！","老师倾心教导，晚辈悉心倾听！！！","一书一墨一世界！！！" };
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
					cout << "智力+" << temp1 << "，道德+" << temp2 << ",气质+" << temp3 << ",金币-" << temp4 << endl;
					cout << endl;
					}
					else if (choice == 3) {//3、 学习礼法
					value_daughter_power[2] += temp1 = rand() % 11;
					value_daughter_power[3] += temp2 = rand() % 21;
					value_daughter_power[4] += temp3 = rand() % 11;
					value_daughter_money -= temp4 = rand() % 41;
					string value_power_title[]{ "礼节教导，境界提升！！！","老师倾心教导，晚辈悉心倾听！！！","学习女子礼貌、礼节！！！" };
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
					cout << "魅力+" << temp1 << "，道德+" << temp2 << ",气质+" << temp3 << ",金币-" << temp4 << endl;
					cout << endl;
					}
					else if (choice == 4) {//4、 出城修行
					value_daughter_power[0] += temp1 = rand() % 16;
					value_daughter_power[4] += temp3 = rand() % 21;
					value_daughter_money -= temp4 = rand() % 51;
					string value_power_title[]{ "跟随大师感受人生境界！！！","行善做事，品德兼备！！！","出门远行 ，感受人生哲理！！！" };
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
					cout << "体力+" << temp1 << ",气质+" << temp3 << ",金币-" << temp4 << endl;
					cout << endl;
					}
				}
				month++;
				break;
				

			}
			case 3: {//亲爱谈话
				
				month++;
				break;
			}
			case 4://存档
				
				month++;
				break;
			case 5://读档
				
				month++;
				break;
			default:
				break;

			}
		}
	}
	//4.根据游戏参数，判断游戏结果
	cout << "1961年" << value_birth_month << "月" << value_birth_data << "日" << endl;
	cout << "你的女儿" << value_daughter_name << "终于长大成人" << endl;
	cout << "你的女儿离开了你，18岁的她不再时以前的小孩，如今的她要离开你的怀抱，你们父女紧紧相抱，最终分手！风依然吹着你的脸庞，直到分开！不知道未来的她......" << endl;
	cout << "恭喜你通关游戏！\n" << "接下来根据女儿的属性参数决定人生道路！" << endl;
	cout << "下图生成属性表：" << endl;
	
	cout << "----系统生成女儿的信息表----\n"
		<< "姓名：" << value_daughter_name << '\n'
		<< "生日：1659年" << value_birth_month << "月" << value_birth_data << "日\n"
		<< "星座：" << constell_names[value_birth_month - 1][value_birth_data / constell_datas[value_birth_month - 1]] << endl;
	//打印核心属性
	cout << left;
	for (int i = 0; i < 5; i++) {	
		cout << value_power_name[i] << ": " << setw(3) << value_daughter_power[i];
		//接下类打印方框
		int solidcount = value_daughter_power[i] / 10; //定义方框变量
		for (int j = 0; j < 10; j++) {
			if (j < solidcount)
				cout << "A";
			else
				cout << "a";
		}
		cout << endl;
	}
	cout << "系统生成数据中....." << endl;

	int sum = 0;//总参数
	for (int i = 0; i < 5; i++)
		sum += value_daughter_power[i];
	if (sum >= 800) {
		cout << "恭喜您，在您的培养下，您的女儿" << value_daughter_name << "不负众望！：登基为女王陛下!" << endl;
	}
	else if (sum >= 700) {
		cout << "恭喜您，在您的培养下，您的女儿" << value_daughter_name << "不负众望！：成为王妃！" << endl;
	}
	else if (sum >=650) {
		cout << "恭喜您，在您的培养下，您的女儿" << value_daughter_name << "不负众望！：成为女将军！" << endl;
	}
	else if (sum >= 500) {
		int maxValue = value_daughter_power[0];
		int maxIndex = 0;
		for (int i = 0; i < 5; i++) {
			if (maxValue < value_daughter_power[i]) {
				maxValue = value_daughter_power[i];
				maxIndex = i;
			}//{ "体力","智力","魅力","道德","气质" }
			if ("智力" == value_power_name[maxIndex] && value_daughter_power[0] > value_daughter_power[1])
				cout << "经过不懈努力，您的女儿" << value_daughter_name << "成为： 皇家学院总裁！" << endl;
			else if ("气质" == value_power_name[maxIndex] && value_daughter_power[2] > value_daughter_power[0]) 
				cout << "经过不懈努力，您的女儿" << value_daughter_name << "成为： 公主！" << endl;
			else if ("体力" == value_power_name[maxIndex] && value_daughter_power[4] > value_daughter_power[2])
				cout << "经过不懈努力，您的女儿" << value_daughter_name << "成为： 近卫骑士团长！" << endl;
			else if ("道德" == value_power_name[maxIndex] && value_daughter_power[2] > value_daughter_power[4])
				cout << "经过不懈努力，您的女儿" << value_daughter_name << "成为： 高级祭司！" << endl;
			else if ("魅力" == value_power_name[maxIndex] && value_daughter_power[4] > value_daughter_power[3])
				cout << "经过不懈努力，您的女儿" << value_daughter_name << "成为： 国王的宠妃！" << endl;
		}
	}
	else {
		string value_works_name[]{"农妇","魔法师","修女","作家","酒吧女郎"};
		int choice1 = rand() % 5;
		if (choice1 == 0) {
			cout << "您的女儿不成材：成为了一名辛勤的" << value_works_name[0] << endl;
		}
		else if (choice1 == 1) {
			cout << "您的女儿不成材：成为了一名优秀" << value_works_name[1] << endl;
		}
		else if (choice1 == 2) {
			cout << "您的女儿不成材：成为了一名" << value_works_name[2] << endl;
		}
		else if (choice1 == 3) {
			cout << "您的女儿不成材：成为了一名" << value_works_name[3] << endl;
		}
		else if (choice1 == 4) {
			cout << "您的女儿不成材：成为了一名" << value_works_name[4] << endl;
		}
	}
	cout << "谢谢您，对游戏的体验！" << endl;
    system("pause");
	return 0;
}