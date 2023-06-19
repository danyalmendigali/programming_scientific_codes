#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Создание и удаление одиночного объекта:

class MyClass {
public:
    MyClass() {
        cout << "Конструктор" << endl;
    }

    ~MyClass() {
        cout << "Деструктор" << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size = 5;
    MyClass* arr = new MyClass[size]; // Создание массива объектов

    // Использование массива объектов

    delete[] arr; // Удаление массива объектов




   return 0;
}
