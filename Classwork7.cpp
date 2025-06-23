#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}

int main()
	{
	// 1|color, GotoXY

	setlocale(LC_ALL, "ru");
	//GotoXY(20, 0);
	//SetColor(Red, White);
	//cout << "Hello world!" ;
	//SetColor(White, Black);
	//cout << "Hello world!" << endl;

	////system("pause"); - убрать системные символы
	////getchar(); - убирает символы ввода системы 

	/*srand(time(NULL));
	int x, y;
	for (int i = 0; i < 10; i++)
	{
		x = rand() % 1000;
		Sleep(200);
		y = rand() % 1000;
		cout << setw(4) << x << " " << setw(4) << y << endl;
	}
	cout << "***************************" << endl;*/


	/*double x = 10, y = 3;
	cout << fixed << setprecision(2) << x / y << endl;*/

	cout << "Таблица информации" << endl;
	cout.fill('.'); //функция заполнения 
	cout << "Профиль компании" << setw(20) << 10 << endl;
	cout << "Доходы и убытки компании" << setw(12) << 11 << endl;
	cout << "Члены правления компании" << setw(14) << 13 << endl;

	}
