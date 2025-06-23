#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//const array
	//const int row = 3;
	//const int col = 6;

	/*char ar_fl_2[row][col];*/
	////a
	/*ar_fl_2[row][col] = {};*/
	////b
	//float ar_fl_2[3][6] = { 1.2, 4.4, 5.1, 6.8, 5.1, 8.9, 1.11, 2.55 };
	////c
	//int ar_fl_3[3][6] = { {3,5,6}, {3,7,4,7,5}, {1,9,0,5,45} };

	//d
	/*ar_fl_2[0][4] = 12.3;*/
	//e
	/*cin >> ar_fl_2[0][4];*/
	//f

	/*char ar_fl_2[row][col];
	ar_fl_2[row][col] = {};

	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			ar_fl_2[i][j] = (rand() % 26 + 65);
			cout << setw(3) << ar_fl_2[i][j] << "	";
		}
		cout << endl;
	}
	cout << endl << endl;*/

	//2 const array

	/*const int row_max = 20;
	const int col_max = 20;
	int row, col;
	cout << "¬ведите размер массива 1 - количество строк, 2 - количество колонок" << endl;
	cin >> row;
	cin >> col;
	system("cls");

	int ar[row_max][col_max];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ar[i][j] = rand() % 20;
			cout << setw(4) << ar[i][j];
		}
		cout << endl;
	}*/

	//3 array-3
	/*const int list_max = 20;
	const int row_max = 20;
	const int col_max = 20;
	int list, row, col;
	cout << "Enter:" << endl;
	cin >> list;
	cin >> row;
	cin >> col;

	if (list > 20 && row > 20 && col > 20) { cout << "Error" << endl; }
	else
	{
		int ar_3[list_max][row_max][col_max] = {};
		for (int l = 0; l < list; l++)
		{
			for (int r = 0; r < row; r++)
			{
				for (int c = 0; c < col; c++)
				{
					ar_3[l][r][c] = rand() % 1000;
					cout << setw(6) << ar_3[l][r][c];
				}
				cout << endl;
			}
			cout << endl << endl;
		}
	}*/

	//13456

	const int row_max = 20;
	const int col_max = 20;
	int row, col;
	cout << "¬введите размер массива (1 - количество строк, 2 -количество колонок)" << endl;
	cin >> row;
	cin >> col;
	int ar[row_max][col_max] = {};
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ar[i][j] = rand() % 100;
			cout << setw(4) << ar[i][j];
		}
		cout << endl << endl;
	}
	//вывод
	for (int j = 0; j < col; j++)
	{
		sum = 0;
		for (int i = 0; i < row; i++)
		{
			sum += ar[i][j];
		}
		cout << sum;
		cout << endl << endl;
	}




	system("pause");
}
