#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем на функцию-член шаблонного класса:

template <typename T>
class MyClass {
public:
    T value;

    void printValue() {
        cout << "Значение: " << value << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass<int> obj;
    obj.value = 42;

    void (MyClass<int>::*ptr)() = &MyClass<int>::printValue; // Указатель на функцию-член шаблонного класса

    (obj.*ptr)(); // Вызов функции-члена класса через указатель




   return 0;
}



