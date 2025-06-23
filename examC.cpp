#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

//�����������
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
	//����������
	short* section = new short();
	short* point = new short();
	short* howMany = new short();


	//�������
	string drinks_names[5] = { "1| ������" , "2| ������� ����" , "3| �����" , "4| �������� �������" , "5| �������� ����" };
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
	
	//������
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
		string positions[5] = { "1| �������", "2| �������", "3| ������", "4| ��������", "5| �����" };

		SetColor(LightCyan, Black);
		system("cls"); GotoXY(43, 3);
		cout << "�������� ������ ���� �� ������������" << endl; GotoXY(30, 6);

		for (short i = 0; i < 5; i++)
		{
			GotoXY(30, y); cout << positions[i];
			y += 2;
		}

		SetColor(LightMagenta, Black); GotoXY(56, 12); cout << "*�� ���� ���� ������� ����� ������ �����*"; SetColor(LightCyan, Black);
		SetColor(LightBlue, Black);
		//������� ��������(�������������� �����)
		for (short y = 5; y < 17; y += 2)
		{
			for (short x = 30; x < 51; x++)
			{
				GotoXY(x, y);
				cout << "-";
				continue;
			}
		}
		//������� ��������(������������ �����)
		for (short x = 29; x <= 51; x += (51 - 29))
		{
			for (short y = 5; y <= 15; y++)
			{
				GotoXY(x, y);
				cout << "|";
			}
		}

		//������� ������(������������ �����)
		for (short x = 59; x <= 92; x += (92 - 59))
		{
			for (short y = 5; y < 10; y++)
			{
				GotoXY(x, y);
				cout << "|";
			}
		}

		//������� ������(�������������� �����)
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

		cout << endl; GotoXY(60, 6); cout << "������ ������� ����� - ������� 0" << endl;
		GotoXY(60, 8); cout << "������:";
		cin >> section;

		if (section < 0 or section > 5) { GotoXY(53, 10); cout << "������ ������� �� ����������, ��������� �������" << endl; Sleep(2000); system("cls"); continue; }
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
			//�������������� �����
			for (short y = 4; y < 18; y += 2)
			{
				for (short x = 7; x < 112; x++)
				{
					GotoXY(x, y);
					cout << "-";
					continue;
				}
			}
			//������������ �����
			short x;
			for (short i = 0; i <= 5; i++)
			{
				if (i == 0) { x = 6; } // ������
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

			//������� ������(�������������� �����)
			for (short y = 19; y <= 23; y += 2)
			{
				for (short x = 6; x <= 30; x++)
				{
					GotoXY(x, y);
					cout << "-";
					continue;
				}
			}

			//������� ������(������������ �����)
			for (short x = 6; x <= 31; x += (31 - 6))
			{
				for (short y = 19; y < 24; y++)
				{
					GotoXY(x, y);
					cout << "|";
				}
			}

			SetColor(LightCyan, Black);
			//����� ��������
			GotoXY(55, 1); cout << "���� ��������" << endl; GotoXY(41, 2);
			cout << "�������� ������� ������ �� ������������" << endl;
			GotoXY(11, 5); cout << "�������� �������" << endl;
			GotoXY(92, 5); cout << "����������" << endl;
			GotoXY(103, 5); cout << "���������" << endl;
			SetColor(LightMagenta, Black); GotoXY(70, 21); cout << "*�� ���� ���� ������� ����� ������ �����*"; SetColor(LightCyan, Black);

			//��������
			y = 7;
			for (short i = 0; i < 5; i++)
			{
				GotoXY(7, y); cout << drinks_names[i];
				y += 2;
			}

			//����
			y = 7;
			for (short i = 0; i < 5; i++)
			{
				GotoXY(106, y); cout << drinks_cost[i];
				y += 2;
			}

			//����������
			GotoXY(7, 20); cout << "0 - ��������� �����:"; GotoXY(7, 22); cout << "�������:";
			cin >> point;
			if (point == 0) { break; }
			if (point < 0 or point > 5) { GotoXY(7, 22); cout << "����� ������� ���"; GotoXY(33, 22); SetColor(Red, Black); cout << "<----------"; SetColor(LightCyan, Black); Sleep(2000); system("cls"); } //�������� �����	
			else { break; }
		} while (true);

		//�������?
		if (point == 0) { isIn = false; }
		else
		{

			//���������������� ����� ���������
			if (point == 1) { y = 7; }
			else if (point == 2) { y = 9; }
			else if (point == 3) { y = 11; }
			else if (point == 4) { y = 13; }
			else if (point == 5) { y = 15; }
			GotoXY(92, y);// � ���������������� � ��������� ����
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
	cout << "���������� �����:" << endl;
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
	cout << "���� ���������� ����:" << endl;
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
	cout << "�������� ����:";
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
