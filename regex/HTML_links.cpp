#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// Поиск и извлечение всех ссылок из HTML-страницы

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string html = "<a href=\"https://www.example.com\">Example</a> <a href=\"https://www.google.com\">Google</a>";
    regex regex(R"(<a\s+href=\"(https?://[^"]+)\">)");

    sregex_iterator iterator(html.begin(), html.end(), regex);
    sregex_iterator end;

     while (iterator != end) {
        smatch match = *iterator;
        cout << "Найдена ссылка: " << match[1].str() << endl;
         ++iterator;
    }







    return 0;
}



