#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// empty(): Проверяет, является ли строка пустой.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cout <<  "Введите строку: ";
    cin >> s;
    bool is_empty = s.empty();

    if(is_empty)
    {
        cout << "Строка пуста!" << endl;
    }
    else
    {
        cout << "Строка не пуста!" << endl;
    }






   return 0;
}


