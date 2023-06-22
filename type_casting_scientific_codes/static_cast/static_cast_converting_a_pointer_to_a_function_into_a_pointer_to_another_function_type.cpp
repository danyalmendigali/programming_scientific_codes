#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример преобразования указателя на функцию в указатель на другой тип функции:

void func1() {
    cout << "Функция 1" << endl;
}

void func2() {
    cout << "Функция 2" << endl;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    void (*funcPtr1)() = func1;
    void (*funcPtr2)() = static_cast<void (*)()>(funcPtr1);

    funcPtr2();


   return 0;
}
