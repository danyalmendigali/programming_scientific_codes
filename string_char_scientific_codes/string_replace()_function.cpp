#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// replace(): Заменяет часть строки другой строкой.

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    s.replace(2, 3, "Hello this is function"); //  заменяет диапазон символов, начиная с позиции 7 и длиной 5 символов, на строку "everyone".
    cout << "Полученна строка: " << s << endl;










   return 0;
}


