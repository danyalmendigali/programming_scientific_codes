#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// демонстрирует передачу аргументов в функцию)

void repchar(char, int ); // объявление с указанием типов аргументов


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    repchar('-', 43);
    cout << "Тип данных Диапазон" << endl;
    repchar('-', 43); // вызов функции
    cout << "char -128...127" << endl
    << "short -32 768...32 767" << endl
    << "int Системно-зависимый" << endl
    << "long -2 147 483 648...2 147 483 647" << endl;
    repchar('-', 43); // вызов функции

   return 0;
}

void repchar(char ch, int n) // заголовок функции
{
    for(int i = 0; i < n; i++) { // тело функции
        cout << ch;
    }
    cout << endl;
}




