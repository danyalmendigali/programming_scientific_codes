#include <bits/stdc++.h>
#include <windows.h>
#include <regex>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Замена подстроки в строке

string RegexReplace(const string& s)
{
    regex regex("brown.*jumps");
    string result = regex_replace(s, regex, "red cat");

    return result;
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    cout << RegexReplace(s);










   return 0;
}


