#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для передачи указателя в функцию и изменения значения переменной через указатель:

void changeValue(int* ptr)
{
    *ptr = 10; // Изменение значения переменной через указатель
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 5;
    cout << "Исходное значение: " << x << endl;

    changeValue(&x); // Передача указателя на переменную в функцию

    cout << "Теперь значение: " << x << endl;



   return 0;
}




