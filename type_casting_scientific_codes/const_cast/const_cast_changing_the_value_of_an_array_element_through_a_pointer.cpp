#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение значения элемента массива через указатель с помощью const_cast


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int numbers[] = {1, 2, 3, 4, 5};

    // Изменение значения элемента массива через указатель с помощью const_cast
    const int* constPtr = numbers;
    int* mutablePtr = const_cast<int*>(constPtr);
    mutablePtr[2] = 10;

    cout << "Измененное значение элемента массива: " << numbers[2] << endl;


   return 0;
}

