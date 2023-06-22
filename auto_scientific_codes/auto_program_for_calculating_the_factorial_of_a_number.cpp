#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для вычисления факториала числа:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n = 5;

    // Использование auto для определения типа переменной factorial
    auto factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Факториал числа " << n << " равен: " << factorial << endl;



   return 0;
}



