#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	 //data
	// 1 ���������� - ����������� ������� � �� � ������
	/*
	 1) �������� ������ : �����������, ��������������, ������/��������, �����������
	 : �������������/������������
	 short - 2b, �� -32768 �� 32768
	 int - 4b, �� -2 147 483 648 �� 2 147 483 648
	 long - 4b, �� -2 147 483 648 �� 2 147 483 648
	 longlong - 8b, �� -9 223 372 036 854 775 808 �� 9 223 372 036 854 775 807

	 float - 4b 12.35
	 double - 8b
	*/

	//int count_tree = 356726; 
	/*
	int count_tree;
	count_tree = 356726
	cin >> count_tree;
	*/

	int a, b, c, d, res;

	cout << "Input a" << endl;
	cin >> a;
	cout << "Input b" << endl;
	cin >> b;
	cout << "Input c" << endl;
	cin >> c;
	cout << "Input d" << endl;
	cin >> d;

	res = a * (b + c) - d;

	cout << "Result =" << res << endl;
	
}