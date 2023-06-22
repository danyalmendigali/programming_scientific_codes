#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для подсчета среднего значения элементов в массиве:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[] = {3, 7, 2, 5, 1};

    // Использование auto для определения типа переменной sum
    auto sum = 0;
    for (auto num : arr) {
        sum += num;
    }

    // Использование auto для определения типа переменной average
    auto average = static_cast<double>(sum) / sizeof(arr) / sizeof(arr[0]);

    cout << "Среднее значение: " << average << endl;

   return 0;
}

