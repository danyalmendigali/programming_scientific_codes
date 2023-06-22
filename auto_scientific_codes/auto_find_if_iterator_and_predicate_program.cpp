#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с итератором find_if и предикатом:


bool isEven(int number) {
    return number % 2 == 0;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 3, 5, 2, 4, 6};

    // Использование auto для определения типа итератора iter
    auto iter = find_if(numbers.begin(), numbers.end(), isEven);

    if (iter != numbers.end()) {
        cout << "Первое четное число: " << *iter << endl;
    } else {
        cout << "Четное число не найдено." << endl;
    }


   return 0;
}


