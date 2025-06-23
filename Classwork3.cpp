#include <iostream>
#include<Windows.h>


using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); //cp866
    cout << "Hello World!\n";
    cout << "Привет, МИР" << endl;
    
}

/*
Компилируемы язык програмировая
cout<< - вывод данных
\n - переход на слудующую строку 
setlocale(LC_ALL, "ru"); - подключение языка
*/
