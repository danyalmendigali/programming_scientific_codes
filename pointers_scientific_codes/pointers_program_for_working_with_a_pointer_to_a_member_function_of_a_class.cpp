#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем на функцию-член класса:

class MyClass {
public:
    void printMessage() {
        cout << "Привет, я объект класса MyClass!" << endl;
    }
};

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj;

    void (MyClass::*ptr)() = &MyClass::printMessage; // Указатель на функцию-член класса

    (obj.*ptr)(); // Вызов функции-члена класса через указатель


   return 0;
}








