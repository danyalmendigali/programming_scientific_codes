#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// insert(): Вставляет символы или другую строку в определенное место строки.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cout << "Введите строку: ";
    cin >> s;

    cout << "Введите строку, которую хотите добавить на пятую позицию: ";
    string s1;
    cin >> s1;

    s.insert(5, s1);

    cout << "Строка после добавления строки '" << s1 << "': " << s << endl;








   return 0;
}





