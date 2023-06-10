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

    cout << "Введити символ какой хотели добавить в конец строки: ";
    char s1;
    cin >> s1;


    s.push_back(s1);

    cout << "Строка после добавления элемента '" << s1 << "': " << s << endl;








   return 0;
}




