#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение значения через указатель на константный указатель с помощью const_cast

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int number = 10;
    const int* constPtr = &number;

    // Изменение значения через указатель на константный указатель с помощью const_cast
    int* mutablePtr = const_cast<int*>(constPtr);
    *mutablePtr = 20;

    cout << "Измененное значение переменной: " << number << endl;


   return 0;
}

