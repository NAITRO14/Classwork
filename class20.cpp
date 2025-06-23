#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));

	//1
	
	//double* pa;
	//pa = new double;
	//*pa = 45.6;
	//
	////2
	//double* pa = new double(45.6);
	//
	////3
	//double* pc = new double;
	//cin >> *pc;

	/*int* ar_1 = new int[5];*/

	//int size;
	//cin >> size;
	//int* ar_2 = new int[size];

	////1
	//for (short i = 0; i < size; i++)
	//{
	//	cout << *(ar_2 + i) << "	";
	//}
	//cout << endl;

	////2
	//for (short i = 0; i < size; i++)
	//{
	//	cout << ar_2[i] << "	";
	//}
	//cout << endl;

	////3
	//for (short i = 0; i < size; i++)
	//{
	//	cout << i[ar_2] << "	";
	//}
	//delete[] ar_2;


	/*int row, col;
	cout << "Enter row and col " << endl;
	cin >> row;
	cin >> col;

	char** pchar = new char*[row];
	for (int i = 0; i < row; i++)
	{
		pchar[i] = new char[col];
	}
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			pchar[i][j] = rand() % 23 + 65;
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << pchar[i][j] <<  "	";
		}
		cout << endl;
	}

	for (int i = 0; i < row; i++)
	{
		delete[] pchar[i];
	}
	delete[] pchar;*/


	int list, row, col;
	cout << "List: ";
	cin >> list;
	cout << "Row: ";
	cin >> row;
	cout << "Col: ";
	cin >> col;
	

	double*** pchar = new double**[list];
	for (int i = 0; i < list; i++)
	{
		pchar[i] = new double*[row];

		for (int j = 0; j < row; j++)
		{
			pchar[i][j] = new double[col];
		}
	}

	for (int i = 0; i < list; i++)
	{
		for (int j = 0; j < row; j++)
		{
			for (int o = 0; o < col; o++)
			{
				pchar[i][j][o] = ((rand() % 100) + ((rand() % 100) / 100.0));
			}
		}
	}

	for (int i = 0; i < list; i++)
	{
		for (int j = 0; j < row; j++)
		{
			for (int o = 0; o < col; o++)
			{
				cout << pchar[i][j][o] << "	";
			}
			cout << endl;
		}
		cout << endl << endl;
	}

	system("pause");
}