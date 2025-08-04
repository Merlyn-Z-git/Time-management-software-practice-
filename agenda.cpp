#include<iostream>
#include<string>
using namespace std;
#include"标头.h"
#include<fstream>// try to use class to locate the concrete time
string agenda_content;

extern int operateagenda()
{
	int g;
	cout << "日程安排如下：" << endl;
	ifstream agenda1;
	if (!agenda1.is_open()){
		cout << "日程打开失败" << endl;
		//return 0;
	}
	cout << "是否编辑日程" << endl;
	cout << "1.是" << endl;
	cout << "2.否" << endl;
	int b;
	cin >> b;
	if (b == 1) {
		showdatetochoose();
		showconcrete_agenda_select();
		selectandwrite();
	}
	return 0;
}
