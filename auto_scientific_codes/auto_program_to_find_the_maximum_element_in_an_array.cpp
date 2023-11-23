#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для нахождения максимального элемента в массиве:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[] = {5, 2, 9, 1, 7};

    // Использование auto для определения типа переменной max
    auto max = arr[0];
    for (auto num : arr) {
        if (num > max) {
            max = num;
        }
    }

    cout << "Максимальный элемент: " << max << endl;



   return 0;
}


