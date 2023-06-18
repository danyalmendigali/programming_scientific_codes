#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем на массив объектов с использованием оператора new:

class MyClass {
public:
    int value;

    void printValue() {
        cout << "Значение: " << value << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int size = 3;

    MyClass* arr = new MyClass[size]; // Динамическое выделение памяти для массива объектов

    for (int i = 0; i < size; i++) {
        arr[i].value = i + 1; // Доступ к члену объекта через указатель на массив объектов
    }

    for (int i = 0; i < size; i++) {
        arr[i].printValue(); // Вызов метода объекта через указатель на массив объектов
    }

    delete[] arr; // Освобождение памяти, занятой массивом объектов



   return 0;
}





