#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include<string>
#include"��ͷ.h"
//��һ������
class Important_and_urgent :public List {  
public:
	virtual string show_importance();
	virtual string show_listcontent();
	void save1();
};
string Important_and_urgent::show_importance() {
	return "����Ϊ����Ҫ�ҽ���";
}
string Important_and_urgent::show_listcontent() {
	string content;
	ifstream ifs;
	ifs.open("list1.txt");
	if (!ifs.is_open()){
		cout << "����1��ʧ�ܣ�" << endl;
		return"������";
	}
	while (!ifs.eof()) {
		while (getline(ifs, content)) {
			cout << content<< endl;
		}
	}
	ifs.close();
	return"�뾡���������";
}
//�ڶ�������
class unmportant_and_urgent :public List {
public:
	virtual string show_importance();
	virtual string show_listcontent();
	void save2();
};
string unmportant_and_urgent::show_importance() {
	return "����Ϊ������Ҫ������";
}
string unmportant_and_urgent::show_listcontent() {
	string content;
	ifstream ifs;
	ifs.open("list2.txt");
	if (!ifs.is_open()) {
		cout << "����2��ʧ�ܣ�" << endl;
		return"������";
	}
	while (!ifs.eof()) {
		while (getline(ifs, content)) {
			cout << content << endl;
		}
	}
	ifs.close();
	return"�뾡���������";
}
//����������
class unmportant_and_nonurgent :public List {
public:
	virtual string show_importance();
	virtual string show_listcontent();
	void save4();
};
string unmportant_and_nonurgent::show_importance() {
	return "����Ϊ������Ҫ�Ҳ�����";
}
string unmportant_and_nonurgent::show_listcontent() {
	string content;
	ifstream ifs;
	ifs.open("list4.txt");
	if (!ifs.is_open()) {
		cout << "����4��ʧ�ܣ�" << endl;
		return"������";
	}
	while (!ifs.eof()) {
		while (getline(ifs, content)) {
			cout << content << endl;
		}
	}
	ifs.close();
	return"��������Щ����";
}
//���ĸ�����
class important_and_nonurgent :public List {
public:
	virtual string show_importance();
	virtual string show_listcontent();
	void save3();
};
string important_and_nonurgent::show_importance() {
	return "����Ϊ����Ҫ��������";
}
string important_and_nonurgent::show_listcontent() {
	string content;
	ifstream ifs;
	ifs.open("list3.txt");
	if (!ifs.is_open()) {
		cout << "����3��ʧ�ܣ�" << endl;
		return"������";
	}
	while (!ifs.eof()) {
		while (getline(ifs, content)) {
			cout << content << endl;
		}
	}
	ifs.close();
	return"��������Щ����";
}
//��һ������ı��溯��
void Important_and_urgent::save1() {
	string newlistcontent;
	cin >> newlistcontent;
	ofstream ofs;
	ofs.open("list1.txt",ios::app);
	ofs << endl;
	ofs << newlistcontent;
	ofs.close();
}
//�ڶ�������ı��溯��
void unmportant_and_urgent::save2() {
	string newlistcontent;
	cin >> newlistcontent;
	ofstream ofs;
	ofs.open("list2.txt",ios::app);
	ofs << endl;
	ofs << newlistcontent;
	ofs.close();
}
//����������ı��溯��
void important_and_nonurgent::save3() {
	string newlistcontent;
	cin >> newlistcontent;
	ofstream ofs;
	ofs.open("list3.txt", ios::app);
	ofs << endl;
	ofs << newlistcontent;
	ofs.close();
}
//���ĸ�����ı��溯��
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
		cout << "��ѡ�����蹦��" << endl;
		cout << "1.���Ĵ���   2.��Ӵ���  3.ɾ������  4.�ص���ҳ" << endl;
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
			cout << "��������Чѡ��" << endl;
			break;
		}
	}
}

void Addlist() {
	cout << "��������Ӵ������Ŀ��" << endl;
	int list_num = 0;
	cin >> list_num;
		for (int e = 0;e < list_num;e++) {
			int num_importance;//���ݴ������������Ҫ�Դ������
			string newlistcontent;
			cout << "��ѡ���" << e + 1 << "���������Ҫ�Ժͽ����ԣ�" << endl;
			cout << "1.��Ҫ�ҽ���   2.��Ҫ��������   3.����Ҫ������   4.����Ҫ�Ҳ�����" << endl;
			cin >> num_importance;
			switch ((int)num_importance)
			{
			case 1: {
				cout << "�������" << e + 1 << "�����������" << endl;
				Important_and_urgent h;
				h.save1();
			}
				break;
			case 2: {
				cout << "�������" << e + 1 << "�����������" << endl;
				unmportant_and_urgent h;
				h.save2();
			}
				break;
			case 3: {
				cout << "�������" << e + 1 << "�����������" << endl;
				important_and_nonurgent h;
				h.save3();
			}
				break;
			case 4: {
				cout << "�������" << e + 1 << "�����������" << endl;
				unmportant_and_nonurgent h;
				h.save4();
			}
				break;
			default:
				cout << "��������Чѡ�" << endl;
				break;
			}
		}
		cout << "��ӳɹ���" << endl;
	}

void showlist() {
	cout << "��ѡ����Ҫ��ʾ�Ĵ������ͣ�" << endl;
	cout << "1.��Ҫ�ҽ���  2.����Ҫ������  3.��Ҫ��������  4.����Ҫ�Ҳ�����  5.��ʾȫ������" << endl;//�����û���ѡ���ȡ�ļ�
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
		cout << "��Ҫ�ҽ�����" << endl;
		Important_and_urgent e;
		e.show_importance();
		e.show_listcontent();
		cout << " "<<endl;
		cout << "����������Ҫ��" << endl;
		unmportant_and_urgent a;
		a.show_importance();
		a.show_listcontent();
		cout << " " << endl;
		cout << "��Ҫ����������" << endl;
		important_and_nonurgent q;
		q.show_importance();
		q.show_listcontent();
		cout << " " << endl;
		cout << "����Ҫ�Ҳ�������" << endl;
		unmportant_and_nonurgent w;
		w.show_importance();
		w.show_listcontent();
		cout << " " << endl;
	}
		  break;
	default:
		cout << "��������Чѡ�" << endl;
		break;
	}
}

void deletlist() {
	cout << "�Ƿ�ɾ�����д��죿" << endl;
	cout << "1.��   2.��" << endl;
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
