#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include<string>
#include"标头.h"
//第一个子类
class Important_and_urgent :public List {  
public:
	virtual string show_importance();
	virtual string show_listcontent();
	void save1();
};
string Important_and_urgent::show_importance() {
	return "分类为：重要且紧急";
}
string Important_and_urgent::show_listcontent() {
	string content;
	ifstream ifs;
	ifs.open("list1.txt");
	if (!ifs.is_open()){
		cout << "待办1打开失败！" << endl;
		return"请重试";
	}
	while (!ifs.eof()) {
		while (getline(ifs, content)) {
			cout << content<< endl;
		}
	}
	ifs.close();
	return"请尽快完成任务";
}
//第二个子类
class unmportant_and_urgent :public List {
public:
	virtual string show_importance();
	virtual string show_listcontent();
	void save2();
};
string unmportant_and_urgent::show_importance() {
	return "分类为：不重要但紧急";
}
string unmportant_and_urgent::show_listcontent() {
	string content;
	ifstream ifs;
	ifs.open("list2.txt");
	if (!ifs.is_open()) {
		cout << "待办2打开失败！" << endl;
		return"请重试";
	}
	while (!ifs.eof()) {
		while (getline(ifs, content)) {
			cout << content << endl;
		}
	}
	ifs.close();
	return"请尽快完成任务";
}
//第三个子类
class unmportant_and_nonurgent :public List {
public:
	virtual string show_importance();
	virtual string show_listcontent();
	void save4();
};
string unmportant_and_nonurgent::show_importance() {
	return "分类为：不重要且不紧急";
}
string unmportant_and_nonurgent::show_listcontent() {
	string content;
	ifstream ifs;
	ifs.open("list4.txt");
	if (!ifs.is_open()) {
		cout << "待办4打开失败！" << endl;
		return"请重试";
	}
	while (!ifs.eof()) {
		while (getline(ifs, content)) {
			cout << content << endl;
		}
	}
	ifs.close();
	return"请重视这些任务";
}
//第四个子类
class important_and_nonurgent :public List {
public:
	virtual string show_importance();
	virtual string show_listcontent();
	void save3();
};
string important_and_nonurgent::show_importance() {
	return "分类为：重要但不紧急";
}
string important_and_nonurgent::show_listcontent() {
	string content;
	ifstream ifs;
	ifs.open("list3.txt");
	if (!ifs.is_open()) {
		cout << "待办3打开失败！" << endl;
		return"请重试";
	}
	while (!ifs.eof()) {
		while (getline(ifs, content)) {
			cout << content << endl;
		}
	}
	ifs.close();
	return"请重视这些任务";
}
//第一个子类的保存函数
void Important_and_urgent::save1() {
	string newlistcontent;
	cin >> newlistcontent;
	ofstream ofs;
	ofs.open("list1.txt",ios::app);
	ofs << endl;
	ofs << newlistcontent;
	ofs.close();
}
//第二个子类的保存函数
void unmportant_and_urgent::save2() {
	string newlistcontent;
	cin >> newlistcontent;
	ofstream ofs;
	ofs.open("list2.txt",ios::app);
	ofs << endl;
	ofs << newlistcontent;
	ofs.close();
}
//第三个子类的保存函数
void important_and_nonurgent::save3() {
	string newlistcontent;
	cin >> newlistcontent;
	ofstream ofs;
	ofs.open("list3.txt", ios::app);
	ofs << endl;
	ofs << newlistcontent;
	ofs.close();
}
//第四个子类的保存函数
void unmportant_and_nonurgent::save4() {
	string newlistcontent;
	cin >> newlistcontent;
	ofstream ofs;
	ofs.open("list4.txt",ios::app);
	ofs << endl;
	ofs << newlistcontent;
	ofs.close();
}

void enterlist() {
	while (true) {
		cout << "请选择所需功能" << endl;
		cout << "1.查阅待办   2.添加待办  3.删除待办  4.回到主页" << endl;
		int m;
		cin >> m;
		switch ((int)m)
		{
		case 1: {
			showlist();
		}
			  break;
		case 2: {
			Addlist();
		}
			  break;
		case 3: {
			deletlist();
		}
			  break;
		case 4: {
			return;
		}
		default:
			cout << "请输入有效选项" << endl;
			break;
		}
	}
}

void Addlist() {
	cout << "请输入添加代办的数目：" << endl;
	int list_num = 0;
	cin >> list_num;
		for (int e = 0;e < list_num;e++) {
			int num_importance;//根据待办的条数和重要性储存待办
			string newlistcontent;
			cout << "请选择第" << e + 1 << "条待办的重要性和紧急性：" << endl;
			cout << "1.重要且紧急   2.重要但不紧急   3.不重要但紧急   4.不重要且不紧急" << endl;
			cin >> num_importance;
			switch ((int)num_importance)
			{
			case 1: {
				cout << "请输入第" << e + 1 << "条待办的内容" << endl;
				Important_and_urgent h;
				h.save1();
			}
				break;
			case 2: {
				cout << "请输入第" << e + 1 << "条待办的内容" << endl;
				unmportant_and_urgent h;
				h.save2();
			}
				break;
			case 3: {
				cout << "请输入第" << e + 1 << "条待办的内容" << endl;
				important_and_nonurgent h;
				h.save3();
			}
				break;
			case 4: {
				cout << "请输入第" << e + 1 << "条待办的内容" << endl;
				unmportant_and_nonurgent h;
				h.save4();
			}
				break;
			default:
				cout << "请输入有效选项！" << endl;
				break;
			}
		}
		cout << "添加成功！" << endl;
	}

void showlist() {
	cout << "请选择需要显示的待办类型：" << endl;
	cout << "1.重要且紧急  2.不重要但紧急  3.重要但不紧急  4.不重要且不紧急  5.显示全部待办" << endl;//根据用户的选择读取文件
	int t;
	cin >> t;
	switch ((int)t)
	{
	case 1: {
		Important_and_urgent m;
		m.show_importance();
		m.show_listcontent();
	}
		  break;
	case 2: {
		unmportant_and_urgent m;
		m.show_importance();
		m.show_listcontent();
	}
		  break;
	case 3:{
		important_and_nonurgent m;
		m.show_importance();
		m.show_listcontent();
	}
		  break;
	case 4:{
		unmportant_and_nonurgent m;
		m.show_importance();
		m.show_listcontent();
	}
		  break;
	case 5:{
		cout << "重要且紧急：" << endl;
		Important_and_urgent e;
		e.show_importance();
		e.show_listcontent();
		cout << " "<<endl;
		cout << "紧急但不重要：" << endl;
		unmportant_and_urgent a;
		a.show_importance();
		a.show_listcontent();
		cout << " " << endl;
		cout << "重要但不紧急：" << endl;
		important_and_nonurgent q;
		q.show_importance();
		q.show_listcontent();
		cout << " " << endl;
		cout << "不重要且不紧急：" << endl;
		unmportant_and_nonurgent w;
		w.show_importance();
		w.show_listcontent();
		cout << " " << endl;
	}
		  break;
	default:
		cout << "请输入有效选项！" << endl;
		break;
	}
}

void deletlist() {
	cout << "是否删除所有待办？" << endl;
	cout << "1.是   2.否" << endl;
	int q;
	cin >> q;
	switch ((int)q)
	{
	case 1: {
		ofstream d("list1.txt", ios::trunc);
		d.close();
		ofstream g("list2.txt", ios::trunc);
		g.close();
		ofstream h("list3.txt", ios::trunc);
		h.close();
		ofstream c("list4.txt", ios::trunc);
		c.close();
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
