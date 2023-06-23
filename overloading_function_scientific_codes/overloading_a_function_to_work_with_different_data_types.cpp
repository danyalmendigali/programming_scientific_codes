#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример перегрузки функции для работы с разными типами данных:

void printValue(int num) {
    cout << "Целое число: " << num << endl;
}

void printValue(double num) {
    cout << "Дробное число: " << num << endl;
}

void printValue(const string& str) {
    cout << "Строка: " << str << endl;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printValue(10);
    printValue(3.14);
    printValue("Hello");



   return 0;
}

