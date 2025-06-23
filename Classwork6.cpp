#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	/*cout << "Выбирите пункт менб цвета: 1 - красный, 2 - синий. 3 - желтый" << endl;
	int num_menu;
	cin >> num_menu;

	switch (num_menu)
	{
	case 2: { cout << "Пользователь выбрал синий цвет"; }
		  break;
	case 3: { cout << "Пользователь выбрал желтый цвет"; }
		  break;
	case 1: { cout << "Пользователь выбрал красный цвет"; }
		  break;
	default: { cout << "Такого цвета нет"; }break;

	}*/

	/*cout << "Выбирите первую букву сезона: А ";
	char num_menu;

	switch (num_menu)
	{
	case 'W':
	case 'w': { cout << "Winter"; }
		  break;

	case 'C':
	case 'c':
	case 'С':
	case 'с': { cout << "Spring"; }
		  break;

	case 'S':
	case's': { cout << "Summer"; }
		  break;

	case 'F':
	case 'f': { cout << "Fall"; }
		  break;
	}*/

/*1)	while (условие) - цикл с предусловием
		{
		код 1
		}
		код 2

		2) do - цикл с постусловием
		{
		код 1
		}
		код 2

		3)For
*/

	//цикл while	cost=10000 num = 1500


	//summ-?

	/*int cost = 10000, num = 1500, summ = 0, i = 0;
	while (summ <=10000)
	{
		i ++;
		summ += num;
		cout << summ <<" "<< i << endl;

	}
	cout << "Цель достигнута!" << endl;*/

	
	/*int num_menu,k;
	do
	{
	cout << "Выбирите пункт менб цвета: 1 - красный, 2 - синий. 3 - желтый" << endl;
		
		cin >> num_menu;
	
	switch (num_menu)
		{
		case 2: { cout << "Пользователь выбрал синий цвет"; }
			  break;
		case 3: { cout << "Пользователь выбрал желтый цвет"; }
			  break;
		case 1: { cout << "Пользователь выбрал красный цвет"; }
			  break;
		default: { cout << "Такого цвета нет"; }break;
	}

	cout << "\nХотите повторить? Да - 1, Нет - 0" << endl;
	cin >> k;
	system("cls");
	} while (k);*/
	float a, b;
	cin >> a;
	cin >> b;
	cout << a * b << endl;
	

	
}