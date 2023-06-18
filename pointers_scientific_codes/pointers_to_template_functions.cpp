#include <bits/stdc++.h>
#include <windows.h>
#include <functional>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на шаблонные функции:

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T subtract(T a, T b) {
    return a - b;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int (*intPtr)(int, int) = add; // Указатель на шаблонную функцию для типа int
    float (*floatPtr)(float, float) = subtract; // Указатель на шаблонную функцию для типа float

    int intResult = intPtr(5, 3); // Вызов шаблонной функции для типа int через указатель
    cout << "Результат сложения int: " << intResult << endl;

    float floatResult = floatPtr(5.5f, 3.3f); // Вызов шаблонной функции для типа float через указатель
    cout << "Результат вычитания float: " << floatResult << endl;


   return 0;
}




