#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для подсчета количества символов в строке:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, world!";

    // Использование auto для определения типа переменной count
    auto count = 0;
    for (auto ch : str) {
        count++;
    }

    cout << "Количество символов: " << count << endl;



   return 0;
}


