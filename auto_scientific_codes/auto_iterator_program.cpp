#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с итераторами:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Использование auto для определения типа итератора
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;


   return 0;
}


