#include<iostream>
#include<string>
using namespace std;
#include"��ͷ.h"

int main() {
	cout << " " << endl;
	cout << "***************��ӭʹ��ʱ�������************" << endl;
	while (true) {
		cout << endl;
		cout << "____________________________________________" << endl;
		cout << "               ��ѡ�����������" << endl;
		cout << "               1.�����ճ�" << endl;
		cout << "               2.���칦��" << endl;
		cout << "               3.�ռǹ���" << endl;
		cout << "               4.�˳�����" << endl;
		cout << "____________________________________________" << endl;
		int a;
		cin >> a;
		switch (a) {
		case 1:{
			enteragenda();
			}
			break;
			case 2: {
				cout << "               ������칦��" << endl;
				enterlist();
			}
			break;
		case 3:
			enterthediary();
			break;
		case 4:
			cout << "                ���ڰ�ȫ�˳�......" << endl;
			system("pause");//������ͣ���û�����
			cout << "                �ɹ��˳���" << endl;
			cout << "                ��ӭ�´�ʹ�ã�" << endl;
			return 0;
			break;
		default:
			cout << "                ��������Чѡ�" << endl;
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
