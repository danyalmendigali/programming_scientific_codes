#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем на функцию-член класса с использованием bind:

class MyClass {
public:
    void printMessage(const string& message) {
        cout << "Сообщение: " << message << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj;

    auto ptr = bind(&MyClass::printMessage, &obj, "Hello"); // Указатель на функцию-член класса с привязкой объекта и аргумента

    ptr(); // Вызов функции-члена класса через указатель


   return 0;
}

