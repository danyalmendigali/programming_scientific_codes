#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия допустимого числа в строке:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "The number is 42.";
    regex regex(R"(\b\d+\b)");

    if (regex_search(text, regex))
    {
        cout << "Число найдено" << endl;
    }

    else
    {
        cout << "Число не найдено" << endl;
    }




   return 0;
}


