#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	 //data
	// 1 переменная - поименновая область в ОП в байтах
	/*
	 1) числовые данные : натуральные, иирациональные, четные/нечетные, комплексные
	 : целочисленные/вещественные
	 short - 2b, от -32768 до 32768
	 int - 4b, от -2 147 483 648 до 2 147 483 648
	 long - 4b, от -2 147 483 648 до 2 147 483 648
	 longlong - 8b, от -9 223 372 036 854 775 808 до 9 223 372 036 854 775 807

	 float - 4b 12.35
	 double - 8b
	*/

	//int count_tree = 356726; 
	/*
	int count_tree;
	count_tree = 356726
	cin >> count_tree;
	*/

	int a, b, c, d, res;

	cout << "Input a" << endl;
	cin >> a;
	cout << "Input b" << endl;
	cin >> b;
	cout << "Input c" << endl;
	cin >> c;
	cout << "Input d" << endl;
	cin >> d;

	res = a * (b + c) - d;

	cout << "Result =" << res << endl;
	
}