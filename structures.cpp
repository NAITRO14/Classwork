#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
#include <string.h>

using namespace std;

struct date
{
	int day;
	int week_day;
	string month;
	int year;

	void print_date()
	{
		cout << year << " " << month << " " << week_day << " " << day << endl;
	}
};

struct person
{
	string f_bame;
	string l_name;
	float weight;
	date bd;
	date exam;

	void print_person()
	{
		cout << f_bame << " " << l_name << " " << weight << endl;
		bd.print_date();
		exam.print_date();
		
	}
};

//void print_date(date _d)
//{
//	cout << _d.year << " " << _d.month << " " << _d.week_day << " " << _d.day << endl;;
//}
//
//void print_person(person p)
//{
//	print_date(p.bd);
//	cout << p.f_bame << " " << p.l_name << " " << p.weight << endl;
//	print_date(p.exam);
//}

int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//структуры 

	/*date bd = { 10, 2, "September", 2025 };
	date exam = { 16, 1, "June", 2025 };

	print_date(bd);*/

	//вложенные структуры 

	/*person p1 = { "Egor", "Monin", 60,{ 10, 3, "May", 2001}, {1, 4, "October", 2025} };*/
	
	/*cout << p1.bd.year << endl;*/

	/*print_person(p1);*/

	/*p1.print_person();*/

	//массив

	/*person p1 = { "Egor", "Monin", 60,{ 10, 3, "May", 2001}, {1, 4, "October", 2025} };
	person p2 = { "Egor_new", "Monin_new", 70,{ 30, 2, "April", 20011}, {2, 1, "November", 2015} };*/

	// const / dinamical

	/*person const_group[4] = { p1, p2 };

	person* dinam_group = new person[2]{ p1, p2 };

	for (short i = 0; i < 2; i++)
	{
		dinam_group[i].print_person();
	}*/


	cout << "Таблица информации" << endl;
	cout.fill('.'); //функция заполнения 
	cout << "Профиль компании" << setw(20) << 10 << endl;
	cout << "Доходы и убытки компании" << setw(12) << 11 << endl;
	cout << "Члены правления компании" << setw(14) << 13 << endl;
}
