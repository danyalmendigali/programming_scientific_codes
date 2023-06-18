#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на указатели:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 5;
    int* ptr1 = &x; // Указатель на переменную
    int** ptr2 = &ptr1; // Указатель на указатель

    cout << "Значение переменной: " << **ptr2 << endl;


   return 0;
}



