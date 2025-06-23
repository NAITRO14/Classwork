#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	/*
		//числовые - целочисленные(short, int, long, longlong), вещественные(float, double)
	   //символьный

	char dollar = '$';
	cout << dollar << endl;
	cout << int(dollar) << endl;
	cout << "Enter of symbol" << endl;
	cin >> dollar;
	cout << int(dollar) << endl;

	//логический
	//bool -1B = true-да- 1 / false-нет -0

	bool worked = 1;
	cout << worked << endl;

	//Приведение типов: явное, неявное

	
	bool
	char
	short
	int
	long
	longlong
	double
	

	//неявное приведение
	int num1, num2;
	float res = (num1 + num2) / 2.0;
	cout << res << endl;
	//double = (int+short)/short

	//явное приведение
	int bal1, bal2, count;
	float avg_bal;
	avg_bal = (float)(bal1 + bal2) / count;
	cout << avg_bal << endl;

	int num1 = 146576788654; // 10101010101000100111101010100
	short num2 = num1; //3278
	cout << num2 << endl;


	//логические операторы: > < >= <= == !=

	int num1 = 10, num2 = 7;
	cout << (num1 == num2) << endl;
	cout << (num1 != num2) << endl;

	if (num1 == num2)
	{
		//true action
		cout << "true" << endl;
	}
	else
	{
		//false action
		cout << "false" << endl;
	}

	int age;
	cout << "Enter age" << endl;
	cin >> age;
	if (age >= 18 && age <= 60)
	{
		cout << "yes, you can work";
		}
	else
	{
		cout << "no, you can't work";
	}
	// и - and -& / или -or - || 
	
	*/

	int num;
	cout << "введите число для получения остатка" << endl;
	cin >> num;
	if (num % 4 == 0)
	{
		cout << "Остаток равен нулю";
	}
	else if (num % 4 == 1)
	{
		cout << "Остаток равен единице";
	}
	else if (num % 4 == 2)
	{
		cout << "Остаток равен двум";
	}
	else if (num % 4 == 3)
	{
		cout << "Остаток равен трем";
	}
	else
	{
		cout << "Ошибка";
	}

}