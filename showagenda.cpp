#pragma once
#include<iostream>
using namespace std;
#include<fstream>
#include<string>
#include"��ͷ.h"
//��ʾ�û����������
void showdatetochoose() {
	cout << "��ѡ����Ҫ�����ճ̵�ʱ�䣺" << endl;
	cout << "1. Monday" << endl;
	cout << "2. Tuesday" << endl;
	cout << "3. Wednesday" << endl;
	cout << "4. Thursday" << endl;
	cout << "5. Friday" << endl;
	cout << "6. Saturday" << endl;
	cout << "7. Sunday" << endl;
}
//��ʾ�û������ʱ���
void showconcrete_agenda_select() {
	cout << "��������Ҫѡ���ʱ���" << endl;
	cout << "0. ��һ���8��00֮ǰ" << endl;
	cout << "1. ��һ���8��00~9��35" << endl;
	cout << "2. �ڶ����9��50~11��25" << endl;
	cout << "3. �������13��30~15��05" << endl;
	cout << "4. ���Ĵ��15��20~16��55" << endl;
	cout << "5. ������17��05~18��40" << endl;
	cout << "6. �������19��20~20��55" << endl;
	cout << "7. �������20��55֮��" << endl;
}
//������ø��ֺ�����ѭ����
void enteragenda() {
	timetable t, u, v;
	cout << " �����ճ̰���" << endl;
	cout << "�����ճ̰������£�" << endl;
	t.readagenda();
	cout << endl;
	cout << "�Ƿ��޸��ճ̣�" << endl;
	cout << "1.��    2.��" << endl;
	int m;
	cin >> m;
	switch (m)
	{
	case 1: {
		while (true) {
			cout << "��ѡ�����蹦�ܣ�" << endl;
			cout << "1.����ճ�    2.ɾ���ճ�   3.�ص���ҳ" << endl;
			int choosefunction;
			cin >> choosefunction;
			switch (choosefunction)
			{
			case 1:
				t.writeagenda();
				cout << "�ճ��ѳɹ���ӣ�" << endl;
				cout << " " << endl;
				break;
			case 2:
				v.deleteallagenda();
				cout << " " << endl;
				break;
			case 3:
				return;
			default:
				cout << "��������Чѡ��!" << endl;
				cout << " " << endl;
				break;
			}
		}
	}
		break;
	case 2: 
		return;
	default:
		cout << "��������Чѡ�" << endl;
		cout << " " << endl;
		break;
	}
	}
//��ȡ�ճ�	
void timetable::readagenda() {
	cout << "  " << endl;
	string showagenda;
	ifstream ifs;
	ifs.open("agenda.txt");
	if (!ifs.is_open())
	{
		cout << "�ճ̴�ʧ�ܣ�" << endl;
		return;
	}
	while (!ifs.eof()) {
		while (getline(ifs, showagenda)) {
			cout << showagenda<< endl;
		}
	}
	ifs.close();
	}
//д�ճ�
void timetable:: writeagenda() {
	showdatetochoose();
	cin >> day;
	showconcrete_agenda_select();
	cin >> period;
	cout << "�������ճ����ݣ�" << endl;
	cin >> agendacontent;
	ofstream openagendafile;
	openagendafile.open("agenda.txt",ios::app);
	if (!openagendafile.is_open())
	{
		cout << "�ճ̴�ʧ�ܣ�" << endl;
		return;
	}
	openagendafile << endl;
	openagendafile << day << "-" << period << " " << agendacontent << endl;
	openagendafile.close();
}
//ɾ���ճ�
void timetable::deleteallagenda() {
	cout << "�Ƿ�ɾ�������ճ̣�" << endl;
	cout << "1.��   2.��" << endl;
	int q;
	cin >> q;
	switch (q)
	{
	case 1: {
		ofstream d("agenda.txt", ios::trunc);
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