#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// substr(): Возвращает подстроку из строки, начиная с указанной позиции и длиной.

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    string sub = s.substr(2, 5); // cо второго элемента диапазон 5 символов
    cout << "Полученна строка: " << sub << endl;










   return 0;
}

