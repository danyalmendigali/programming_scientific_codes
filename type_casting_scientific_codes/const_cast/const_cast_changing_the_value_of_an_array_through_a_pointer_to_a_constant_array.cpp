#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение значения массива через указатель на константный массив с помощью const_cast

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int numbers[] = {1, 2, 3, 4, 5};

    // Изменение значения массива через указатель на константный массив с помощью const_cast
    const int* constArrayPtr = numbers;
    int* mutableArrayPtr = const_cast<int*>(constArrayPtr);
    mutableArrayPtr[2] = 10;

    cout << "Измененное значение элемента массива: " << numbers[2] << endl;


   return 0;
}

