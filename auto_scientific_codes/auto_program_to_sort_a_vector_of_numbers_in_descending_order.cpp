#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для сортировки вектора чисел в порядке убывания:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {5, 2, 8, 1, 9, 4, 3, 7, 6};

    // Использование auto для определения типа итераторов beginIter и endIter
    auto beginIter = numbers.begin();
    auto endIter = numbers.end();

    // Использование auto для определения типа компаратора
    auto comparator = [](int a, int b) {
        return a > b;
    };

    sort(beginIter, endIter, comparator);

    for (auto num : numbers) {
        cout << num << " ";
    }

    cout << endl;


   return 0;
}



