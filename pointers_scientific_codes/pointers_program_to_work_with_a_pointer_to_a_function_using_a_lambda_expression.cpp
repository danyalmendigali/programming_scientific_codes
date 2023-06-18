#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с двумерным динамическим массивом с использованием указателей:



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 5;

    auto ptr = [&x]() { // Лямбда-выражение, захватывающее x по ссылке
        cout << "Значение переменной: " << x << endl;
    };

    ptr(); // Вызов функции через указатель на лямбда-выражение

    x = 10; // Изменение значения x

    ptr(); // Вызов функции с обновленным значением x



   return 0;
}

