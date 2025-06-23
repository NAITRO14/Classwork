#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	////Генератор случайных чисел
	////01.01.1970 - количество мил.сек
	////%
	//srand(time(NULL));
	//int a = rand(); // 0 - 32767
	//cout << a << endl;
	//a = rand() % 10; //[ 0 - 9 ]

	////диапазон чисел от Х до У
	//	//rand()%(Y-X)+X <--------------

	////не включая
	////rand() % (Y - X) + X
	//// 
	////включая
	////rand() % (Y - X + 1) + X

	////[5-12) - не включая
	////rand() % (5 - 12) + 12;
	////[5-12] - включая
	////rand() % (5 - 12 + 1) + 12;

	////общая формула (включая первый, не включая последний)
	////Редактировать под нужды
	////rand() % (Y - X) + X


	////Массивы

	//int ar_bal[8] = {};
	//ar_bal[3] = 10;
	//cout << ar_bal[3] << " " << ar_bal[6] << endl;



	//-20.30
	//среднее арифм отриц чисел
	/*float newNum;
	int negative_sum = 0;
	int count = 0;
	const int size = 10;
	int array[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 51 - 20 ;
		cout << array[i] << "	";
	}
	cout << endl << endl;
	cout << "===================================" << endl;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0)
		{
			cout << array[i] << endl;
			count++;
			negative_sum += array[i];
		}
	}
	cout << "===================================" << endl;
	newNum = float(negative_sum) / count;
	cout << newNum << endl;*/

	/*for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0) cout << array[i] << endl;
	}
	cout << "===================================" << endl;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 != 0)
		{ 
			cout << array[i] << "	";
			sum += array[i];
		}
	}
	cout << "\nSum = " << sum << endl;
	cout << "==================================="<<endl;*/


	//размерность массива

	//1 add const size min
	const int size1 = 6;
	char ar1[size1] = {};
	for (int i = 0; i < size1; i++)
	{
		ar1[i] = rand() % 29 + 65;
		cout << ar1[i] << "	";
		
	}
	cout << endl << endl;
	cout << "++++++++++++++++ add ++++++++++++++++++" << endl;

	////1.2
	////1.2.1 add end
	//const int size2 = 7;
	//char ar2[size2] = {};
	//
	//for (int i = 0; i < size1; i++)
	//{
	//	ar2[i] = ar1[i];
	//}
	//char ch1;
	//cout << "Enter char" << endl;
	//cin >> ch1;
	//ar2[size1] = ch1;
	//for (int i = 0; i < size2; i++)
	//{
	//	cout << ar2[i] << "	";
	//}
	//cout << endl << endl;
	//cout << "++++++++++++++++ add ++++++++++++++++++" << endl;

	//1.2.2 add tail

	/*const int size2 = 7;
	char ar2[size2] = {};

	for (int i = 0; i < size1; i++)
	{
		ar2[i+1] = ar1[i];
	}
	char ch1;
	cout << "Enter char" << endl;
	cin >> ch1;
	ar2[0] = ch1;

	for (int i = 0; i < size2; i++)
	{
		cout << ar2[i] << "	";

	}

	cout << endl << endl;
	cout << "++++++++++++++++ add ++++++++++++++++++" << endl;*/

	//1.2.3 add inside

	const int size2 = 7;
	char ar2[size2] = {};
	int index;
	/*cout << "Enter index" << endl;
	cin >> index;

	for (short i = 0; i < size1-1; i++)
	{
		if (i < index-1)
		{
			ar2[i] = ar1[i];
		}
		else
		{
			ar2[i] = ar1[i + 1];
		}
	}*/
	/*for (int i = 0; i < index; i++)
	{
		ar2[i] = ar1[i];

	}
	ar2[index - 1] = ch1;

	for (int i = index; i < size2; i++)
	{
		ar2[i] = ar1[i-1];

	}*/

	//==========================================
	//Удаление поледнего
	/*for (short i = 0; i < size1-1; i++)
	{
		ar2[i] = ar1[i];
	}*/
	//==========================================
	//Удаление первого
	/*for (short i = 0; i < size1; i++)
	{
		if (i != size1-1)
		{
			ar2[i] = ar1[i+1];
		}
		
	}*/
	//==========================================
	//Удаление по индексу в одном массиве
	cout << "Enter index" << endl;
	cin >> index;

	for (short i = 0; i < size1; i++)
	{
		if (i == index)
		{
			for (short i = index; i < size1; i++)
			{
				if (i < size1-1)
				{
					ar1[i] = ar1[i+1];
				}
				
			}
		}
	}

	for (int i = 0; i < size1; i++) // для последнего примера size-1
	{
		cout << ar1[i] << "	";

	}





	system("pause");

}