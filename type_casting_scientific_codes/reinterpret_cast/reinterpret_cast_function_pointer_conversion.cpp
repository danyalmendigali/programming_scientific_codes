#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Преобразование указателя на функцию

void func(int value) {
    cout << "Вызвана функция func() с аргументом " << value << endl;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    void (*funcPtr)(int) = reinterpret_cast<void (*)(int)>(&func);
    funcPtr(42);


   return 0;
}
