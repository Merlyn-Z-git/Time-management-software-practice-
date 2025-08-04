#include<iostream>
using namespace std;
#include<string>
#include<fstream>
#include"标头.h"

void AddDiary::setDiaryTime() {//使用户输入日记日期的函数
	int day, month, year;
	cout << "请输入年：" << endl;
	cin >> year;
	setyear = year;
	cout << "请输入月：" << endl;
	cin >> month;
	setmonth = month;
	cout << "请输入日：" << endl;
	cin >> day;
	setday = day;
	cout << "请确认：" << year << "年" << month << "月" << day << "日" << endl;
}
void AddDiary::setDiaryContent() {//用户输入日记内容的函数
	string newcaption;
	string newContent;
	cout << "请输入日记标题：" << endl;
	cin >> newcaption;
	setcaption = newcaption;
	cout << "请输入日记内容：" << endl;
	cin >> newContent;
	setContent = newContent;
}

void AddDiary::saveContent() {//用户保存日记内容的函数
	//open the txt and put the content into the file
	ofstream ofs("diary.txt",ios::app);
	if (!ofs.is_open())
	{
		cout << "日程打开失败！" << endl;
		return;
	}
	ofs << endl;
	ofs << setyear << "年" << setmonth << "月" << setday << "日" << endl;
	ofs << setcaption << endl;
	ofs << "    " << setContent << endl;
	ofs << endl;
	ofs.close();
}

void diary_content_show() {//将文本文件中的日记按行输出
	string showdiary;
	ifstream ifs;
	ifs.open("diary.txt");
	if (!ifs.is_open())
	{
		cout << "日记打开失败！" << endl;
	}
	while (!ifs.eof()) {
		while (getline(ifs, showdiary)) {
			cout << showdiary << endl;
	 }
	}
		ifs.close();
}

void AddDiary::deletealldiary() {
	cout << "是否删除所有日记？" << endl;//二次确认防止误输
	cout << "1.是   2.否" << endl;
	int q;
	cin >> q;
	switch ((int)q)
	{
	case 1: {
		ofstream d("diary.txt", ios::trunc);
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

int enterthediary() {
	string code;
	string d;
	ifstream ifs("code1.txt");//将储存在文本文件中的密码提出，并储存在code中
	ifs >> code;
	ifs.close();
	string codeReset;
	int e = 1;
	cout << "是否已设置密码？（初始密码为123456）" << endl;//密码功能
	cout << "1.是" << endl;
	cout << "2.否" << endl;
	int c;
	cin >> c;
	switch (c) {
	case 1: {
		cout << "请输入密码：";
		while (cin >> d, d != code) {//循环体将输入数据与code比较
			cout << "密码不正确！" << endl;
			cout << "您还有" << 3 - e << "次机会！" << endl;
			if (e < 3)
				e++;
			else
			{
				cout << "三次输入不正确，系统自动退出！！！" << endl;
				return 0;
			}
		}
	while (true) {
			cout << "进入日记界面" << endl;
			cout << "请选择所需功能：" << endl;
			cout << "1.显示所有日记     2.写日记     3.删除日记    4.更改密码   5.回到主页" << endl;
			int choosediaryfunction;
			cin >> choosediaryfunction;
			switch (choosediaryfunction)
			{
			case 1:
				diary_content_show();
				break;
			case 2: {
				AddDiary  my_diary;
				my_diary.setDiaryTime();
				my_diary.setDiaryContent();
				my_diary.saveContent();
				break;
			}
			case 4: {
				cout << "请设置新密码：" << endl;
				cin >> codeReset;
				d = codeReset;
				ofstream ofs("code1.txt");//重新将数据替换到文本文件中
				ofs << codeReset;
				ofs.close();
				cout << "设置成功！" << endl;
			}
				  break;
			case 3: {
				AddDiary s;
				s.deletealldiary();
			}
				  break;
			case 5:
				return 0;
			default:
				cout << "请输入有效选项！" << endl;
				break;
			}
		}
			  break;
		case 2: {//重新设置密码后进入的结构
			int origin;
			int testcode;
			cout << "请输入原密码" << endl;
			cin >> testcode;
			ifstream fs("code1.txt");
			fs >> origin;
			fs.close();
			if (testcode != origin) {
				cout << "请输入有效密码！" << endl;
				return 0;
			}
			else
				cout << "请设置新密码：" << endl;
			cin >> codeReset;
			ofstream ofs("code1.txt");
			ofs << codeReset;
			ofs.close();
			cout << "设置成功！" << endl;
			cout << "进入日记界面" << endl;
			cout << "请选择所需功能：" << endl;
			cout << "1.显示所有日记     2.写日记     3.删除日记    4.更改密码   5.回到主页" << endl;
			int choosediaryfunction;
			cin >> choosediaryfunction;
			switch (choosediaryfunction)
			{
			case 1:
				diary_content_show();
				break;
			case 2: {
				AddDiary  my_diary;
				my_diary.setDiaryTime();
				my_diary.setDiaryContent();
				my_diary.saveContent();
				break;
			}
			case 4: {
				cout << "请设置新密码：" << endl;
				cin >> codeReset;
				d = codeReset;
				ofstream ofs("code1.txt");
				ofs << codeReset;
				ofs.close();
				cout << "设置成功！" << endl;
			}
				  break;
			case 3: {
				AddDiary s;
				s.deletealldiary();
			}
				  break;
			case 5:
				return 0;
			default:
				cout << "请输入有效选项！" << endl;
				break;
			}
			break;
		}
		default:
			cout << "请输入有效选项！" << endl;
		}
	}
}
