#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdlib.h>
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
	setlocale(LC_ALL, "ru"); srand(time(NULL));
	short n = 0, cont = 0, sum, year = 2022, count_l = 1,sum_total = 0;
	const short list = 3;
	const short row = 4;
	const short col = 3;
	short array[list][row][col] = {};
	short wshop_total[list][row] = {};
	short month_total[list][col] = {};
	short month_final_sum[col] = {};
	short wshop_final_sum[row] = {};
	short period_total = 0;


	//создание массива
	for (short l = 0; l < list; l++)
	{
		for (short r = 0; r < row; r++)
		{
			for (short c = 0; c < col; c++)
			{
				array[l][r][c] = rand() % 51 + 50;
			}
		}
	}

	//складывание по цехам
	for (short l = 0; l < list; l++)
	{
		for (short r = 0; r < row; r++)
		{
			for (short c = 0; c < col; c++)
			{
				wshop_total[l][r] += array[l][r][c];
				
			}
		}
	}

	//складывание по мес€цам
	for (short l = 0; l < list; l++)
	{
		for (short r = 0; r < col; r++)
		{
			for (short c = 0; c < row; c++)
			{
				month_total[l][n] += array[l][c][r]; //почему то на второй итерации значени€ начинают складыватьс€  по индексу l = 2, но она в этот момент равна 1 и потом все съезжает на 1
			}
			n++;
		}
		n = 0;
	}

	//<----------------------------------------------------------------

	short Gy;
	for (short p = 0; p < 3; p += 1)
	{
		//текст
		SetColor(LightRed, Black);
		cout<< "\t\t    " << "√од " << year << endl << endl;
		SetColor(LightCyan, Black);

		short n = 1;
		cout << "\t " << "янв     " << "‘ев     " << "ћар     " << "»тог по цеху" << endl;

		for (short r = 0; r < row; r++)
		{
			SetColor(LightCyan, Black);
			cout << "÷ех " << n << ":";
			SetColor(LightMagenta, Black);
			
			for (short c = 0; c < col; c++)
			{
				cout << "\t" << setw(3) << array[cont][r][c];
				
			}
			SetColor(Yellow, Black);
			cout << "\t     " << wshop_total[cont][n - 1];
			cout << endl << endl;
			n++;
		}
		SetColor(LightCyan, Black);
		n = 0;
		cout << "\t   " << "»тог по мес€цу" << endl << endl;
		SetColor(Yellow, Black);
		for (short r = 0; r < 3; r++)
		{
			cout << "\t" << month_total[cont][n];
			n++;
		}

		//сумма за год 
		SetColor(LightCyan, Black);
		sum = 0;
		for (short i = 0; i < col; i++)
		{
			sum += month_total[cont][i];
		}
		cout << endl << endl << "—умма за год: ";
		SetColor(Yellow, Black);
		cout << sum << endl;
		SetColor(Blue, Black);
		for (short i = 0; i < 25; i++)
		{
			cout << "=*";
		}
		cout << endl << endl;
		cont++;
		year++;
		
	}

	//»тог
	SetColor(LightRed, Black);
	cout << "\t\t\t" << "»тог" << endl << endl;
	SetColor(LightCyan, Black);
	cout << "\t\t" << "янв     " << "‘ев     " << "ћар     " << endl;
	cout << "- по мес€цам:";
	SetColor(Yellow, Black);
	for (cont = 0; cont < 3; cont++)
	{
		for (short i = 0; i < 3; i++)
		{
			month_final_sum[cont] += month_total[i][cont];
		}
		cout << "	" << month_final_sum[cont];
	}

	cout << endl << endl;
	SetColor(LightCyan, Black);
	cout << "- по цехам:";
	SetColor(Yellow, Black);
	for (cont = 0; cont < 4; cont++)
	{
		for (short i = 0; i < 3; i++)
		{
			wshop_final_sum[cont] += wshop_total[i][cont];
		}
		SetColor(LightCyan, Black);
		cout << endl << "\t" << "÷ех " << count_l << ":	";
		SetColor(Yellow, Black);
		cout << wshop_final_sum[cont];
		count_l += 1;
	}
	count_l = 0;

	SetColor(LightCyan, Black);
	cout << endl << endl << "—умма за весь период: ";
	SetColor(Yellow, Black);
	for (short r = 0; r < col; r++)
	{
		period_total += month_final_sum[r];
	}
	cout << period_total << "	";
	



	SetColor(Black, Black);
	system("pause");
}
