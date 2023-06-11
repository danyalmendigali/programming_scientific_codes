#include <bits/stdc++.h>
#include <windows.h>
#include <regex>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск подстроки в строке

void RegexSearch(const string& s)
{
    regex regex("quick.*fox");
    smatch match;
    if(regex_search(s, match, regex))
    {
       cout << "Найдена подстрока: " << match.str() << endl;
    }

    else
    {
        cout << "Подстрока не найдена" << endl;
    }
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    RegexSearch(s);










   return 0;
}

