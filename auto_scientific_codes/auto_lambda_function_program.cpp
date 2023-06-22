#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с функцией-лямбдой:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Использование auto для определения типа функции-лямбды
    auto addNumbers = [](int a, int b) {
        return a + b;
    };

    int result = addNumbers(5, 3);
    cout << "Результат сложения: " << result << endl;


   return 0;
}




