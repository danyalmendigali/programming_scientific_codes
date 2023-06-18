#include <bits/stdc++.h>
#include <windows.h>
#include <functional>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем на шаблонный метод класса:

class MyClass {
public:
    template <typename T>
    T add(T a, T b) {
        return a + b;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj;

    int (MyClass::*intPtr)(int, int) = &MyClass::add<int>; // Указатель на шаблонный метод класса для типа int
    float (MyClass::*floatPtr)(float, float) = &MyClass::add<float>; // Указатель на шаблонный метод класса для типа float


    int intResult = (obj.*intPtr)(5, 3); // Вызов шаблонного метода класса для типа int через указатель
    cout << "Результат сложения int: " << intResult << endl;


    float floatResult = (obj.*floatPtr)(5.5f, 3.3f); // Вызов шаблонного метода класса для типа float через указатель
    cout << "Результат сложения float: " << floatResult << endl;


   return 0;
}




