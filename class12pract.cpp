#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));
	string border = "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
	//1 C = A-B - ������� ��� �������� ����������
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

	/*cout << "������� ���������� �����:";
	cin >> row;
	cout << "������� ���������� �������:";
	cin >> col;
	system("cls");*/

	/*cout << "������� �" << endl;
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

	cout << "������� �" << endl;
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


	cout << "������� C" << endl;
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


	/*cout << "������� ���������� �����:";
	cin >> row;
	cout << "������� ���������� �������:";
	cin >> col;
	system("cls");

	cout << "������� �" << endl;
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

	cout << "������� �" << endl;
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


	cout << "������� C" << endl;
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
		cout << "������� ���������� �����(�� 30):";
		cin >> row;
		cout << "������� ���������� �������(� 30):";
		cin >> col;
		system("cls");
	} while (row < 0 or row > 30 or col < 0 or col > 30);
	


	�
	cout << "������� �" << endl;
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

	�*2
	cout << "������� �*2" << endl;
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
	cout << "������� �" << endl;
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
	cout << "������� �*3" << endl;
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
	cout << "������� �" << endl;
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
	cout << "������� �*1.8" << endl;
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
	cout << "������� C" << endl;
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
		cout << "������� ���������� �����(�� 20):";
		cin >> row;
		cout << "������� ���������� �������(�� 20):";
		cin >> col;
		system("cls");
	} while (row < 0 or row > 30 or col < 0 or col > 30);

	//���������������� ������
	cout << "������������������ ������" << endl;
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

	//�������������� �������
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
	//��������������� ����������
	for (short i = 0; i < n; i++)
	{
		cout << setw(3) << arraySort[i] << "	";
	}









	system("pause");
}
