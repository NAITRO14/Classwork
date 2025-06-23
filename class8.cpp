#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "+";
		}
		cout << endl;

	}*/

	/*for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			cout << " " << i * j;
		}
		cout << endl;
	}*/

	/*short len;
	cout << "Введите ширину квадрата" << endl;
	cin >> len;

	for (short i = 0; i < 8; i++)
	{
		for (short y = 0; y < 4; y++)
		{
			for (short x = 0; x < 4; x++)
			{
				if (i % 2 != 0)
				{
					for (short j = 0; j < len; j++)
					{
					cout << "*";
					}
					for (short j = 0; j < len; j++)
					{
						cout << "-";
					}
				}
				else if (i % 2 == 0) 
				{
					for (short j = 0; j < len; j++)
					{
						cout << "-";
					}
					for (short j = 0; j < len; j++)
					{
						cout << "*";
					}
				}
			}
			cout << endl;
		}
		
	}*/
	
	//количество символов = 9 - кол-во строк и колонок

	for (size_t i = 1; i <= 9; i++)
	{
		for (size_t x = 0; x < i; x++)
		{
			cout << " ";
		}
		for (size_t j = 9; j >= i; j--)
		{
			
			cout << "*";
		}
		cout << endl;
	}




}