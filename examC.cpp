#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

//подключения
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

//----------------------------------------------
//----------------------------------------------
//----------------------------------------------

void mainMenu(short &section);
void drinks(string drinks_names[], short drinks_cost[],short &point, short &howMany, short**order);
void bill(string drinks_names[], short drink_cost[], short** order);



int main()
{
	setlocale(LC_ALL, "ru");
	//переменные
	short* section = new short();
	short* point = new short();
	short* howMany = new short();


	//массивы
	string drinks_names[5] = { "1| Мохито" , "2| Апероль Шпиц" , "3| Латте" , "4| Домашний лимонад" , "5| Кровавая Мэри" };
	short drinks_cost[5] = { 61, 400, 349, 320, 300 };

	short** order = new short*[5];
	for (short i = 0; i < 5; i++)
	{
		order[i] = new short[5];
	}
	
	for (short i = 0; i < 5; i++)
	{
		for (short j = 0; j < 5; j++)
		{
			order[i][j] = 0;
		}
	}
	
	//начало
	while (true)
	{
		mainMenu(*section);

		switch (*section)
		{
		case 0:
		{
			bill(drinks_names, drinks_cost, order);
		}break;
		case 1:
		{
			drinks(drinks_names, drinks_cost, *point, *howMany, order);
		}break;
		}
		
	}

}



void mainMenu(short &section)
{
	bool isInMain = true;
	while(isInMain)
	{
		short y = 6;
		string positions[5] = { "1| Напитки", "2| Дисерты", "3| Салаты", "4| Завтраки", "5| Обеды" };

		SetColor(LightCyan, Black);
		system("cls"); GotoXY(43, 3);
		cout << "Выберите раздел меню из предложенных" << endl; GotoXY(30, 6);

		for (short i = 0; i < 5; i++)
		{
			GotoXY(30, y); cout << positions[i];
			y += 2;
		}

		SetColor(LightMagenta, Black); GotoXY(56, 12); cout << "*во всех меню вводить нужно только цифры*"; SetColor(LightCyan, Black);
		SetColor(LightBlue, Black);
		//Таблица разделов(горизонтальные линии)
		for (short y = 5; y < 17; y += 2)
		{
			for (short x = 30; x < 51; x++)
			{
				GotoXY(x, y);
				cout << "-";
				continue;
			}
		}
		//Таблица разделов(вертикальные линии)
		for (short x = 29; x <= 51; x += (51 - 29))
		{
			for (short y = 5; y <= 15; y++)
			{
				GotoXY(x, y);
				cout << "|";
			}
		}

		//Таблица выбора(вертикальные линии)
		for (short x = 59; x <= 92; x += (92 - 59))
		{
			for (short y = 5; y < 10; y++)
			{
				GotoXY(x, y);
				cout << "|";
			}
		}

		//Таблица выбора(горизонтальные линии)
		for (short y = 5; y <= 9; y += 2)
		{
			for (short x = 60; x < 92; x++)
			{
				GotoXY(x, y);
				cout << "-";
				continue;
			}
		}
		SetColor(LightCyan, Black);

		cout << endl; GotoXY(60, 6); cout << "Хотите увидеть заказ - введите 0" << endl;
		GotoXY(60, 8); cout << "Раздел:";
		cin >> section;

		if (section < 0 or section > 5) { GotoXY(53, 10); cout << "Такого раздела не существует, повторите попытку" << endl; Sleep(2000); system("cls"); continue; }
		else{break;}
	}
}


void drinks(string drinks_names[], short drinks_cost[], short& point, short& howMany, short** order)
{
	short y, cost = 0;
	bool isIn = true;

	while(isIn)
	{
		do
		{
			system("cls");
			SetColor(LightBlue, Black);
			//Горизонтальные линии
			for (short y = 4; y < 18; y += 2)
			{
				for (short x = 7; x < 112; x++)
				{
					GotoXY(x, y);
					cout << "-";
					continue;
				}
			}
			//Вертикальные линии
			short x;
			for (short i = 0; i <= 5; i++)
			{
				if (i == 0) { x = 6; } // первая
				else if (i == 1) { x = 31; }
				else if (i == 2) { x = 91; }
				else if (i == 3) { x = 102; }
				else if (i == 4) { x = 112; }
				for (short y = 4; y <= 16; y++)
				{
					GotoXY(x, y);
					cout << "|";
				}
			}

			//Таблица выбора(горизонтальные линии)
			for (short y = 19; y <= 23; y += 2)
			{
				for (short x = 6; x <= 30; x++)
				{
					GotoXY(x, y);
					cout << "-";
					continue;
				}
			}

			//Таблица выбора(вертикальные линии)
			for (short x = 6; x <= 31; x += (31 - 6))
			{
				for (short y = 19; y < 24; y++)
				{
					GotoXY(x, y);
					cout << "|";
				}
			}

			SetColor(LightCyan, Black);
			//Текст страницы
			GotoXY(55, 1); cout << "Меню напитков" << endl; GotoXY(41, 2);
			cout << "Выберите позицию болюда из предложенных" << endl;
			GotoXY(11, 5); cout << "Название напитка" << endl;
			GotoXY(92, 5); cout << "Количество" << endl;
			GotoXY(103, 5); cout << "Стоимость" << endl;
			SetColor(LightMagenta, Black); GotoXY(70, 21); cout << "*во всех меню вводить нужно только цифры*"; SetColor(LightCyan, Black);

			//названия
			y = 7;
			for (short i = 0; i < 5; i++)
			{
				GotoXY(7, y); cout << drinks_names[i];
				y += 2;
			}

			//цены
			y = 7;
			for (short i = 0; i < 5; i++)
			{
				GotoXY(106, y); cout << drinks_cost[i];
				y += 2;
			}

			//Управление
			GotoXY(7, 20); cout << "0 - вернуться назад:"; GotoXY(7, 22); cout << "Позиция:";
			cin >> point;
			if (point == 0) { break; }
			if (point < 0 or point > 5) { GotoXY(7, 22); cout << "Такой позиции нет"; GotoXY(33, 22); SetColor(Red, Black); cout << "<----------"; SetColor(LightCyan, Black); Sleep(2000); system("cls"); } //проверка числа	
			else { break; }
		} while (true);

		//сколько?
		if (point == 0) { isIn = false; }
		else
		{

			//позиционирование ввода кличества
			if (point == 1) { y = 7; }
			else if (point == 2) { y = 9; }
			else if (point == 3) { y = 11; }
			else if (point == 4) { y = 13; }
			else if (point == 5) { y = 15; }
			GotoXY(92, y);// у инициализируется в проверках выше
			cin >> howMany;
			if (howMany <= 0) { continue; }
		}

		cost = howMany * (drinks_cost[point - 1]);
		order[0][point-1] += cost;
		cost = 0;
	}	
}

void bill(string drinks_names[], short drink_cost[], short** order)
{
	system("cls");
	short sum = 0;
	cout << "Заказанные блюда:" << endl;
	for (short i = 0; i < 5; i++)
	{
		for (short j = 0; j < 5; j++)
		{
			if (order[i][j] > 0)
			{
				cout << drinks_names[j] << endl;
			}
		}
	}
	cout << "Цена заказанных блюд:" << endl;
	for (short i = 0; i < 5; i++)
	{
		for (short j = 0; j < 5; j++)
		{
			if (order[i][j] > 0)
			{
				cout << order[i][j] << "	" << endl;
			}
		}
	}
	cout << "Итоговая цена:";
	for (short i = 0; i < 5; i++)
	{
		for (short j = 0; j < 5; j++)
		{
			if (order[i][j] > 0)
			{
				sum += order[i][j];
			}
		}
	}
	cout << sum << endl;
	system("pause");
}
