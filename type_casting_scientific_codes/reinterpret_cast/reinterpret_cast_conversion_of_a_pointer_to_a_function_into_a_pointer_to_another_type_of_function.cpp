#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Преобразование указателя на функцию в указатель на другой тип функции

void func1() {
    cout << "Функция 1" << endl;
}

void func2() {
    cout << "Функция 2" << endl;
}

typedef void (*FuncPtr)();


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    FuncPtr funcPtr1 = reinterpret_cast<FuncPtr>(&func1);

    // Преобразование указателя на функцию в указатель на другой тип функции
    FuncPtr funcPtr2 = reinterpret_cast<FuncPtr>(&func2);

    funcPtr1();  // Вызов функции 1
    funcPtr2();  // Вызов функции 2



   return 0;
}




