#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// демонстрирует константные аргументы функций


void aFunc(int& a, const int& b); // прототип функции

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int alpha = 7;
    int beta = 11;
    aFunc(alpha, beta); // вызов функции


  return 0;
}

void aFunc(int& a, const int& b)
{
    a = 107; // корректно
    b = 111; // ошибка при попытке изменить константный аргумент
}



