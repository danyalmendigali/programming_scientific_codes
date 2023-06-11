#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// toupper(): Преобразует все символы строки в верхний регистр.

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cout << "Введите пожалуйста строку: ";
    getline(cin, s);

    FOR(i, 0, s.size())
    {
        s[i] = toupper(s[i]);
    }

    cout << s << endl;











   return 0;
}










