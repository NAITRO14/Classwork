#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

void create(double* ar, short row);
void sort(double* ar, short row);
void print(double* ar, short row);
void delete_(double* ar, short row);

int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));

	short row;
	cout << "Введите размер одномерного массива:";
	cin >> row;

	double* ar = new double[row];
	void(*par[])(double* ar ,short row) = {create, print, sort, print, delete_};

	for (short i = 0; i < 4; i++)
	{
		par[i](ar, row);
	}

}

void create(double* ar, short row)
{
	for (short i = 0; i < row; i++)
	{
		ar[i] = ((rand() % 25 + 65) + (rand() % 100 / 100.0));
	}
}

void sort(double* ar, short row)
{
	for (short i = 0; i < row - 1; i++)
	{
		for (short j = 0; j < row - i - 1; j++)
		{
			if (ar[j] > ar[j + 1])
			{
				double temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;
			}
		}
	}
}

void delete_(double* ar, short row)
{
	delete[] ar;
}

void print(double* ar, short row)
{
	cout << "Весь массив:" << endl;
	for (short i = 0; i < row; i++)
	{
		cout << setw(4) << ar[i] << "	";
	}
	cout << endl;
}




