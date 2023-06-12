#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// Поиск и извлечение всех email-адресов из текста

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "Contact us at info@example.com or support@example.com";
    regex regex(R"([a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+)");

    sregex_iterator iterator(text.begin(), text.end(), regex);
    sregex_iterator end;

    while(iterator != end) {
        smatch match = *iterator;
        cout << "Найден email: " << match.str() << endl;
        ++iterator;
    }







    return 0;
}
