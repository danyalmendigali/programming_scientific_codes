#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a, i < b; i++)

// Замена HTML-тегов на соответствующие символы

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string html = "<h1>Hello, World!</h1><p> This is a paragraph.</p>";
    regex regex("<[^>]+>");
    string result = regex_replace(html, regex, "");

    cout << "Результат замены: " << result << endl;







    return 0;
}

