#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b)  for(int i = a; i < b; i++)

// Поиск и извлечение всех дат из текста

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "The event will take place on 2022-12-31 and 2023-01-01.";
    regex regex(R"(\d{4}-\d{2}-\d{2})");

    sregex_iterator iterator(text.begin(), text.end(), regex);
    sregex_iterator end;


    while (iterator != end) {
        smatch match = *iterator;
        cout << "Найдена дата: " << match.str() << endl;
        ++iterator;
    }



    return 0;
}





