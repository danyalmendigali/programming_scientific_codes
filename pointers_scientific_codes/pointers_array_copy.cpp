#include <bits/stdc++.h>
#include <windows.h>
#include <functional>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Копирование массива с использованием указателей

void copyArray(const int* source, int* destination, int size) {
    for (int i = 0; i < size; ++i) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int source[] = {1, 2, 3, 4, 5};
    int size = sizeof(source) / sizeof(source[0]);
    int destination[size];

    copyArray(source, destination, size);

    cout << "Скопированный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << destination[i] << " ";
    }
    cout << endl; // Выводит "Скопированный массив: 1 2 3 4 5"




   return 0;
}







