#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для нахождения наименьшего и наибольшего элементов в векторе:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {8, 3, 2, 5, 1, 9, 4, 7, 6};

    // Использование auto для определения типа переменных minIter и maxIter
    auto minIter = min_element(numbers.begin(), numbers.end());
    auto maxIter = max_element(numbers.begin(), numbers.end());

    cout << "Наименьший элемент: " << *minIter << endl;
    cout << "Наибольший элемент: " << *maxIter << endl;



   return 0;
}


