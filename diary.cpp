#include<iostream>
using namespace std;
#include<string>
#include<fstream>
#include"��ͷ.h"

void AddDiary::setDiaryTime() {//ʹ�û������ռ����ڵĺ���
	int day, month, year;
	cout << "�������꣺" << endl;
	cin >> year;
	setyear = year;
	cout << "�������£�" << endl;
	cin >> month;
	setmonth = month;
	cout << "�������գ�" << endl;
	cin >> day;
	setday = day;
	cout << "��ȷ�ϣ�" << year << "��" << month << "��" << day << "��" << endl;
}
void AddDiary::setDiaryContent() {//�û������ռ����ݵĺ���
	string newcaption;
	string newContent;
	cout << "�������ռǱ��⣺" << endl;
	cin >> newcaption;
	setcaption = newcaption;
	cout << "�������ռ����ݣ�" << endl;
	cin >> newContent;
	setContent = newContent;
}

void AddDiary::saveContent() {//�û������ռ����ݵĺ���
	//open the txt and put the content into the file
	ofstream ofs("diary.txt",ios::app);
	if (!ofs.is_open())
	{
		cout << "�ճ̴�ʧ�ܣ�" << endl;
		return;
	}
	ofs << endl;
	ofs << setyear << "��" << setmonth << "��" << setday << "��" << endl;
	ofs << setcaption << endl;
	ofs << "    " << setContent << endl;
	ofs << endl;
	ofs.close();
}

void diary_content_show() {//���ı��ļ��е��ռǰ������
	string showdiary;
	ifstream ifs;
	ifs.open("diary.txt");
	if (!ifs.is_open())
	{
		cout << "�ռǴ�ʧ�ܣ�" << endl;
	}
	while (!ifs.eof()) {
		while (getline(ifs, showdiary)) {
			cout << showdiary << endl;
	 }
	}
		ifs.close();
}

void AddDiary::deletealldiary() {
	cout << "�Ƿ�ɾ�������ռǣ�" << endl;//����ȷ�Ϸ�ֹ����
	cout << "1.��   2.��" << endl;
	int q;
	cin >> q;
	switch ((int)q)
	{
	case 1: {
		ofstream d("diary.txt", ios::trunc);
		d.close();
		cout << "ɾ���ɹ���" << endl;
	}
		  break;
	case 2:
		cout << "�����������" << endl;
		break;
	default:
		cout << "��������Чѡ��" << endl;
		break;
	}
}

int enterthediary() {
	string code;
	string d;
	ifstream ifs("code1.txt");//���������ı��ļ��е������������������code��
	ifs >> code;
	ifs.close();
	string codeReset;
	int e = 1;
	cout << "�Ƿ����������룿����ʼ����Ϊ123456��" << endl;//���빦��
	cout << "1.��" << endl;
	cout << "2.��" << endl;
	int c;
	cin >> c;
	switch (c) {
	case 1: {
		cout << "���������룺";
		while (cin >> d, d != code) {//ѭ���彫����������code�Ƚ�
			cout << "���벻��ȷ��" << endl;
			cout << "������" << 3 - e << "�λ��ᣡ" << endl;
			if (e < 3)
				e++;
			else
			{
				cout << "�������벻��ȷ��ϵͳ�Զ��˳�������" << endl;
				return 0;
			}
		}
	while (true) {
			cout << "�����ռǽ���" << endl;
			cout << "��ѡ�����蹦�ܣ�" << endl;
			cout << "1.��ʾ�����ռ�     2.д�ռ�     3.ɾ���ռ�    4.��������   5.�ص���ҳ" << endl;
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
				cout << "�����������룺" << endl;
				cin >> codeReset;
				d = codeReset;
				ofstream ofs("code1.txt");//���½������滻���ı��ļ���
				ofs << codeReset;
				ofs.close();
				cout << "���óɹ���" << endl;
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
				cout << "��������Чѡ�" << endl;
				break;
			}
		}
			  break;
		case 2: {//����������������Ľṹ
			int origin;
			int testcode;
			cout << "������ԭ����" << endl;
			cin >> testcode;
			ifstream fs("code1.txt");
			fs >> origin;
			fs.close();
			if (testcode != origin) {
				cout << "��������Ч���룡" << endl;
				return 0;
			}
			else
				cout << "�����������룺" << endl;
			cin >> codeReset;
			ofstream ofs("code1.txt");
			ofs << codeReset;
			ofs.close();
			cout << "���óɹ���" << endl;
			cout << "�����ռǽ���" << endl;
			cout << "��ѡ�����蹦�ܣ�" << endl;
			cout << "1.��ʾ�����ռ�     2.д�ռ�     3.ɾ���ռ�    4.��������   5.�ص���ҳ" << endl;
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
				cout << "�����������룺" << endl;
				cin >> codeReset;
				d = codeReset;
				ofstream ofs("code1.txt");
				ofs << codeReset;
				ofs.close();
				cout << "���óɹ���" << endl;
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
				cout << "��������Чѡ�" << endl;
				break;
			}
			break;
		}
		default:
			cout << "��������Чѡ�" << endl;
		}
	}
}
