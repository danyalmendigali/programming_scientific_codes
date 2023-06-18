#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем на функцию-член класса с использованием mem_fn:

class MyClass {
public:
    void printMessage() {
        cout << "Привет, я класс MyClass!" << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj;

    auto ptr = mem_fn(&MyClass::printMessage); // Указатель на функцию-член класса

    ptr(obj); // Вызов функции-члена класса через указатель


   return 0;
}
