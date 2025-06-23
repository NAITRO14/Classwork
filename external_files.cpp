#define _CRT_SECURE_NO_WARNINGS
//#define N 2
#include<iostream>
#include<windows.h>
#include<iomanip> 
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct  tag_book
{
	char name[100];
	char author[100];
	int year;
} books[2];

/*
1.Файловая переменная
2.Открыть файл
3.Опреции с данными
4.Закрыть файл

-modes:
*w - write
*r - read
*a - add

*/
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//setlocale(LC_ALL, "ru");
	int N = 2;


	// ---> 1 ---> 2
	/*FILE* f;*/// = fopen("test.txt", "w");
	//if (!f) cout << "file not found" << endl;
	//else// ---> 3 <---
	//{
	//	cout << "file found" << endl;
	//	fprintf(f, "hello students!");
	//}

	//fclose(f);


	//чтение с файла
	/*cout << "+++++++++++++++++++++++++++++++++++" << endl;

	f = fopen("test.txt", "r");
	if (!f) cout << "file not found" << endl;
	else
	{
		char* s;
		char buf[128];

		s = fgets(buf, sizeof(buf), f);	
		cout << buf << endl;

		fclose(f);
	}*/

	/*FILE* f = fopen("filetest.txt", "w");
	if (!f)
		cout << "error" << endl;
	else
	{
		cout << "file opened\n";
		for (int i = 0; i < 16; i++)
		{
			fprintf(f, "%#d\t %#o\t %#X\n", i, i, i);
		}
		fclose(f);
		cout << "file closed" << endl;
	}
	f = fopen("filetest.txt", "r");
	if (!f)
		cout << "error" << endl;
	else
	{
		char* s;
		cout << "file opened for read\n" << endl;
		char buf[128];
		do
		{
			s = fgets(buf, sizeof(buf), f);
			cout << buf << endl;
		} while (s);
		fclose(f);
		cout << "\n\nfile close\n\n";
	}*/

	FILE* fp = fopen("my_file.txt", "w");
	for (int i = 0; i < N; i++) // cin >>
	{
		cout << "Введите название книги" << endl;
		scanf("%s", books[i].name);
		cout << "Введите имя автора" << endl;
		scanf("%s", books[i].author);
		cout << "Введите год написания книги" << endl;
		scanf("%d", &books[i].year);
	}
	cout << "=============================================" << endl;
	for (int i = 0; i < N; i++)
	{
		puts(books[i].name);
		puts(books[i].author);
		printf("%d\n", books[i].year);
	}
	cout << "=============================================" << endl;
	for (int i = 0; i < N; i++)
		fprintf(fp, "%s %s %d\n", books[i].name, books[i].author, books[i].year);
	fclose(fp);
	fp = fopen("my_file.txt", "r");
	for (int i = 0; i < N; i++)
		fscanf(fp, "%s %s %d\n", books[i].name, books[i].author, &books[i].year);
	fclose(fp);
	printf("------------------------------------------------\n");
	for (int i = 0; i < N; i++)
	{
		puts(books[i].name);
		puts(books[i].author);
		printf("%d\n", books[i].year);
	}



}