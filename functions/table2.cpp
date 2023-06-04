#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Функция без прототипа(предварительного использования)

void starline() // определение функции starline()
{
    for(int i = 0; i < 45; i++) {
        cout << '*';
    }
    cout << endl;
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    starline(); // вызов функции
    cout << "Тип данных Диапазон" << endl;
    starline(); // вызов функции
    cout << "char -128...127" << endl
    << "short -32 768...32 767" << endl
    << "int Системно-зависимый" << endl
    << "long -2 147 483 648...2 147 483 647" << endl;
    starline(); // вызов функции

   return 0;
}
