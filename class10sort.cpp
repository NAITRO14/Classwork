#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//Пузырьковая сортировка

	//-------------------------------
	const int size = 10;
	int array[size] = {}, tmp;

	for (short i = 0; i < size; i++)
	{
		array[i] = rand() % 41 - 20;
		cout << array[i] << "	";
	}
	
	cout << endl << endl;
	cout << "++++++++++++++ bubble_sort ++++++++++++++" << endl;
	//-------------------------------

	/*for (short i = 0; i < size; i++)
	{
		for (short j = size-1; j > i; j--)
		{
			if (array[j - 1] > array[j]) 
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
			}
		}
	}

	for (short i = 0; i < size; i++)
	{
		cout << array[i] << "	";
	}

	cout << endl << endl;*/
	

	//Сортировка втсавками

	/*for (short i = 0; i < size; i++)
	{
		tmp = array[i];
		for (short j =  i - 1; j >= 0 && array[j] > tmp ; j--)
		{
			array[j + 1] = array[j];
			array[j] = tmp;
		}
	}*/

	//Сортировка выбора (в возростании)
	//int j = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	j = i;
	//	for (int k = 0; k < size; k++)
	//	{
	//		if (array[j] > array[k])
	//			j = k;
	//		tmp = array[i];
	//		array[i] = array[j];
	//		array[j] = tmp;
	//		//swap(_array[i], _array[j]);
	//	}
	//}



	//пузырьковая
	/*for (short i = 0; i < size; i++)
	{
		for (short j = size - 1; j > i; j--)
		{
			if (array[j - 1] < array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
			}
		}
	}*/

	//вставки
	for (short i = 0; i < size; i++)
	{
		tmp = array[i];
		for (short j = i - 1; j >= 0 && array[j] > tmp; j--)
		{
			array[j + 1] = array[j];
			array[j] = tmp;
		}
	}

	//выбора
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		j = i;
		for (int k = 0; k > size; k++)
		{
			if (array[j] > array[k])
				j = k;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			//swap(_array[i], _array[j]);
		}
	}

	//Вывод
	for (short i = 0; i < size; i++)
	{
		cout << array[i] << "	";
	}
	cout << endl << endl;












	system("pause");
}