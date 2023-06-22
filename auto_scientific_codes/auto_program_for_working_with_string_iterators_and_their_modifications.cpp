#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с итераторами строки и их модификации:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, world!";

    // Использование auto для определения типа итераторов iter и endIter
    auto iter = str.begin();
    auto endIter = str.end();

    while (iter != endIter) {
        *iter = toupper(*iter);
        ++iter;
    }

    cout << "Измененная строка: " << str << endl;



   return 0;
}

