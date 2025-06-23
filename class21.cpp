#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

//void function_1(double* pa);
//void function_2(double* pa);
//
//void init_char(char* array, short size);
//void print(char* array, short size);
//void sort(char* array, short size);

int **create_int(short* row, short* col);
void init_int(int** array, short* row, short *col);
void print_1(int** array, short *row, short* col);
void delete_int(int** array, short* row, short* col);

int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));

	//1 - переменные
	/*double* pa = new double();
	cout << "Enter a: ";
	cin >> *pa;

	cout << "f1" << endl;
	function_1(pa);
	cout << *pa << endl;

	cout << "f2" << endl;
	function_2(pa);
	cout << *pa << endl;*/
	;

	//2
	/*short size;
	cout << "Enter size" << endl;
	cin >> size;
	char* array = new char[size];

	init_char(array, size);

	print(array, size);

	sort(array, size);

	cout << "sorted" << endl;
	print(array, size);*/

	//3
	short* row = new short();
	short* col = new short();
	int** array = create_int(row, col);

	init_int(array, row, col);
	print_1(array, row, col);








	system("pause");
}

//void function_1(double* pa)
//{
//	*pa += 100;
//	cout << *pa << endl;
//}
//
//void function_2(double* pa)
//{
//	cout << "Before *: " << *pa << endl;
//	*pa *= 2;
//	cout << "After *: " << *pa << endl;
//	cout << *pa << endl;
//}
//
//void init_char(char* array, short size)
//{
//	for (short i = 0; i < size; i++)
//	{
//		array[i] = rand() % 23 + 65;
//	}
//}
//
//void print(char* array, short size)
//{
//	for (short i = 0; i < size; i++)
//	{
//		cout << array[i] << "	";
//	}
//	cout << endl;
//}
//
//void sort(char* array, short size)
//{
//	short tmp;
//	for (short i = 0; i < size; i++)
//	{
//		for (short i = 0; i < size; i++)
//		{
//			for (short j = 0; j < size; j++)
//			{
//				tmp = array[j];
//				if (array[j] > array[j + 1] and j + 1 < size)
//				{ array[j] = array[j + 1]; array[j + 1] = tmp; }
//			}
//		}
//	}
//}

int** create_int(short* row, short* col)
{

	cout << "Enter row, col: ";
	cin >> *row;
	cin >> *col;
	int** array = new int* [*row];
	for (short i = 0; i < *row; i++)
	{
		array[i] = new int[*col];
	}
	return array;
}

void init_int(int** array, short *row, short *col)
{
	for (short i = 0; i < *row; i++)
	{
		for (short j = 0; j < *col; j++)
		{
			array[i][j] = rand() % 100;
		}
	}
}

void print_1(int** array, short* row, short *col)
{
	for (short i = 0; i < *row; i++)
	{
		for (short j = 0; j < *col; j++)
		{
			cout << array[i][j] << "	";
		}
		cout << endl;
	}
	cout << endl;
}

void delete_int(int** array, short* row, short* col)
{
	for (short i = 0; i < *row; i++)
	{
		delete[] array[i];
	}
	delete[] array;
	cout << "array was deleted" << endl;
}
