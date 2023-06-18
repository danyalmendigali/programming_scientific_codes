#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на функции с использованием function:

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    function <int(int, int)> ptr; // Использование function для объявления указателя

    ptr = add; // Присваивание указателю адреса функции add
    int result = ptr(5, 3); // Вызов функции через указатель
    cout << "Результат сложения: " << result << endl;

    ptr = subtract; // Присваивание указателю адреса функции subtract
    result = ptr(5, 3); // Вызов функции через указатель
    cout << "Результат вычитания: " << result << endl;



   return 0;
}






