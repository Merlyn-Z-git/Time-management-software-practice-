#include<iostream>
#include<string>
using namespace std;
#include"标头.h"

int main() {
	cout << " " << endl;
	cout << "***************欢迎使用时间管理器************" << endl;
	while (true) {
		cout << endl;
		cout << "____________________________________________" << endl;
		cout << "               请选择所需操作：" << endl;
		cout << "               1.查阅日程" << endl;
		cout << "               2.待办功能" << endl;
		cout << "               3.日记功能" << endl;
		cout << "               4.退出程序" << endl;
		cout << "____________________________________________" << endl;
		int a;
		cin >> a;
		switch (a) {
		case 1:{
			enteragenda();
			}
			break;
			case 2: {
				cout << "               进入待办功能" << endl;
				enterlist();
			}
			break;
		case 3:
			enterthediary();
			break;
		case 4:
			cout << "                正在安全退出......" << endl;
			system("pause");//利用暂停给用户缓冲
			cout << "                成功退出！" << endl;
			cout << "                欢迎下次使用！" << endl;
			return 0;
			break;
		default:
			cout << "                请输入有效选项！" << endl;
			string tst;
			cin >> tst;
			ofstream ofs;
			ofs.open("test.txt",ios::app);
			ofs << tst << endl;
			ofs.close();
		}
	}
		return 0;
}
