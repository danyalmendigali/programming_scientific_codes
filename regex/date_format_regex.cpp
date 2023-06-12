#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка формата даты в виде "гггг-мм-дд":



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string date = "2022-12-31";
    regex regex(R"(\d{4}-\d{2}-\d{2})");

    if (regex_match(date, regex))
    {
        cout << "Формат даты верный" << endl;
    }
    else
    {
        cout << "Неверный формат даты" << endl;
    }



   return 0;
}

