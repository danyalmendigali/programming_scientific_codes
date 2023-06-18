#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на константу:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 5;
    int y = 10;

    const int* ptr = &x; // Указатель на константу

    cout << "Значение указателя: " << *ptr << endl;

    // *ptr = 7; // Ошибка компиляции, попытка изменить значение через указатель на константу

    ptr = &y; // Можно изменить указатель на другую константу

    cout << "Значение указателя: " << *ptr << endl;


   return 0;
}


