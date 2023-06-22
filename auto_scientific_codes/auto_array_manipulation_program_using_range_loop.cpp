#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с массивом с использованием диапазонного цикла:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[] = {1, 2, 3, 4, 5};

    // Использование auto для определения типа элементов массива
    for (auto element : arr) {
        cout << element << " ";
    }

    cout << endl;


   return 0;
}

