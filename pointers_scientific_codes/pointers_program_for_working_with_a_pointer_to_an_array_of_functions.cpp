#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем на массив функций:

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int (*functions[3])(int, int); // Указатель на массив функций

    functions[0] = add; // Присваивание указателю адреса функции add
    functions[1] = subtract; // Присваивание указателю адреса функции subtract
    functions[2] = multiply; // Присваивание указателю адреса функции multiply


    int result = functions[0](5, 3); // Вызов функции через указатель
    cout << "Результат сложения: " << result << endl;


    result = functions[1](5, 3); // Вызов функции через указатель
    cout << "Результат вычитания: " << result << endl;


    result = functions[2](5, 3); // Вызов функции через указатель
    cout << "Результат умножения: " << result << endl;


   return 0;
}


