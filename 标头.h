#include<iostream>
#include<string>
#pragma once
using namespace std;
#include<fstream>
#include"list.h"
void enteragenda();
class timetable {
public:
	int day;
	int period;
	string agendacontent;
	void writeagenda();
	void readagenda();
	void deleteallagenda();
};
int operateagenda();
void selectandwrite();
void showdatetochoose();
void showconcrete_agenda_select();
int enterthediary();
class AddDiary {
public:
	AddDiary() {
		setday = 0, setmonth = 0, setyear = 0;
	}
	void setDiaryTime();
	void setDiaryContent();
	void saveContent();
	void deletealldiary();
	~AddDiary() {};
private:
	int setday, setmonth, setyear;
	string setcaption;
	string setContent;
};
class List {                           
public:
	virtual string show_importance() = 0;
	virtual string show_listcontent() = 0;
};
void Addlist();
void showlist();
void deletlist();
void enterlist();

