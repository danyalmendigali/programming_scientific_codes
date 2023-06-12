#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Разбиение строки на подстроки с использованием разделителя:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "apple,orange,banana";
    regex regex(",");

    sregex_token_iterator iterator(text.begin(), text.end(), regex, -1);
    sregex_token_iterator end;

    while (iterator != end) {
        cout << "Подстрока: " << *iterator << endl;
        ++iterator;
    }







   return 0;
}
