#pragma once
#include<iostream>
using namespace std;
#include<fstream>
#include<string>
#include"标头.h"
//提示用户输入的日期
void showdatetochoose() {
	cout << "请选择需要安排日程的时间：" << endl;
	cout << "1. Monday" << endl;
	cout << "2. Tuesday" << endl;
	cout << "3. Wednesday" << endl;
	cout << "4. Thursday" << endl;
	cout << "5. Friday" << endl;
	cout << "6. Saturday" << endl;
	cout << "7. Sunday" << endl;
}
//提示用户输入的时间段
void showconcrete_agenda_select() {
	cout << "请输入需要选择的时间段" << endl;
	cout << "0. 第一大节8：00之前" << endl;
	cout << "1. 第一大节8：00~9：35" << endl;
	cout << "2. 第二大节9：50~11：25" << endl;
	cout << "3. 第三大节13：30~15：05" << endl;
	cout << "4. 第四大节15：20~16：55" << endl;
	cout << "5. 第五大节17：05~18：40" << endl;
	cout << "6. 第六大节19：20~20：55" << endl;
	cout << "7. 第六大节20：55之后" << endl;
}
//负责调用各种函数的循环体
void enteragenda() {
	timetable t, u, v;
	cout << " 进入日程安排" << endl;
	cout << "已有日程安排如下：" << endl;
	t.readagenda();
	cout << endl;
	cout << "是否修改日程：" << endl;
	cout << "1.是    2.否" << endl;
	int m;
	cin >> m;
	switch (m)
	{
	case 1: {
		while (true) {
			cout << "请选择所需功能：" << endl;
			cout << "1.添加日程    2.删除日程   3.回到主页" << endl;
			int choosefunction;
			cin >> choosefunction;
			switch (choosefunction)
			{
			case 1:
				t.writeagenda();
				cout << "日程已成功添加！" << endl;
				cout << " " << endl;
				break;
			case 2:
				v.deleteallagenda();
				cout << " " << endl;
				break;
			case 3:
				return;
			default:
				cout << "请输入有效选项!" << endl;
				cout << " " << endl;
				break;
			}
		}
	}
		break;
	case 2: 
		return;
	default:
		cout << "请输入有效选项！" << endl;
		cout << " " << endl;
		break;
	}
	}
//读取日程	
void timetable::readagenda() {
	cout << "  " << endl;
	string showagenda;
	ifstream ifs;
	ifs.open("agenda.txt");
	if (!ifs.is_open())
	{
		cout << "日程打开失败！" << endl;
		return;
	}
	while (!ifs.eof()) {
		while (getline(ifs, showagenda)) {
			cout << showagenda<< endl;
		}
	}
	ifs.close();
	}
//写日程
void timetable:: writeagenda() {
	showdatetochoose();
	cin >> day;
	showconcrete_agenda_select();
	cin >> period;
	cout << "请输入日程内容：" << endl;
	cin >> agendacontent;
	ofstream openagendafile;
	openagendafile.open("agenda.txt",ios::app);
	if (!openagendafile.is_open())
	{
		cout << "日程打开失败！" << endl;
		return;
	}
	openagendafile << endl;
	openagendafile << day << "-" << period << " " << agendacontent << endl;
	openagendafile.close();
}
//删除日程
void timetable::deleteallagenda() {
	cout << "是否删除所有日程？" << endl;
	cout << "1.是   2.否" << endl;
	int q;
	cin >> q;
	switch (q)
	{
	case 1: {
		ofstream d("agenda.txt", ios::trunc);
		d.close();
		cout << "删除成功！" << endl;
	}
		break;
	case 2:
		cout << "返回最初操作" << endl;
		break;
	default:
		cout << "请输入有效选项" << endl;
		break;
	}
	}