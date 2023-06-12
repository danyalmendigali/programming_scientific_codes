#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия только цифр в строке:

bool OnlyNumbers(string text)
{
    regex regex(R"(\d+)");
    if(regex_match(text, regex))
    {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "12345";

    if(OnlyNumbers(text)) {
        cout << "Строка содержит только цифры" << endl;
    }
    else {
        cout << "Строка содержит другие символы помимо цифр" << endl;
    }




   return 0;
}


