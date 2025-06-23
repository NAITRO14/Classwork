#include <iostream>
#include <windows.h>
#include <string>
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

//create
template<typename T1>
T1* create_1(T1* array, short col);

template<typename T1>
T1** create_2(T1** array, short row, short col);

template<typename T1>
T1*** create_3(T1***array, short list, short row, short col);


//initional
template<typename T1>
void init_1(T1*& array, short col);

template<typename T1>
void init_2(T1**& array, short row, short col);

template<typename T1>
void init_3(T1***& array, short list, short row, short col);



//averege
template<typename T1>
float avg_1(T1*& array, short col);

template<typename T1>
float avg_2(T1**& array,short row, short col);

template<typename T1>
float avg_3(T1***& array, short list, short row, short col);

//print
template<typename T1>
void print_1(T1*& array, short col);

template<typename T1>
void print_2(T1**& array, short row, short col);

template<typename T1>
void print_3(T1***& array, short list, short row, short col);


//delete
template<typename T1>
void del_1(T1*& array, short col);

template<typename T1>
void del_2(T1**& array, short row, short col);

template<typename T1>
void del_3(T1***& array, short list, short row, short col);


int main()
{
	setlocale(LC_ALL, "ru"); srand(time(NULL)); SetColor(LightCyan, Black);
	short type, value;

	short list;
	short row;
	short col;
	while (true)
	{
		//мерность
		do
		{
			cout << "С какой мерностью массива хотите работать ?" << endl;
			cout << "|1|2|3|" << endl;
			cin >> value;
			system("cls");
		} while (value < 1 or value > 3);

		//тип данных
		do
		{
			cout << "С каким типом данных хотите работать ?" << endl;
			cout << "1|short 2|float 3|char" << endl;
			cin >> type;
			system("cls");
		} while (type < 1 or type > 3);

		//размерность
		do
		{
			if (value < 3) { break; }
			cout << "Введите количество листов(не менее 1 и не более 15)" << endl;
			cout << "Листы: ";
			cin >> list;
			system("cls");
		} while (list < 1 or list > 15);

		do
		{
			if (value < 2) { break; }
			cout << "Введите количество строк(не менее 1 и не более 20)" << endl;
			cout << "Строки: ";
			cin >> row;
			system("cls");
		} while (row < 1 or row > 20);

		do
		{
			cout << "Введите количество столбцов(не менее 1 и не более 10)" << endl;
			cout << "Столбцы: ";
			cin >> col;
			system("cls");
		} while (col < 1 or col > 10);

		//выбор мерности
		switch (value)
			//выбор типа данных
		{
		case 1:
		{
			switch (type)
			{
			case 1:
			{
				short* array = NULL;
				array = create_1(array, col);
				init_1(array, col);
				print_1(array, col);
				cout << "Среднее значение массива: " << avg_1(array, col) << endl;
			}break;
			case 2:
			{
				float* array = NULL;
				array = create_1(array, col);
				init_1(array, col);
				print_1(array, col);
				cout << "Среднее значение массива: " << avg_1(array, col) << endl;
			}break;
			case 3:
			{
				char* array = NULL;
				array = create_1(array, col);
				init_1(array, col);
				print_1(array, col);
				cout << "Среднее значение массива: " << char(avg_1(array, col)) << endl;
			}break;
			}
		}break;
		case 2:
		{
			switch (type)
			{
			case 1:
			{
				short** array = NULL;
				array = create_2(array, row, col);
				init_2(array, row, col);
				print_2(array, row, col);
				cout << "Среднее значение массива: " << avg_2(array, row, col) << endl;
			}break;
			case 2:
			{
				float** array = NULL;
				array = create_2(array, row, col);
				init_2(array, row, col);
				print_2(array, row, col);
				cout << "Среднее значение массива: " << avg_2(array, row, col) << endl;
			}break;
			case 3:
			{
				char** array = NULL;
				array = create_2(array, row, col);
				init_2(array, row, col);
				print_2(array, row, col);
				cout << "Среднее значение массива: " << char(avg_2(array, row, col)) << endl;
			}break;
			}
		}break;
		case 3:
		{
			switch (type)
			{
			case 1:
			{
				short*** array = NULL;
				array = create_3(array, list, row, col);
				init_3(array, list, row, col);
				print_3(array, list, row, col);
				cout << "Среднее значение массива: " << avg_3(array, list, row, col) << endl;
			}break;
			case 2:
			{
				float*** array = NULL;
				array = create_3(array, list, row, col);
				init_3(array, list, row, col);
				print_3(array, list, row, col);
				cout << "Среднее значение массива: " << avg_3(array, list, row, col) << endl;
			}break;
			case 3:
			{
				char*** array = NULL;
				array = create_3(array, list, row, col);
				init_3(array, list, row, col);
				print_3(array, list, row, col);
				cout << "Среднее значение массива: " << char(avg_3(array, list, row, col)) << endl;
			}break;
			}
		}break;
		}
		system("pause");
		system("cls");
	}
}
//create
template<typename T1>
T1* create_1(T1* array, short col)
{
	array = new T1[col];
	return array;
}

template<typename T1>
T1** create_2(T1** array, short row, short col)
{
	array = new T1* [row];
	for (short i = 0; i < row; i++)
	{
		array[i] = new T1[col];
	}

	return array;
}

template<typename T1>
T1*** create_3(T1***array, short list, short row, short col)
{
	array = new T1** [list];
	for (short i = 0; i < list; i++)
	{
		array[i] = new T1* [row];
		for (short j = 0; j < row; j++)
		{
			array[i][j] = new T1[col];
		}
	}

	return array;
}


//initional
template<typename T1>
void init_1(T1*& array, short col)
{
	for (short i = 0; i < col; i++)
	{
		array[i] = rand() % 26 + 65 + rand() % 100 / 100.0;
	}
}

template<typename T1>
void init_2(T1**& array, short row, short col)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			array[i][j] = rand() % 26 + 65 + rand() % 100 / 100.0;
		}
	}
}

template<typename T1>
void init_3(T1***& array, short list, short row, short col)
{
	for (short i = 0; i < list; i++)
	{
		for (short j = 0; j < row; j++)
		{
			for (short o = 0; o < col; o++)
			{
				array[i][j][o] = rand() % 26 + 65 + rand()% 100 / 100.0;
			}
		}
	}
}


//averege
template<typename T1>
float avg_1(T1*& array, short col)
{
	float sum = 0.0;
	for (short i = 0; i < col; i++)
	{
		sum += array[i];
	}
	return sum / col;
}

template<typename T1>
float avg_2(T1**& array, short row, short col)
{
	float sum = 0.0;
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			sum += array[i][j];
		}
	}
	return sum / (row * col);
}

template<typename T1>
float avg_3(T1***& array, short list, short row, short col)
{
	float sum = 0.0;
	for (short i = 0; i < list; i++)
	{
		for (short j = 0; j < row; j++)
		{
			for (short o = 0; o < col; o++)
			{
				sum += array[i][j][o];
			}
		}
	}
	return sum / (list * row * col);
}


//print
template<typename T1>
void print_1(T1*& array, short col)
{
	for (short i = 0; i < col; i++)
	{
		cout << setw(4) << array[i] << "	";
	}
	cout << endl;
}

template<typename T1>
void print_2(T1**& array, short row, short col)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			cout << setw(4) << array[i][j] << "	";
		}
		cout << endl;
	}
}

template<typename T1>
void print_3(T1***& array, short list, short row, short col)
{
	short n = 1;
	for (short i = 0; i < list; i++)
	{
		cout << "Лист: " << n << endl;
		n++;
		for (short j = 0; j < row; j++)
		{
			for (short o = 0; o < col; o++)
			{
				cout << setw(4) << array[i][j][o] << "	";
			}
			cout << endl;
		}
		cout << endl;
	}
}


//delete
template<typename T1>
void del_1(T1*& array, short col)
{
	delete[] array;
}

template<typename T1>
void del_2(T1**& array, short row, short col)
{
	for (short i = 0; i < row; i++)
	{
		delete array[i];
	}
	delete[] array;
}

template<typename T1>
void del_3(T1***& array, short list, short row, short col)
{
	for (short i = 0; i < list; i++)
	{
		for (short j = 0; j < row; j++)
		{
			delete array[i][j];
		}
		delete array[i];
	}
	delete[] array;
}