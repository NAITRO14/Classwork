#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<iomanip> 
#include<stdlib.h>
#include<stdio.h>

using namespace std;

/*
printf()	- cout << 
scanf()	- cin >> 
-форматированные функции-

*/

void main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));


	//printf() <------------------
	/*float x = 231.56564;*/

	//cout << x << endl;

	//printf("Number x = %.3f", x);


	/*int num1 = 12345;*/

	/*printf("+++++ %.3f +++++++ %8i", x , num1);
	cout << endl;
	printf("+++++ %.3f +++++++ %08i", x, num1);*/
	
	//string s = "ThisIsString";

	/*const char* s = "ThisIsString";
	printf("My string %s", s);*/
	



	//scanf() <------------------

	//char str[50];
	///*scanf("%s", &str);*/
	//gets_s(str);
	//cout << "------------------" << endl;
	//printf("%s", str);

	int x;
	double y;
	char c;
	//scanf("%f %c %d", &y, &c, &x); ??????????????

	printf("y = %f c = %c x = %d", &y, &c, &x);


	cout << endl; system("pause");
}