#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// erase(): Удаляет символы из строки в определенном месте или диапазоне.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cout << "Введите строку: ";
    cin >> s;

    s.erase(2, 6);

    cout << "Строка после удаления элементов(со второго по шестой): " << s << endl;








   return 0;
}






