#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>

float to_dollor(float _rub, short _manage);

//int verify(int _num1, int _num2);
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	
	short manage;
	float rub;
	bool isIn = true;
	while (isIn)
	{
		cout << "Что вы хотите сделать?" << endl;
		cout << "1 - перевести в евро\n2 - перевести в доллары" << endl;
		cin >> manage;
		if (manage < 1 or manage > 2) { isIn = true; system("cls");}
		else { isIn = false;  }
	}
	cout << "Введите количество рублей: ";
	cin >> rub;

	switch (manage)
	{
	case 1:
	{
		cout << to_dollor(rub, manage) << " Евр." << endl;
	}break;
	case 2:
	{
		cout << to_dollor(rub, manage) << " Дол." << endl;
	}break;
	}
	
	/*int num1, num2;
	cout << "Введите делимое: ";
	cin >> num1;
	cout << "Введите делитель: ";
	cin >> num2;

	if (verify(num1, num2) == true) { cout << "Числа делятся без остатка" << endl; }
	else { cout << "Числа не делятся без остатка" << endl; }*/

	system("pause");
}



//int verify(int _num1, int _num2)
//{
//	bool answ;
//	if (_num1 % _num2 == 0) { answ = true; }
//	else { answ = false; }
//	return answ;
//}
//----------------------------------------------------------------
float to_dollor(float _rub, short _manage)
{
	if (_manage == 1) { return _rub / 84.19; }
	if (_manage == 2) { return _rub / 92.34; }
}
//-----------------------------------------------------------------
