#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на члены класса:

class MyClass
{
public:
    int value;

    void printValue()
    {
        cout << "Значение: " << value << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj;
    obj.value = 42;

    int MyClass::*ptr = &MyClass::value; // Указатель на член класса

    obj.*ptr = 99;// Доступ и изменение члена класса через указатель

    obj.printValue(); // Вызов метода класса для проверки изменения значения


   return 0;
}


