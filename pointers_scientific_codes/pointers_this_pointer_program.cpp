#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем this:

class MyClass
{
public:
    int value;

    void printValue()
    {
        cout << "Значение: " << this -> value << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass obj;
    obj.value = 42;

    obj.printValue(); // Вызов метода объекта

    MyClass* ptr = &obj;
    ptr -> value = 10; // Изменение значения через указатель

    obj.printValue(); // Вывод измененного значения




   return 0;
}



