#pragma once
#include<iostream>
using namespace std;
#include<fstream>
#include<string>
#include"标头.h"
void selectandwrite() {
	cout << "请输入需要添加日程的时间段：（如周一第一大节：1 1）" << endl;
	int h, i;
	cin >> h >> i;
	switch (h) {
	case 1: {
		switch (i) {
		case 0: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("1-0.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 1: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("1-1.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 2: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("1-2.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 3: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("1-3.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 4: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("1-4.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 5: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("1-5.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 6: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("1-6.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 7: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("1-7.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		default:
			cout << "输入不正确！" << endl;
		}
	}
		  break;
	case 2: {
		switch (i) {
		case 0: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("2-0.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 1: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("2-1.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 2: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("2-2.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 3: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("2-3.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 4: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("2-4.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 5: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("2-5.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 6: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("2-6.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 7: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("2-7.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		default:
			cout << "输入不正确！" << endl;
		}
	}
		  break;
	case 3: {
		switch (i) {
		case 0: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("3-0.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 1: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("3-1.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 2: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("3-2.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 3: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("3-3.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 4: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("3-4.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 5: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("3-5.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 6: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("3-6.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 7: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("3-7.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		default:
			cout << "输入不正确！" << endl;
		}
	}
		  break;
	case 4: {
		switch (i) {
		case 0: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("4-0.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 1: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("4-1.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 2: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("4-2.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 3: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("4-3.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 4: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("4-4.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 5: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("4-5.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 6: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("4-6.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 7: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("4-7.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		default:
			cout << "输入不正确！" << endl;
		}
	}
		  break;
	case 5: {
		switch (i) {
		case 0: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("5-0.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 1: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("5-1.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 2: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("5-2.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 3: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("5-3.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 4: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("5-4.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 5: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("5-5.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 6: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("5-6.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 7: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("5-7.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		default:
			cout << "输入不正确！" << endl;
		}
	}
		  break;
	case 6: {
		switch (i) {
		case 0: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("7-0.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 1: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("6-1.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 2: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("6-2.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 3: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("6-3.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 4: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("6-4.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 5: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("6-5.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 6: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("6-6.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 7: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("6-7.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		default:
			cout << "输入不正确！" << endl;
		}
	}
		  break;
	case 7: {
		switch (i) {
		case 0: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("7-0.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 1: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("7-1.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 2: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("7-2.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 3: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("7-3.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 4: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("7-4.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 5: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("7-5.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 6: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("7-6.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		case 7: {
			string agendacontent;
			cin >> agendacontent;
			ofstream ofs("7-7.txt");
			ofs << agendacontent;
			ofs.close();
		}
			  break;
		default:
			cout << "输入不正确！" << endl;
		}
	}
		  break;
	default:
		cout << "输入不正确！" << endl;
	}
}