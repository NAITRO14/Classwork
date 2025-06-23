#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

//void func_1(int num1, int num2);
//void func_2(int &num1, int &num2); //ссылки
//void func_3(int* num1, int* num2); //указатели

void f1(int& num1, int& num2);
void f2(int* num1, int* num2);

int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));

	/*int a = 10;
	int* pa = &a;*/ // положили адрес "а" в переменную "ра"

	/*double b = 20.5;
	double* pb = &b;
	cout << *pa + *pb << endl;

	cout << *pb << endl;*/



	/*double num = 10.3;
	double* pnum = &num;

	char simb = 'a';
	char* psimb = &simb;*/

	/*cout << a << "	" << &a << "	" << pa << "	" << *pa << endl;*/

	//cout << "Function_ 1" << endl;
	//int a = 10, b = 20;
	//cout << "before function " << endl;
	//cout << a << "  " << b << endl;
	//func_1(a, b);
	//cout << "after function " << endl;
	//cout << a << "  " << b << endl;

	//cout << endl << endl << "Function_2_reference" << endl;

	//int c = 10, d = 20;
	//cout << "before function " << endl;
	//cout << c << "  " << d << endl;
	//func_2(c, d);
	//cout << "after function " << endl;
	//cout << c << "  " << d << endl;


	//cout << endl << endl << "Function_3_pointer" << endl;

	//int e = 10, f = 20;
	//cout << "before function " << endl;
	//cout << e << "  " << f << endl;
	//func_3(&e, &f); //int* num1=&e;
	//cout << "after function " << endl;
	//cout << e << "  " << f << endl;

	cout << "f1" << endl;
	int a = 0, b = 4;
	cout << "before function " << endl;
	cout << a << "  " << b << endl;
	f1(a, b);
	cout << "after function " << endl;
	cout << a << "  " << b << endl;

	cout << endl << endl << "f2" << endl;
	int c = 0, d = 4;
	cout << "before function " << endl;
	cout << c << "  " << d << endl;
	f2(&c, &d);
	cout << "after function " << endl;
	cout << c << "  " << d << endl;









	system("pause");
}

//void func_1(int num1, int num2)
//{
//	cout << "before" << endl;
//	cout << num1 << "	" << num2 << endl;
//	int tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//	cout << "after" << endl;
//	cout << num1 << "	" << num2 << endl;
//}
//
//void func_2(int& num1, int& num2)
//{
//	cout << "before" << endl;
//	cout << num1 << "	" << num2 << endl;
//	int tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//	cout << "after" << endl;
//	cout << num1 << "	" << num2 << endl;
//}
//
//void func_3(int* num1, int* num2)
//{
//	cout << "before" << endl;
//	cout << *num1 << "	" << *num2 << endl;
//	int tmp = *num1;
//	*num1 = *num2;
//	*num2 = tmp;
//	cout << "after" << endl;
//	cout << *num1 << "	" << *num2 << endl;
//}

void f1(int& num1, int& num2)
{
	num1 += 25;
	num2 += 25;
}

void f2(int* num1, int* num2)
{
	*num1 += 25;
	*num2 += 25;
}
