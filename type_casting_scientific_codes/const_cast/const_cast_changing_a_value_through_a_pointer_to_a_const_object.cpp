#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение значения через указатель на константный объект с помощью const_cast

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int number = 10;

    // Изменение значения через указатель на константный объект с помощью const_cast
    const int* constPtr = &number;
    *const_cast<int*>(constPtr) = 20;

    cout << "Измененное значение переменной: " << number << endl;


   return 0;
}



