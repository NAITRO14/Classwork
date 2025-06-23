#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
//перегруженные функции

//int sum(int n1, int n2);
//double sum(double n1, double n2);
//char sum(char n1, char n2);

//шаблонные функции
//template <typename T> void sum(T n1, T n2);

template <typename T1, typename T2, typename T3> T1 sum(T1 n1, T2 n2, T3 n3);





using namespace std;
int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL));
	cout << "*=*=*=*=*=*=*=*=*=* --- *=*=*=*=*=*=*=*=*=*=*=*" << endl;
	cout << sum(10.1, 20, 'A') << endl;
	//cout << "*=*=*=*=*=*=*=*=*=*=* double *=*=*=*=*=*=*=*=*=*=*" << endl;
	//cout << sum(10.5, 20.3) << endl;
	//cout << "*=*=*=*=*=*=*=*=*=*=* char *=*=*=*=*=*=*=*=*=*=*" << endl;
	//cout << sum('A', 'B') << endl;

	system("pause");
}

//перегруженные функции

//int sum(int n1, int n2)
//{
//	return n1 + n2;
//}
//double sum(double n1, double n2)
//{
//	return n1 + n2;
//}
//char sum(char n1, char n2)
//{
//	return char(n1 + n2);
//}

//шаблонные функции

//T sum(T n1, T n2)
//{
//	return n1 + n2;
//}

template<typename T1, typename T2, typename T3>
T1 sum(T1 n1, T2 n2, T3 n3)
{
	return T1(n1 + n2 + n3);
}
