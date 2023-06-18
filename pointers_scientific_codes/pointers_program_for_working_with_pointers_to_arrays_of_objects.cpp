#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на массивы объектов:

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


    MyClass objects[size]; // Массив объектов


    MyClass* ptr = objects; // Указатель на начало массива объектов


    for (int i = 0; i < size; i++) {
        ptr->value = i + 1; // Доступ к члену объекта через указатель
        ptr++;
    }

    ptr = objects; // Сброс указателя на начало массива


    for (int i = 0; i < size; i++) {
        ptr->printValue(); // Вызов метода объекта через указатель
        ptr++;
    }




   return 0;
}


