#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для определения типа переменной на основе пользовательского ввода:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите значение: ";
    string input;
    cin >> input;

    // Использование auto для определения типа переменной value
    auto value = stoi(input);

    cout << "Тип переменной: " << typeid(value).name() << endl;

   return 0;
}
