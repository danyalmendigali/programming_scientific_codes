#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с итератором строки:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, world!";

    // Использование auto для определения типа итератора
    for (auto it = str.begin(); it != str.end(); ++it) {
        cout << *it;
    }

    cout << endl;


   return 0;
}

