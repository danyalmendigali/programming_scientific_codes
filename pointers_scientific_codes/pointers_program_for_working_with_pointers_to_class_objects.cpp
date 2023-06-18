#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на объекты класса:

class MyClass
{
public:
    void printMessage() {
        cout << "Привет, я объект класса MyClass!" << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    MyClass obj; // Создание объекта класса
    MyClass* ptr = &obj; // Указатель на объект класса

    ptr -> printMessage(); // Вызов метода объекта через указатель




   return 0;
}



