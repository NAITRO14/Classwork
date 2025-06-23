#include<iostream>
#include<windows.h>
#include<iostream>
#include<MMSystem.h>
#include<stdlib.h>
#include <conio.h>
#pragma comment (lib, "winmm")

using namespace std;

enum class Keys
{
    NOSET,

    LEFT = 75,
    RIGHT = 77,
    TOP = 72,
    DOWN = 80,
    ESC = 27,
    SPACE = 32,
    ENTER = 13,

};


int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251); srand(time(NULL));
	/*PlaySound(TEXT("applause.wav"), NULL, SND_ASYNC | SND_LOOP);*/

    while (true)
    {
        if (_kbhit()) // ��������� ������� �� �����
        {
            switch (static_cast<Keys>(_getch())) // ��� ������� �� ����� ��� Enter ����� �����
            {
            case Keys::TOP: //�����
                cout << "Up" << endl;
                break;
            case Keys::DOWN: //����
                cout << "Down" << endl;
                break;
            case Keys::LEFT: //����� 
                cout << "left" << endl;
                break;
            case Keys::RIGHT: //������
                cout << "Right" << endl;
                break;
            case Keys::ESC: //������
                exit(0);
                break;
            }
        }
    }





	system("pause");
}