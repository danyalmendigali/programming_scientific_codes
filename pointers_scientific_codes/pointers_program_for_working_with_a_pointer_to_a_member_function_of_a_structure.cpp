#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем на функцию-член структуры:

struct MyStruct
{
    void printMessage()
    {
        cout << "Привет, я структура MyStruct!" << endl;
    }
};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    MyStruct obj;

    void(MyStruct::*ptr)() = &MyStruct::printMessage; // Указатель на функцию-член структуры

    (obj.*ptr)(); // Вызов функции-члена структуры через указатель




   return 0;
}
