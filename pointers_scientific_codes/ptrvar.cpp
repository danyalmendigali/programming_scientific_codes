#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Указатели (адреса переменных)
// Звездочка означает указатель на
/*
    char* cptr; // указатель на символьную переменную
    int* iptr; // указатель на целую переменную
    float* fptr; // указатель на вещественную переменную
    Distance* distptr; // указатель на переменную класса Distance
*/

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // Две переменные
    int var1 = 11;
    int var2 = 22;

    // Покажем адреса переменных
    cout << &var << "\n" << &var2 << "\n" << "\n";

    // Это переменная-указатель на целое
    int *ptr;

    // Присвоим ей значение адреса var1 и покажем на экране
    ptr = &var1;
    cout << ptr << endl;

    // Теперь значение адреса var2 и покажем на экране
    ptr = &var2;
    cout << ptr << "\n";




   return 0;
}
