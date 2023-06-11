#include <bits/stdc++.h>
#include <windows.h>
#include <regex>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка соответствия строки шаблону

bool RegexMatch(string s)
{
    regex regex("Hello.*");

    if(regex_match(s, regex))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    getline(cin, s);
    if(RegexMatch(s))
    {
        cout << "Строка соответствует шаблону" << endl;
    }
    else
    {
        cout << "Строка не соответствует шаблону" << endl;
    }










   return 0;
}
