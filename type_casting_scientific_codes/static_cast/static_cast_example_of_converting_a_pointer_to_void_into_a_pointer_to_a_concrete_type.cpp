#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <chrono>
#include <ctime>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Пример преобразования указателя на void в указатель на конкретный тип:
int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    void* voidPtr = new int(10);
    int* intPtr = static_cast<int*>(voidPtr);

    cout << "Значение int: " << *intPtr << endl;

    delete intPtr;


   return 0;
}
