#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	/*cout << "�������� ����� ���� �����: 1 - �������, 2 - �����. 3 - ������" << endl;
	int num_menu;
	cin >> num_menu;

	switch (num_menu)
	{
	case 2: { cout << "������������ ������ ����� ����"; }
		  break;
	case 3: { cout << "������������ ������ ������ ����"; }
		  break;
	case 1: { cout << "������������ ������ ������� ����"; }
		  break;
	default: { cout << "������ ����� ���"; }break;

	}*/

	/*cout << "�������� ������ ����� ������: � ";
	char num_menu;

	switch (num_menu)
	{
	case 'W':
	case 'w': { cout << "Winter"; }
		  break;

	case 'C':
	case 'c':
	case '�':
	case '�': { cout << "Spring"; }
		  break;

	case 'S':
	case's': { cout << "Summer"; }
		  break;

	case 'F':
	case 'f': { cout << "Fall"; }
		  break;
	}*/

/*1)	while (�������) - ���� � ������������
		{
		��� 1
		}
		��� 2

		2) do - ���� � ������������
		{
		��� 1
		}
		��� 2

		3)For
*/

	//���� while	cost=10000 num = 1500


	//summ-?

	/*int cost = 10000, num = 1500, summ = 0, i = 0;
	while (summ <=10000)
	{
		i ++;
		summ += num;
		cout << summ <<" "<< i << endl;

	}
	cout << "���� ����������!" << endl;*/

	
	/*int num_menu,k;
	do
	{
	cout << "�������� ����� ���� �����: 1 - �������, 2 - �����. 3 - ������" << endl;
		
		cin >> num_menu;
	
	switch (num_menu)
		{
		case 2: { cout << "������������ ������ ����� ����"; }
			  break;
		case 3: { cout << "������������ ������ ������ ����"; }
			  break;
		case 1: { cout << "������������ ������ ������� ����"; }
			  break;
		default: { cout << "������ ����� ���"; }break;
	}

	cout << "\n������ ���������? �� - 1, ��� - 0" << endl;
	cin >> k;
	system("cls");
	} while (k);*/
	float a, b;
	cin >> a;
	cin >> b;
	cout << a * b << endl;
	

	
}