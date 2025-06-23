#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));
	string border = "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
	//1 C = A-B - размеры вех массивов одинаковые
	//max = 25
	//row and col - user
	//[-15;15]

	/*const short row_max = 30;
	const short col_max = 30;
	short row, col;
	short arrayA[row_max][col_max] = {};
	short arrayB[row_max][col_max] = {};
	float arrayC[row_max][col_max] = {};
	float arrayD[row_max][col_max] = {};*/

	/*cout << "Введите количество строк:";
	cin >> row;
	cout << "Введите количество колонок:";
	cin >> col;
	system("cls");*/

	/*cout << "Матрица А" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayA[i][j] = rand() % 31 - 15;
			cout << setw(3) << arrayA[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;

	cout << "Матрица Б" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayB[i][j] = rand() % 31 - 15;
			cout << setw(3) << arrayB[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;


	cout << "Матрица C" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayC[i][j] = arrayA[i][j] - arrayB[i][j];
			cout << setw(3) << arrayC[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;*/


	/*cout << "Введите количество строк:";
	cin >> row;
	cout << "Введите количество колонок:";
	cin >> col;
	system("cls");

	cout << "Матрица А" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayA[i][j] = rand() % 31 - 15;
			cout << setw(3) << arrayA[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;

	cout << "Матрица Б" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayB[i][j] = rand() % 31 - 15;
			cout << setw(3) << arrayB[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;


	cout << "Матрица C" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayC[i][j] = arrayA[i][j] + arrayB[i][j];
			cout << setw(3) << arrayC[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;*/


	/*do
	{
		cout << "Введите количество строк(до 30):";
		cin >> row;
		cout << "Введите количество колонок(д 30):";
		cin >> col;
		system("cls");
	} while (row < 0 or row > 30 or col < 0 or col > 30);
	


	а
	cout << "Матрица А" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayA[i][j] = rand() % 31 - 15;
			cout << setw(3) << arrayA[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;

	а*2
	cout << "Матрица А*2" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayA[i][j] *= 2;
			cout << setw(3) << arrayA[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;


	b
	cout << "Матрица Б" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayB[i][j] = rand() % 31 - 15;
			cout << setw(3) << arrayB[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;

	b*3
	cout << "Матрица Б*3" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayB[i][j] *= 3;
			cout << setw(3) << arrayB[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;


	d
	cout << "Матрица Д" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayD[i][j] = rand() % 31 - 15;
			cout << setw(3) << arrayD[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;

	d*1.8
	cout << "Матрица Д*1.8" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayD[i][j] *= 1.8;
			cout << setw(3) << arrayD[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;

	c
	cout << "Матрица C" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arrayC[i][j] = (arrayA[i][j] - arrayB[i][j]) + arrayD[i][j];
			cout << setw(3) << arrayC[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;*/

	short row, col, n = 0,tmp;
	const short max = 20;
	short array[max][max] = {};
	short arraySort[max * max] = {};

	do
	{
		cout << "Введите количество строк(до 20):";
		cin >> row;
		cout << "Введите количество колонок(до 20):";
		cin >> col;
		system("cls");
	} while (row < 0 or row > 30 or col < 0 or col > 30);

	//неотсоритованный массив
	cout << "Неотсоритированный массив" << endl;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			array[i][j] = rand() % 31 - 15;
			cout << setw(3) << array[i][j] << "	";
		}
		cout << endl << endl;
	}
	cout << border << endl;

	//перекладывание массива
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			arraySort[n] = array[i][j];
			n++;
		}
		cout << endl << endl;
	}
	
	for (short i = 0; i < n; i++)
	{
		tmp = arraySort[i];
		for (short j = i - 1; j >= 0 && arraySort[j] < tmp; j--)
		{
			arraySort[j + 1] = arraySort[j];
			arraySort[j] = tmp;
		}
	}
	//отсортированный одномерный
	for (short i = 0; i < n; i++)
	{
		cout << setw(3) << arraySort[i] << "	";
	}









	system("pause");
}
