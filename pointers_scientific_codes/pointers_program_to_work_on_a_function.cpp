#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателями на функции:

void hello() {
    cout << "Привет, мир!" << endl;
}

void goodbye() {
    cout << "До свидания!" << endl;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    void(*ptr)(); // Указатель на функцию без аргументов и возвращаемого значения`

    ptr = hello; // Присваивание указателю адреса функции hello
    ptr(); // Вызов функции через указатель

    ptr = goodbye; // Присваивание указателю адреса функции goodbye
    ptr(); // Вызов функции через указатель

   return 0;
}







