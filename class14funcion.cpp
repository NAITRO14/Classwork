#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

/*
function()
{
	 // код


}

-сигнатуры функции
-функции с/без параметров: funcion(), funcion(int num, float ar[])
-тип возвращаемого знаени€: void, type data
-пр€мое / с прототипом

**********
- объ€вить
- описать
- вызвать
*/

//1 - пр€мое объ€вление/void/ без параметра

//void create_Array(int _size, int _array[])
//{
//	for (short i = 0; i < _size; i++)
//	{
//		_array[i] = rand() % 50;
//	}
//}

//2 - void пр€ма€ с параметрами
//void print_Array(int _size, int _array[])
//{
//	for (short i = 0; i < _size; i++)
//	{
//		cout << _array[i] << "	";
//	}
//	cout << endl;
//}

//void sort_Array(int _size, int _array[], int _tmp)
//{
//	for (short i = 0; i < _size; i++)
//	{
//		_tmp = _array[i];
//		for (short j = i - 1; j >= 0 && _array[j] > _tmp; j--)
//		{
//			_array[j + 1] = _array[j];
//			_array[j] = _tmp;
//		}
//	}
//}

// 3 - с возвращаемым типом / п€рма€ / с параметрами
//int sum_Array(int _size, int _array[])
//{
//	int tmp = 0;
//	for (int i = 0; i < _size; i++)
//	{
//		tmp += _array[i];
//	}
//	return tmp;
//}
////4 c прототипом
//void avg_Array(int _size, int _array[]);



int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));
	/*int tmp = 0;
	int const size = 10;
	int array[size] = {};

	create_Array(size, array);
	print_Array(size, array);
	cout << "*********sort***********" << endl;
	sort_Array(size, array, tmp);
	print_Array(size, array);
	cout << "************************" << endl;
	int sum = 0;
	sum = sum_Array(size, array);
	cout << sum << endl;
	cout << "************************" << endl;
	avg_Array(size, array);
	cout << endl;
	system("pause");*/

	




}

//void avg_Array(int _size, int _array[])
//{
//	int tmp = 0;
//	for (int i = 0; i < _size; i++)
//	{
//		tmp += _array[i];
//	}
//	tmp /= _size;
//	cout << tmp;
//}
