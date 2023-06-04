#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Демонстрирует глобальные переменные
// Программа ожидает ввода символа с клавиатуры и выводит его на консоль, пока не будет введен символ возврата каретки

char ch = 'a'; // глобальная переменная ch
void getachar(); // прототипы функций
void putachar();

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    while(ch != '\r')
    {
        getachar();
        putachar();
    }
    cout << endl;



  return 0;
}

// --------------------------------- //

void getachar()
{
    ch = getch();
}

// --------------------------------- //

void putachar()
{
    cout << ch;
}



