#include<iostream>
#include<string>
using namespace std;
#include"��ͷ.h"
#include<fstream>// try to use class to locate the concrete time
string agenda_content;

extern int operateagenda()
{
	int g;
	cout << "�ճ̰������£�" << endl;
	ifstream agenda1;
	if (!agenda1.is_open()){
		cout << "�ճ̴�ʧ��" << endl;
		//return 0;
	}
	cout << "�Ƿ�༭�ճ�" << endl;
	cout << "1.��" << endl;
	cout << "2.��" << endl;
	int b;
	cin >> b;
	if (b == 1) {
		showdatetochoose();
		showconcrete_agenda_select();
		selectandwrite();
	}
	return 0;
}
