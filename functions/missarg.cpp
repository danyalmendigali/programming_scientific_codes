#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

// применение аргументов по умолчанию

void repchar(char = '*', int = 45); // прототип с аргументами по умолчанию



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    repchar(); // печатает символ '*' 45 раз
    repchar('='); // печатает символ '=' 45 раз
    repchar('+', 30); // печатает символ '+' 30 раз



  return 0;
}

void repchar(char ch, int n) // при необходимости будут использоваться значения по умолчанию
{
    for(int i = 0; i < n; i++) {  // цикл n раз
        cout << ch; // вывод ch
    }
    cout << endl;
}
