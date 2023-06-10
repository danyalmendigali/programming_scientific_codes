#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// clear(): Очищает содержимое строки.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cout <<  "Введите строку: ";
    cin >> s;
    cout << "Размер строки: " << s.length() << endl;
    cout << "Сейчас удаляем содержимое строки" << endl;
    s.clear();
    cout << "Размер строки после удаления содержимого: ";
    cout << s.length() << endl;





   return 0;
}



