#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// Извлечение информации из URL

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string url = "https://www.example.com/products?id=12345&page=2";
    regex regex(R"(https?://(www\.)?([a-zA-Z0-9-]+)\.([a-zA-Z]{2,})/products\?id=(\d+)&page=(\d+))");
    smatch match;

    if(regex_search(url, match, regex)) {
        cout << "Домен: " << match[3] << endl;
        cout << "ID: " << match[4] << endl;
        cout << "Страница: " << match[5] << endl;
    }







    return 0;
}



