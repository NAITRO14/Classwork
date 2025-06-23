#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

void create(short row, short col, short ar[][30]);

void print(short row, short col, short ar[][30]);


int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));

	const short size = 30;
	short ar[size][size] = {}; 
	short count, row, col;
	//dialogue
	cin >> row;
	cin >> col;
	cout << "----------------------- Create -------------------------" << endl;
	create(row, col, ar);
	cout << "----------------------- Create -------------------------" << endl;
	print(row, col, ar);
	system("pause");
}

void create(short row, short col, short ar[][30])
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			ar[i][j] = rand() % 50;
		}
	}
}

void print(short row, short col, short ar[][30])
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(5) << ar[i][j];
		}
		cout << endl;
	}
}
