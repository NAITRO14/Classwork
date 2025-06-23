#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
#include <string.h>

using namespace std;

enum Suit { CLUBS, DIAMONDS = 5, HEARTS, SPADES, my_card = SPADES + 10 }; // - можно менять номера индефикаторов

//void function_switch(enum Suit n)
//{
//	switch (n)
//	{
//	case CLUBS:cout << "CLUBS" << endl;
//		break;
//	case DIAMONDS:
//		cout << "DIAMONDS" << endl;
//		break;
//	case HEARTS:
//		cout << "HEARTS" << endl;
//		break;
//	case SPADES:
//		cout << "SPADES" << endl;
//		break;
//	case my_card:
//		cout << "my_card" << endl;
//		break;
//	default:
//		cout << "ERROR" << endl;
//		break;
//	}
//}

//void f1()
//{
//	cout << "f1" << endl;
//}
//
//void f2()
//{
//	cout << "f2" << endl;
//}
//
//int f3(char k)
//{
//	cout << k << endl;
//	return 1;
//}

int add(int n1, int n2) { return n1 + n2; }
int sbt(int n1, int n2) { return n1 - n2; }
int mult(int n1, int n2) { return n1 * n2; }
int divis(int n1, int n2) { return n1 / n2; }

int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//enum - перечисляемый тип
	//Suit k1 = Suit::DIAMONDS ;
	//cout << Suit::DIAMONDS << endl;
	///*enum Suit n1 = DIAMONDS;*/
	///*function_switch(n1);*/

	/*void(*pf1)();
	pf1 = f1;
	f1();
	(*pf1)();
	pf1 = f2;
	(*pf1)();
	int (*pf3)(char b) = f3;
	(*pf3)('A');*/

	//int (*pf)(int s1, int s2) = NULL;
	//char ch;
	//cin >> ch; // +, -, *, /

	//switch (ch)
	//{
	//case'+':
	//	pf = add; break;
	//case'-':
	//	pf = sbt; break;
	//case'*':
	//	pf = mult; break;
	//case'/':
	//	pf = divis; break;
	//default:
	//	break;
	//}

	//cout << (*pf)(3, 2) << endl;

	//int ar[] = { 2, 7, 4, 6 , 8, 5 , 2 };
	//int* par = ar;/**(par + 1);*/


	int(*par_f[])(int, int) = { add, sbt, mult , divis };
	for (int i = 0; i < 4; i++)
	{
		cout << "function " << i << endl;
		cout << par_f[i](10, 15) << endl;
	}
	
}