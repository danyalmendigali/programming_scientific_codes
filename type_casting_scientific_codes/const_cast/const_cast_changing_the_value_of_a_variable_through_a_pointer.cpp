#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение значения переменной через указатель с помощью const_cast


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int number = 10;

    // Изменение значения переменной через указатель с помощью const_cast
    const int* constPtr = &number;
    int* mutablePtr = const_cast<int*>(constPtr);
    *mutablePtr = 20;

    cout << "Измененное значение переменной: " << number << endl;


   return 0;
}


