#include <bits/stdc++.h>
#include <windows.h>
#include <regex>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Извлечение подстрок из строки с использованием групп

void RegexSearch2()
{
    string str = "John Doe, 30 years old";
    regex regex("([^,]+), ([0-9]+) years old");

    smatch match;
    if (regex_search(str, match, regex)) {
        string name = match[1].str();
        string age = match[2].str();

        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
    }
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    RegexSearch2();










   return 0;
}



