#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с контейнером map:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 35;

    // Использование auto для определения типа переменной iter
    for (auto iter = ages.begin(); iter != ages.end(); ++iter) {
        cout << iter->first << ": " << iter->second << endl;
    }



   return 0;
}



