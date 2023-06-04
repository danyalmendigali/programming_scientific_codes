#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// передача переменных в функцию в качестве аргументов

void repchar(char, int ); // объявление функции


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char chin;
    int nin;
    cout << "Введите символ: ";
    cin >> chin;
    cout << "Введите число повторений символа: ";
    cin >> nin;
    repchar(chin, nin);




   return 0;
}

void repchar(char ch, int n) // заголовок функции
{
    for(int i = 0; i < n; i++) { // тело функции
        cout << ch;
    }
    cout << endl;
}





