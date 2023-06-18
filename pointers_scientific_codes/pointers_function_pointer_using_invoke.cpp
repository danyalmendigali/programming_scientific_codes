#include <bits/stdc++.h>
#include <windows.h>
#include <functional>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с указателем на функцию с использованием invoke:

int add(int a, int b) {
    return a + b;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    function<int(int, int)> ptr = add; // Указатель на функцию

    int result = invoke(ptr, 5, 3); // Вызов функции через указатель с использованием std::invoke

    cout << "Результат сложения: " << result << endl;


   return 0;
}



