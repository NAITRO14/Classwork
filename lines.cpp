#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
	srand(time(NULL));
	/*setlocale(LC_ALL, "ru");*/
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//строковая константа
	
	//1

	/*char line[6] = { 'h', 'e', 'l', 'l', 'o', '\0'};
	for (int i = 0; i < 6; i++)
	{
		cout << line[i] << ' ';
	}
	cout << endl;*/

	//2
	
	//char line[] = "hello, world";
	//cout << line << endl;
	////line[] = "мама мыла раму"; | - неверно

	//for (int i = 0; i < 10; i++)
	//{
	//	cin >> line[i];
	//}

	//3
	/*char* mes;
	char line[] = "hello, world";
	mes = line;
	cout << mes << endl;
	cout << line << endl;*/

	//4

	/*char line[] = "hello, world";
	cout << line << " " << sizeof(line) << endl;
	const char* mes = "hello, world";
	cout << mes << " " << sizeof(mes) << endl;*/

	//5

	//char line[80];
	///*cin >> line;*/
	//gets_s(line); // | - более правльниый вариант для строки, чем cin  
	///*cout << line << endl;*/
	//puts(line);

	//6

	//char* str1 = new char[128];
	//cin.getline(str1, 128); // мама мыла раму
	//cout << str1 << endl;
	//cout << sizeof(str1) << endl; | + "\0"

	//7 

	//char* str1 = new char[128];
	//cin.getline(str1, 128);
	//int len = strlen(str1); // | - без "\0" !
	//cout << len << endl;

	//8

	//char* str1 = new char[128];
	//cin.getline(str1, 128);
	//_strupr(str1); // _strlwr
	//cout << str1 << endl;

	//9
	/*_strrev(str1);
	cout << str1 << endl;*/

	//10 - конкатенация строк

	//char s1[] = "Monin";
	//char s2[] = "Egor";
	//char s3[] = "Victorovich";

	//int size = strlen(s1) + strlen(s2) + strlen(s3) + 3;
	//char* mas = new char[size]; // Monin Egor Victorovich \0
	//strcpy(mas, s1);// Monin
	//strcat(mas, " ");//Monin| |
	//strcat(strcat(mas, s2), " ");// Monin Egor| |
	//strcat(mas, s3); // Monin Egor Victorovich
	//cout << mas << endl;

	//strncat(mas, s3, 1) - (что, с чем, сколько взять из второго)
	//strncpy(mas, s3, 1) - (что, с чем, сколько взять из второго)

	//work

	char s1[] = "Monin";
	char s2[] = "Egor";
	char s3[] = "Victorovich";

	int size = strlen(s1) + 6;
	char* mas = new char[size]; // Monin Egor Victorovich \0
	strcpy(mas, s1);// Monin
	strcat(strcat(strncat(strcat(mas, " "), s2, 1), "."), " ");

	strcat(strncat(mas, s3, 1), ".");

	cout << mas << endl;
}