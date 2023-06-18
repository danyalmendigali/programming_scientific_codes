#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для создания динамического объекта с использованием указателя:

class MyClass
{
public:
    void printMassage()
    {
        cout << "Привет, я объект класса MyClass!" << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyClass* ptr = new MyClass(); // Динамическое создание объекта класса

    ptr -> printMassage(); // Вызов метода объекта через указатель

    delete ptr; // Освобождение памяти, занятой объектом



   return 0;
}





